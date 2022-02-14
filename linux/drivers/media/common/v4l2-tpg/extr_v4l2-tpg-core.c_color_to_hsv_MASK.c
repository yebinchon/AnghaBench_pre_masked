
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpg_data {scalar_t__ real_hsv_enc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static void FUNC_2(struct tpg_data *VAR_1, int VAR_2, int VAR_3, int VAR_4,
      int *VAR_5, int *VAR_6, int *VAR_7)
{
 int VAR_8, VAR_9, VAR_10;
 int VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_2 >>= 4;
 VAR_3 >>= 4;
 VAR_4 >>= 4;


 VAR_8 = FUNC_0(VAR_2, VAR_3, VAR_4);
 *VAR_7 = VAR_8;
 if (!VAR_8) {
  *VAR_5 = 0;
  *VAR_6 = 0;
  return;
 }


 VAR_9 = FUNC_1(VAR_2, VAR_3, VAR_4);
 VAR_10 = VAR_8 - VAR_9;
 VAR_11 = 255 * VAR_10;
 VAR_11 += VAR_8 / 2;
 VAR_11 /= VAR_8;
 *VAR_6 = VAR_11;
 if (!VAR_11) {
  *VAR_5 = 0;
  return;
 }

 VAR_13 = (VAR_1->real_hsv_enc == VAR_0) ? 60 : 85;


 if (VAR_8 == VAR_2) {
  VAR_11 = VAR_3 - VAR_4;
  VAR_12 = 0;
 } else if (VAR_8 == VAR_3) {
  VAR_11 = VAR_4 - VAR_2;
  VAR_12 = VAR_13;
 } else {
  VAR_11 = VAR_2 - VAR_3;
  VAR_12 = VAR_13 * 2;
 }

 VAR_11 *= VAR_13 / 2;
 VAR_11 += VAR_10 / 2;
 VAR_11 /= VAR_10;
 VAR_11 += VAR_12;


 if (VAR_1->real_hsv_enc == VAR_0) {
  if (VAR_11 < 0)
   VAR_11 += 180;
  else if (VAR_11 > 180)
   VAR_11 -= 180;
 } else {
  VAR_11 = VAR_11 & 0xff;
 }

 *VAR_5 = VAR_11;
}
