
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {scalar_t__ fp_class; int* fp_mant; int fp_sticky; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fpn*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct fpn *VAR_3, int VAR_4)
{
 u_int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;






 VAR_5 = VAR_3->fp_mant[0];
 VAR_6 = VAR_3->fp_mant[1];
 VAR_7 = VAR_3->fp_mant[2];
 VAR_8 = VAR_3->fp_mant[3];


 if (VAR_4 >= VAR_2) {




  VAR_3->fp_mant[0] = 0;
  VAR_3->fp_mant[1] = 0;
  VAR_3->fp_mant[2] = 0;
  VAR_3->fp_mant[3] = 0;





   VAR_3->fp_sticky = 1;
  return (1);
 }


 VAR_9 = VAR_3->fp_sticky;
 if (VAR_4 >= 32 * 3) {
  VAR_9 |= VAR_8 | VAR_7 | VAR_6;
  VAR_8 = VAR_5, VAR_7 = 0, VAR_6 = 0, VAR_5 = 0;
 } else if (VAR_4 >= 32 * 2) {
  VAR_9 |= VAR_8 | VAR_7;
  VAR_8 = VAR_6, VAR_7 = VAR_5, VAR_6 = 0, VAR_5 = 0;
 } else if (VAR_4 >= 32) {
  VAR_9 |= VAR_8;
  VAR_8 = VAR_7, VAR_7 = VAR_6, VAR_6 = VAR_5, VAR_5 = 0;
 }


 if ((VAR_4 &= 31) != 0) {
  VAR_10 = 32 - VAR_4;
  VAR_9 |= VAR_8 << VAR_10;
  VAR_8 = (VAR_8 >> VAR_4) | (VAR_7 << VAR_10);
  VAR_7 = (VAR_7 >> VAR_4) | (VAR_6 << VAR_10);
  VAR_6 = (VAR_6 >> VAR_4) | (VAR_5 << VAR_10);
  VAR_5 >>= VAR_4;
 }
 VAR_3->fp_mant[0] = VAR_5;
 VAR_3->fp_mant[1] = VAR_6;
 VAR_3->fp_mant[2] = VAR_7;
 VAR_3->fp_mant[3] = VAR_8;
 VAR_3->fp_sticky = VAR_9;
 return (VAR_9);
}
