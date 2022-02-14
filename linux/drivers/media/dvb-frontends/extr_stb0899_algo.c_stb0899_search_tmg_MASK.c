
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stb0899_params {long srate; } ;
struct stb0899_internal {scalar_t__ status; long sub_range; long mclk; int direction; short inversion; int derot_freq; } ;
struct stb0899_state {int verbose; struct stb0899_params params; struct stb0899_internal internal; } ;
typedef enum stb0899_status { ____Placeholder_stb0899_status } stb0899_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (short) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (short) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 short FUNC_4 (short) ;
 int FUNC_5 (int ,int ,int,char*,int) ;
 scalar_t__ FUNC_6 (struct stb0899_state*) ;
 int FUNC_7 (struct stb0899_state*,int ,int *,int) ;
 int FUNC_8 (struct stb0899_state*,int ,int *,int) ;

__attribute__((used)) static enum stb0899_status FUNC_9(struct stb0899_state *VAR_6)
{
 struct stb0899_internal *VAR_7 = &VAR_6->internal;
 struct stb0899_params *VAR_8 = &VAR_6->params;

 short int VAR_9, VAR_10 = 0, VAR_11, VAR_12 = 3;
 int VAR_13 = 0;
 u8 VAR_14[2];

 VAR_7->status = VAR_3;


 VAR_11 = (VAR_7->sub_range / 2L) / VAR_7->mclk;
 VAR_9 = (VAR_8->srate / 2L) / VAR_7->mclk;

 while ((FUNC_6(VAR_6) != VAR_5) && VAR_12) {
  VAR_13++;
  VAR_10 += VAR_13 * VAR_7->direction * VAR_9;

  if (FUNC_4(VAR_10) > VAR_11)
   VAR_12--;

  if (VAR_12) {
   FUNC_3(VAR_1, VAR_14[0], FUNC_2(VAR_7->inversion * VAR_10));
   FUNC_3(VAR_0, VAR_14[1], FUNC_0(VAR_7->inversion * VAR_10));
   FUNC_8(VAR_6, VAR_4, VAR_14, 2);
  }
  VAR_7->direction = -VAR_7->direction;
 }

 if (VAR_7->status == VAR_5) {
  FUNC_7(VAR_6, VAR_4, VAR_14, 2);
  VAR_7->derot_freq = VAR_7->inversion * FUNC_1(VAR_14[0], VAR_14[1]);
  FUNC_5(VAR_6->verbose, VAR_2, 1, "------->TIMING OK ! Derot Freq = %d", VAR_7->derot_freq);
 }

 return VAR_7->status;
}
