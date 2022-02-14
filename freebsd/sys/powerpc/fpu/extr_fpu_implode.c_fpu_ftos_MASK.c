
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fpn {int fp_sign; int fp_exp; int* fp_mant; } ;
struct fpemu {int fe_cx; int fe_fpscr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct fpn*) ;
 scalar_t__ FUNC_1 (struct fpn*) ;
 scalar_t__ FUNC_2 (struct fpn*) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct fpn*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (struct fpemu*,struct fpn*) ;
 scalar_t__ FUNC_7 (struct fpemu*,int) ;

u_int
FUNC_8(struct fpemu *VAR_8, struct fpn *VAR_9)
{
 u_int VAR_10 = VAR_9->fp_sign << 31;
 int VAR_11;





 if (FUNC_1(VAR_9)) {





  (void) FUNC_4(VAR_9, VAR_3 - 1 - VAR_6);
  VAR_11 = VAR_5;
  goto done;
 }
 if (FUNC_0(VAR_9))
  return (VAR_10 | ((VAR_5) << VAR_6));
 if (FUNC_2(VAR_9))
  return (VAR_10);
 if ((VAR_11 = VAR_9->fp_exp + VAR_4) <= 0) {

  (void) FUNC_4(VAR_9, VAR_3 - VAR_2 - VAR_6 - VAR_11);
  if (FUNC_6(VAR_8, VAR_9) && VAR_9->fp_mant[3] == ((1) << VAR_6))
   return (VAR_10 | ((1) << VAR_6) | 0);
  if ((VAR_8->fe_cx & VAR_0) ||
      (VAR_8->fe_fpscr & VAR_1))
   VAR_8->fe_cx |= VAR_1;
  return (VAR_10 | ((0) << VAR_6) | VAR_9->fp_mant[3]);
 }

 (void) FUNC_4(VAR_9, VAR_3 - VAR_2 - 1 - VAR_6);




 if (FUNC_6(VAR_8, VAR_9) && VAR_9->fp_mant[3] == ((2) << VAR_6))
  VAR_11++;
 if (VAR_11 >= VAR_5) {

  if (FUNC_7(VAR_8, VAR_10))
   return (VAR_10 | ((VAR_5) << VAR_6));
  return (VAR_10 | ((VAR_5 - 1) << VAR_6) | (((1) << VAR_6) - 1));
 }
done:

 return (VAR_10 | ((VAR_11) << VAR_6) | (VAR_9->fp_mant[3] & (((1) << VAR_6) - 1)));
}
