
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int64_t ;
typedef int u_int ;
struct fpn {int fp_sign; int fp_class; int fp_exp; int* fp_mant; } ;
struct fpemu {int fe_cx; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpn*,int ) ;

u_int
FUNC_1(struct fpemu *VAR_3, struct fpn *VAR_4, u_int *VAR_5)
{
 u_int64_t VAR_6;
 int VAR_7, VAR_8;

 VAR_7 = VAR_4->fp_sign;
 switch (VAR_4->fp_class) {

 case 128:
  VAR_5[1] = 0;
  return (0);

 case 129:
  if ((VAR_8 = VAR_4->fp_exp) >= 64)
   break;

  if (FUNC_0(VAR_4, VAR_2 - 1 - VAR_8) != 0)
   VAR_3->fe_cx |= VAR_0;
  VAR_6 = ((u_int64_t)VAR_4->fp_mant[2]<<32)|VAR_4->fp_mant[3];
  if (VAR_6 >= ((u_int64_t)0x8000000000000000LL + VAR_7))
   break;
  return (VAR_7 ? -VAR_6 : VAR_6);

 default:
  break;
 }

 VAR_3->fe_cx |= VAR_1;
 return (0x7fffffffffffffffLL + VAR_7);
}
