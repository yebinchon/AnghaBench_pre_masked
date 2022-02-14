
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int fp_sign; int fp_exp; int* fp_mant; } ;
struct fpemu {int fe_cx; int fe_fpscr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct fpn*) ;
 scalar_t__ FUNC_2 (struct fpn*) ;
 scalar_t__ FUNC_3 (struct fpn*) ;
 int FUNC_4 (struct fpn*,int) ;
 scalar_t__ FUNC_5 (struct fpemu*,struct fpn*) ;
 scalar_t__ FUNC_6 (struct fpemu*,int) ;

u_int
FUNC_7(struct fpemu *VAR_9, struct fpn *VAR_10, u_int *VAR_11)
{
 u_int VAR_12 = VAR_10->fp_sign << 31;
 int VAR_13;




 if (FUNC_2(VAR_10)) {
  (void) FUNC_4(VAR_10, VAR_8 - 1 - VAR_2);
  VAR_13 = VAR_1;
  goto done;
 }
 if (FUNC_1(VAR_10)) {
  VAR_12 |= ((VAR_1) << (VAR_2 & 31));
  goto zero;
 }
 if (FUNC_3(VAR_10)) {
zero: VAR_11[1] = 0;
  return (VAR_12);
 }

 if ((VAR_13 = VAR_10->fp_exp + VAR_0) <= 0) {
  (void) FUNC_4(VAR_10, VAR_8 - VAR_7 - VAR_2 - VAR_13);
  if (FUNC_5(VAR_9, VAR_10) && VAR_10->fp_mant[2] == ((1) << (VAR_2 & 31))) {
   VAR_11[1] = 0;
   return (VAR_12 | ((1) << (VAR_2 & 31)) | 0);
  }
  if ((VAR_9->fe_cx & VAR_4) ||
      (VAR_9->fe_fpscr & VAR_6))
   VAR_9->fe_cx |= VAR_6;
  VAR_13 = 0;
  goto done;
 }
 (void) FUNC_4(VAR_10, VAR_8 - VAR_7 - 1 - VAR_2);
 if (FUNC_5(VAR_9, VAR_10) && VAR_10->fp_mant[2] == ((2) << (VAR_2 & 31)))
  VAR_13++;
 if (VAR_13 >= VAR_1) {
  VAR_9->fe_cx |= VAR_5 | VAR_6;
  if (FUNC_6(VAR_9, VAR_12)) {
   VAR_11[1] = 0;
   return (VAR_12 | ((VAR_1) << (VAR_2 & 31)) | 0);
  }
  VAR_11[1] = ~0;
  return (VAR_12 | ((VAR_1) << (VAR_2 & 31)) | (((1) << (VAR_2 & 31)) - 1));
 }
done:
 VAR_11[1] = VAR_10->fp_mant[3];
 return (VAR_12 | ((VAR_13) << (VAR_2 & 31)) | (VAR_10->fp_mant[2] & (((1) << (VAR_2 & 31)) - 1)));
}
