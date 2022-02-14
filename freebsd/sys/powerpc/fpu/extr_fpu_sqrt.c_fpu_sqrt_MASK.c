
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int* fp_mant; int fp_exp; int fp_sticky; scalar_t__ fp_sign; int fp_class; } ;
struct fpemu {int fe_cx; struct fpn fe_f1; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,struct fpn*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int,int,int) ;
 int FUNC_4 (int,int,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (struct fpn*) ;
 scalar_t__ FUNC_6 (struct fpn*) ;
 scalar_t__ FUNC_7 (struct fpn*) ;
 int VAR_9 ;
 struct fpn* FUNC_8 (struct fpemu*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

struct fpn *
FUNC_9(struct fpemu *VAR_14)
{
 struct fpn *VAR_15 = &VAR_14->fe_f1;
 u_int VAR_16, VAR_17, VAR_18;
 u_int VAR_19, VAR_20, VAR_21, VAR_22;
 u_int VAR_23, VAR_24, VAR_25, VAR_26;
 u_int VAR_27, VAR_28, VAR_29, VAR_30;
 int VAR_31;
 VAR_7;
 FUNC_0(VAR_3, ("fpu_sqer:\n"));
 FUNC_1(VAR_3, VAR_15);
 FUNC_0(VAR_3, ("=>\n"));
 if (FUNC_6(VAR_15)) {
  VAR_14->fe_cx |= VAR_4;
  FUNC_1(VAR_3, VAR_15);
  return (VAR_15);
 }
 if (FUNC_7(VAR_15)) {
  VAR_14->fe_cx |= VAR_6;
  VAR_15->fp_class = VAR_2;
  FUNC_1(VAR_3, VAR_15);
  return (VAR_15);
 }
 if (VAR_15->fp_sign) {
  VAR_14->fe_cx |= VAR_5;
  return (FUNC_8(VAR_14));
 }
 if (FUNC_5(VAR_15)) {
  FUNC_1(VAR_3, VAR_15);
  return (VAR_15);
 }
 VAR_19 = VAR_15->fp_mant[0];
 VAR_20 = VAR_15->fp_mant[1];
 VAR_21 = VAR_15->fp_mant[2];
 VAR_22 = VAR_15->fp_mant[3];
 VAR_31 = VAR_15->fp_exp;
 if (VAR_31 & 1)
  { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };

 VAR_15->fp_exp = VAR_31 >> 1;
 VAR_16 = VAR_8;
 { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };

  VAR_17 = VAR_16;
  VAR_19 -= VAR_16;
  VAR_23 = VAR_16 << 1;

           ;
 while ((VAR_16 >>= 1) != 0) {
  { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
  VAR_18 = VAR_23 | VAR_16;
  if (VAR_19 >= VAR_18) {
   VAR_19 -= VAR_18;
   VAR_17 |= VAR_16;
   VAR_23 |= VAR_16 << 1;
  }
            ;
 }
 VAR_15->fp_mant[0] = VAR_17;





 VAR_17 = 0;
 VAR_24 = 0;
 VAR_16 = 1 << 31;
 { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
 VAR_18 = VAR_16;
 FUNC_4(VAR_28, VAR_20, VAR_18);
 FUNC_2(VAR_27, VAR_19, VAR_23);
 if ((int)VAR_27 >= 0) {
  VAR_19 = VAR_27, VAR_20 = VAR_28;
  VAR_17 = VAR_16;
  VAR_23 |= 1;
 }
           ;
 while ((VAR_16 >>= 1) != 0) {
  { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
  VAR_18 = VAR_24 | VAR_16;
  FUNC_4(VAR_28, VAR_20, VAR_18);
  FUNC_2(VAR_27, VAR_19, VAR_23);
  if ((int)VAR_27 >= 0) {
   VAR_19 = VAR_27, VAR_20 = VAR_28;
   VAR_17 |= VAR_16;
   VAR_24 |= VAR_16 << 1;
  }
            ;
 }
 VAR_15->fp_mant[1] = VAR_17;





 VAR_17 = 0;
 VAR_25 = 0;
 VAR_16 = 1 << 31;
 { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
 VAR_18 = VAR_16;
 FUNC_4(VAR_29, VAR_21, VAR_18);
 FUNC_3(VAR_28, VAR_20, VAR_24);
 FUNC_2(VAR_27, VAR_19, VAR_23);
 if ((int)VAR_27 >= 0) {
  VAR_19 = VAR_27, VAR_20 = VAR_28, VAR_21 = VAR_29;
  VAR_17 = VAR_16;
  VAR_24 |= 1;
 }
           ;
 while ((VAR_16 >>= 1) != 0) {
  { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
  VAR_18 = VAR_25 | VAR_16;
  FUNC_4(VAR_29, VAR_21, VAR_18);
  FUNC_3(VAR_28, VAR_20, VAR_24);
  FUNC_2(VAR_27, VAR_19, VAR_23);
  if ((int)VAR_27 >= 0) {
   VAR_19 = VAR_27, VAR_20 = VAR_28, VAR_21 = VAR_29;
   VAR_17 |= VAR_16;
   VAR_25 |= VAR_16 << 1;
  }
            ;
 }
 VAR_15->fp_mant[2] = VAR_17;





 VAR_17 = 0;
 VAR_26 = 0;
 VAR_16 = 1 << 31;
 { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
 VAR_18 = VAR_16;
 FUNC_4(VAR_30, VAR_22, VAR_18);
 FUNC_3(VAR_29, VAR_21, VAR_25);
 FUNC_3(VAR_28, VAR_20, VAR_24);
 FUNC_2(VAR_27, VAR_19, VAR_23);
 if ((int)VAR_27 >= 0) {
  VAR_19 = VAR_27, VAR_20 = VAR_28, VAR_21 = VAR_29; VAR_22 = VAR_30;
  VAR_17 = VAR_16;
  VAR_25 |= 1;
 }
           ;
 while ((VAR_16 >>= 1) != 0) {
  { VAR_19 = (VAR_19 << 1) | (VAR_20 >> 31); VAR_20 = (VAR_20 << 1) | (VAR_21 >> 31); VAR_21 = (VAR_21 << 1) | (VAR_22 >> 31); VAR_22 <<= 1; };
  VAR_18 = VAR_26 | VAR_16;
  FUNC_4(VAR_30, VAR_22, VAR_18);
  FUNC_3(VAR_29, VAR_21, VAR_25);
  FUNC_3(VAR_28, VAR_20, VAR_24);
  FUNC_2(VAR_27, VAR_19, VAR_23);
  if ((int)VAR_27 >= 0) {
   VAR_19 = VAR_27, VAR_20 = VAR_28, VAR_21 = VAR_29; VAR_22 = VAR_30;
   VAR_17 |= VAR_16;
   VAR_26 |= VAR_16 << 1;
  }
            ;
 }
 VAR_15->fp_mant[3] = VAR_17;





 VAR_15->fp_sticky = VAR_19 | VAR_20 | VAR_21 | VAR_22;
 FUNC_1(VAR_3, VAR_15);
 return (VAR_15);
}
