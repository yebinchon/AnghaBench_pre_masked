
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_params {long srate; } ;
struct stb0899_internal {long mclk; long sub_range; short derot_freq; scalar_t__ status; int direction; short inversion; } ;
struct stb0899_state {int verbose; struct stb0899_params params; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int FUNC_0 (short) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (short) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_10 ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_11 ;
 short FUNC_5 (short) ;
 int FUNC_6 (int ,int ,int,char*,int,...) ;
 int FUNC_7 (struct stb0899_state*) ;
 scalar_t__ FUNC_8 (struct stb0899_state*) ;
 int FUNC_9 (struct stb0899_state*,int ) ;
 int FUNC_10 (struct stb0899_state*,int ,int *,int) ;
 int FUNC_11 (struct stb0899_state*,int ,int ) ;
 int FUNC_12 (struct stb0899_state*,int ,int *,int) ;

__attribute__((used)) static enum stb0899_status FUNC_13(struct stb0899_state *VAR_12)
{
 short int VAR_13, VAR_14, VAR_15, VAR_16 = 3;
 u8 VAR_17[2];
 u8 VAR_18;
 int VAR_19 = 1;

 struct stb0899_internal *VAR_20 = &VAR_12->internal;
 struct stb0899_params *VAR_21 = &VAR_12->params;

 VAR_14 = (VAR_21->srate / 4L) / VAR_20->mclk;
 VAR_15 = (VAR_20->sub_range / 2L) / VAR_20->mclk;
 VAR_13 = VAR_20->derot_freq;

 do {
  if ((VAR_20->status != VAR_0) || (FUNC_8(VAR_12) != VAR_4)) {

   VAR_13 += VAR_19 * VAR_20->direction * VAR_14;
   if (FUNC_5(VAR_13) > VAR_15)
    VAR_16--;

   if (VAR_16) {
    FUNC_6(VAR_12->verbose, VAR_5, 1, "Derot freq=%d, mclk=%d", VAR_13, VAR_20->mclk);
    VAR_18 = FUNC_9(VAR_12, VAR_8);
    FUNC_4(VAR_1, VAR_18, 1);
    FUNC_11(VAR_12, VAR_8, VAR_18);

    FUNC_4(VAR_3, VAR_17[0], FUNC_2(VAR_20->inversion * VAR_13));
    FUNC_4(VAR_2, VAR_17[1], FUNC_0(VAR_20->inversion * VAR_13));
    FUNC_12(VAR_12, VAR_9, VAR_17, 2);

    FUNC_7(VAR_12);
    VAR_19++;
   }
  }
  VAR_20->direction = -VAR_20->direction;
 } while ((VAR_20->status != VAR_4) && VAR_16);

 if (VAR_20->status == VAR_4) {
  FUNC_10(VAR_12, VAR_9, VAR_17, 2);


  VAR_18 = FUNC_9(VAR_12, VAR_10);
  if (FUNC_3(VAR_11, VAR_18))
   VAR_20->inversion = VAR_7;
  else
   VAR_20->inversion = VAR_6;

  VAR_20->derot_freq = VAR_20->inversion * FUNC_1(VAR_17[0], VAR_17[1]);
  FUNC_6(VAR_12->verbose, VAR_5, 1, "------> DATAOK ! Derot Freq=%d", VAR_20->derot_freq);
 }

 return VAR_20->status;
}
