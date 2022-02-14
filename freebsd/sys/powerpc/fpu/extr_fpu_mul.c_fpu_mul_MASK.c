
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct fpn {scalar_t__* fp_mant; scalar_t__ fp_exp; int fp_sticky; int fp_sign; } ;
struct fpemu {int fe_cx; struct fpn fe_f2; struct fpn fe_f1; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct fpn*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct fpn*) ;
 scalar_t__ FUNC_3 (struct fpn*) ;
 scalar_t__ FUNC_4 (struct fpn*) ;
 int FUNC_5 (struct fpn*,struct fpn*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct fpn* FUNC_6 (struct fpemu*) ;

struct fpn *
FUNC_7(struct fpemu *VAR_9)
{
 struct fpn *VAR_10 = &VAR_9->fe_f1, *VAR_11 = &VAR_9->fe_f2;
 u_int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22;
 VAR_3;
 FUNC_0(VAR_0, ("fpu_mul:\n"));
 FUNC_1(VAR_0, VAR_10);
 FUNC_1(VAR_0, VAR_11);
 FUNC_0(VAR_0, ("=>\n"));

 FUNC_5(VAR_10, VAR_11);
 if (FUNC_3(VAR_11)) {
  VAR_11->fp_sign ^= VAR_10->fp_sign;
  VAR_9->fe_cx |= VAR_2;
  FUNC_1(VAR_0, VAR_11);
  return (VAR_11);
 }
 if (FUNC_2(VAR_11)) {
  if (FUNC_4(VAR_10)) {
   VAR_9->fe_cx |= VAR_1;
   return (FUNC_6(VAR_9));
  }
  VAR_11->fp_sign ^= VAR_10->fp_sign;
   FUNC_1(VAR_0, VAR_11);
  return (VAR_11);
 }
 if (FUNC_4(VAR_10)) {
  VAR_10->fp_sign ^= VAR_11->fp_sign;
  FUNC_1(VAR_0, VAR_10);
  return (VAR_10);
 }






 VAR_16 = VAR_10->fp_mant[3];
 VAR_17 = VAR_10->fp_mant[2];
 VAR_18 = VAR_10->fp_mant[1];
 VAR_19 = VAR_10->fp_mant[0];
 VAR_22 = VAR_12 = VAR_13 = VAR_14 = VAR_15 = 0;
 if ((VAR_21 = VAR_11->fp_mant[3]) == 0) {

 } else {
  VAR_20 = 1 << VAR_5;
  do {
   VAR_22 |= VAR_12 & 1, VAR_12 = (VAR_12 >> 1) | (VAR_13 << 31), VAR_13 = (VAR_13 >> 1) | (VAR_14 << 31), VAR_14 = (VAR_14 >> 1) | (VAR_15 << 31), VAR_15 >>= 1; if (VAR_20 & VAR_21) { FUNC_0(VAR_12, VAR_12, VAR_16); FUNC_0(VAR_13, VAR_13, VAR_17); FUNC_0(VAR_14, VAR_14, VAR_18); FUNC_0(VAR_15, VAR_15, VAR_19); }; VAR_20 <<= 1;
  } while (VAR_20 != 0);
 }
 if ((VAR_21 = VAR_11->fp_mant[2]) == 0) {
  VAR_22 |= VAR_12, VAR_12 = VAR_13, VAR_13 = VAR_14, VAR_14 = VAR_15, VAR_15 = 0;
 } else {
  VAR_20 = 1;
  do {
   VAR_22 |= VAR_12 & 1, VAR_12 = (VAR_12 >> 1) | (VAR_13 << 31), VAR_13 = (VAR_13 >> 1) | (VAR_14 << 31), VAR_14 = (VAR_14 >> 1) | (VAR_15 << 31), VAR_15 >>= 1; if (VAR_20 & VAR_21) { FUNC_0(VAR_12, VAR_12, VAR_16); FUNC_0(VAR_13, VAR_13, VAR_17); FUNC_0(VAR_14, VAR_14, VAR_18); FUNC_0(VAR_15, VAR_15, VAR_19); }; VAR_20 <<= 1;
  } while (VAR_20 != 0);
 }
 if ((VAR_21 = VAR_11->fp_mant[1]) == 0) {
  VAR_22 |= VAR_12, VAR_12 = VAR_13, VAR_13 = VAR_14, VAR_14 = VAR_15, VAR_15 = 0;
 } else {
  VAR_20 = 1;
  do {
   VAR_22 |= VAR_12 & 1, VAR_12 = (VAR_12 >> 1) | (VAR_13 << 31), VAR_13 = (VAR_13 >> 1) | (VAR_14 << 31), VAR_14 = (VAR_14 >> 1) | (VAR_15 << 31), VAR_15 >>= 1; if (VAR_20 & VAR_21) { FUNC_0(VAR_12, VAR_12, VAR_16); FUNC_0(VAR_13, VAR_13, VAR_17); FUNC_0(VAR_14, VAR_14, VAR_18); FUNC_0(VAR_15, VAR_15, VAR_19); }; VAR_20 <<= 1;
  } while (VAR_20 != 0);
 }
 VAR_21 = VAR_11->fp_mant[0];
 VAR_20 = 1;
 do {
  VAR_22 |= VAR_12 & 1, VAR_12 = (VAR_12 >> 1) | (VAR_13 << 31), VAR_13 = (VAR_13 >> 1) | (VAR_14 << 31), VAR_14 = (VAR_14 >> 1) | (VAR_15 << 31), VAR_15 >>= 1; if (VAR_20 & VAR_21) { FUNC_0(VAR_12, VAR_12, VAR_16); FUNC_0(VAR_13, VAR_13, VAR_17); FUNC_0(VAR_14, VAR_14, VAR_18); FUNC_0(VAR_15, VAR_15, VAR_19); }; VAR_20 <<= 1;
 } while (VAR_20 <= VAR_21);






 VAR_21 = VAR_10->fp_exp + VAR_11->fp_exp;
 if (VAR_15 >= VAR_4) {
  VAR_22 |= VAR_12 & 1, VAR_12 = (VAR_12 >> 1) | (VAR_13 << 31), VAR_13 = (VAR_13 >> 1) | (VAR_14 << 31), VAR_14 = (VAR_14 >> 1) | (VAR_15 << 31), VAR_15 >>= 1;
  VAR_21++;
 }
 VAR_10->fp_sign ^= VAR_11->fp_sign;
 VAR_10->fp_exp = VAR_21;
 VAR_10->fp_sticky = VAR_22;
 VAR_10->fp_mant[3] = VAR_12;
 VAR_10->fp_mant[2] = VAR_13;
 VAR_10->fp_mant[1] = VAR_14;
 VAR_10->fp_mant[0] = VAR_15;

 FUNC_1(VAR_0, VAR_10);
 return (VAR_10);
}
