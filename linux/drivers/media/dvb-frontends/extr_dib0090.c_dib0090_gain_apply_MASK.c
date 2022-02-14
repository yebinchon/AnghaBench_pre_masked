
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct dib0090_state {int* rf_ramp; int rf_gain_limit; int* bb_ramp; int current_gain; int* gain; int rf_lt_def; int bb_1_def; int* gain_reg; } ;
typedef int s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dib0090_state*,int ,int) ;
 int FUNC_1 (char*,int,int,int,int,int,int,int) ;
 int * VAR_2 ;

__attribute__((used)) static void FUNC_2(struct dib0090_state *VAR_3, s16 VAR_4, s16 VAR_5, u8 VAR_6)
{
 u16 VAR_7, VAR_8, VAR_9;
 u16 VAR_10, VAR_11, VAR_12[4] = { 0 }, VAR_13;
 const u16 *VAR_14;

 if (VAR_5 < -511)
  VAR_5 = -511;
 if (VAR_5 > 511)
  VAR_5 = 511;

 if (VAR_6) {
  VAR_5 *= (1 << VAR_1);
  VAR_4 *= (1 << VAR_0);
 }

 if (VAR_5 >= ((s16) (VAR_3->rf_ramp[0] << VAR_1) - VAR_3->rf_gain_limit))
  VAR_3->rf_gain_limit = VAR_3->rf_ramp[0] << VAR_1;
 else
  VAR_3->rf_gain_limit += VAR_5;

 if (VAR_3->rf_gain_limit < 0)
  VAR_3->rf_gain_limit = 0;


 VAR_13 = ((VAR_3->rf_gain_limit >> VAR_1) + VAR_3->bb_ramp[0]) << VAR_0;
 if (VAR_4 >= ((s16) VAR_13 - VAR_3->current_gain))
  VAR_3->current_gain = VAR_13;
 else
  VAR_3->current_gain += VAR_4;

 if (VAR_3->current_gain < 0)
  VAR_3->current_gain = 0;


 VAR_13 = VAR_3->current_gain >> VAR_0;


 if (VAR_13 > (VAR_3->rf_gain_limit >> VAR_1)) {
  VAR_7 = VAR_3->rf_gain_limit >> VAR_1;
  VAR_8 = VAR_13 - VAR_7;
  if (VAR_8 > VAR_3->bb_ramp[0])
   VAR_8 = VAR_3->bb_ramp[0];
 } else {
  VAR_7 = VAR_13;
  VAR_8 = 0;
 }

 VAR_3->gain[0] = VAR_7;
 VAR_3->gain[1] = VAR_8;



 VAR_14 = VAR_3->rf_ramp + 1;
 VAR_9 = VAR_7;
 for (VAR_10 = 0; VAR_10 < 7; VAR_10++) {
  if (VAR_14[0] == 0 || VAR_9 < (VAR_14[1] - VAR_14[0]))
   VAR_11 = 0;
  else if (VAR_9 >= VAR_14[1])
   VAR_11 = VAR_14[2];
  else
   VAR_11 = ((VAR_9 - (VAR_14[1] - VAR_14[0])) * VAR_14[2]) / VAR_14[0];

  if (VAR_10 == 0)
   VAR_12[0] = VAR_11;
  else if (VAR_10 == 1)
   VAR_12[0] |= VAR_11 << 7;
  else if (VAR_10 == 2)
   VAR_12[1] = VAR_11;
  else if (VAR_10 == 3)
   VAR_12[1] |= VAR_11 << 7;
  else if (VAR_10 == 4)
   VAR_12[2] = VAR_11 | VAR_3->rf_lt_def;
  else if (VAR_10 == 5)
   VAR_12[3] = VAR_11 << 3;
  else if (VAR_10 == 6)
   VAR_12[3] |= VAR_11 << 8;

  VAR_14 += 3;


  if (VAR_10 == 4) {
   VAR_14 = VAR_3->bb_ramp + 1;
   VAR_9 = VAR_8;
  }
 }
 VAR_12[3] |= VAR_3->bb_1_def;
 VAR_12[3] |= ((VAR_8 % 10) * 100) / 125;







 for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
  VAR_11 = VAR_12[VAR_10];
  if (VAR_6 || VAR_3->gain_reg[VAR_10] != VAR_11) {
   VAR_3->gain_reg[VAR_10] = VAR_11;
   FUNC_0(VAR_3, VAR_2[VAR_10], VAR_11);
  }
 }
}
