
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_internal {scalar_t__ status; long sub_range; long mclk; short derot_freq; int direction; int derot_step; short inversion; } ;
struct stb0899_state {int verbose; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (short) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (short) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 short FUNC_4 (short) ;
 int FUNC_5 (int ,int ,int,char*,int,...) ;
 scalar_t__ FUNC_6 (struct stb0899_state*) ;
 int FUNC_7 (struct stb0899_state*,int ) ;
 int FUNC_8 (struct stb0899_state*,int ,int *,int) ;
 int FUNC_9 (struct stb0899_state*,int ,int ) ;
 int FUNC_10 (struct stb0899_state*,int ,int *,int) ;

__attribute__((used)) static enum stb0899_status FUNC_11(struct stb0899_state *VAR_8)
{
 struct stb0899_internal *VAR_9 = &VAR_8->internal;

 short int VAR_10 = 0, VAR_11 = 0, VAR_12, VAR_13 = 3;
 int VAR_14 = 0;
 u8 VAR_15[2];
 u8 VAR_16;

 VAR_9->status = VAR_5;
 VAR_12 = (VAR_9->sub_range / 2L) / VAR_9->mclk;
 VAR_10 = VAR_9->derot_freq;

 VAR_16 = FUNC_7(VAR_8, VAR_6);
 FUNC_3(VAR_1, VAR_16, 1);
 FUNC_9(VAR_8, VAR_6, VAR_16);

 do {
  FUNC_5(VAR_8->verbose, VAR_4, 1, "Derot Freq=%d, mclk=%d", VAR_10, VAR_9->mclk);
  if (FUNC_6(VAR_8) == VAR_5) {
   VAR_14++;
   VAR_11 = VAR_10;
   VAR_10 += VAR_14 * VAR_9->direction * VAR_9->derot_step;

   if(FUNC_4(VAR_10) > VAR_12)
    VAR_13--;

   if (VAR_13) {
    VAR_16 = FUNC_7(VAR_8, VAR_6);
    FUNC_3(VAR_1, VAR_16, 1);
    FUNC_9(VAR_8, VAR_6, VAR_16);

    FUNC_3(VAR_3, VAR_15[0], FUNC_2(VAR_9->inversion * VAR_10));
    FUNC_3(VAR_2, VAR_15[1], FUNC_0(VAR_9->inversion * VAR_10));
    FUNC_10(VAR_8, VAR_7, VAR_15, 2);
   }
  }

  VAR_9->direction = -VAR_9->direction;
 } while ((VAR_9->status != VAR_0) && VAR_13);

 if (VAR_9->status == VAR_0) {
  FUNC_8(VAR_8, VAR_7, VAR_15, 2);
  VAR_9->derot_freq = VAR_9->inversion * FUNC_1(VAR_15[0], VAR_15[1]);
  FUNC_5(VAR_8->verbose, VAR_4, 1, "----> CARRIER OK !, Derot Freq=%d", VAR_9->derot_freq);
 } else {
  VAR_9->derot_freq = VAR_11;
 }

 return VAR_9->status;
}
