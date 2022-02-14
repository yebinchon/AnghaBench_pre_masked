
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fpn {scalar_t__ fp_class; scalar_t__ fp_sign; } ;
struct fpemu {int fe_fpscr; int fe_cx; struct fpn fe_f3; struct fpn fe_f2; struct fpn fe_f1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct fpn*) ;
 scalar_t__ FUNC_1 (struct fpn*) ;
 scalar_t__ FUNC_2 (struct fpn*) ;
 scalar_t__ FUNC_3 (struct fpn*) ;
 scalar_t__ FUNC_4 (struct fpn*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct fpemu*) ;

void
FUNC_7(struct fpemu *VAR_7, int VAR_8)
{
 struct fpn *VAR_9, *VAR_10, *VAR_11;
 int VAR_12;

 VAR_9 = &VAR_7->fe_f1;
 VAR_10 = &VAR_7->fe_f2;
 VAR_11 = &VAR_7->fe_f3;

 if (FUNC_1(VAR_9) || FUNC_1(VAR_10)) {





  VAR_12 = VAR_3;
  if (FUNC_3(VAR_9) || FUNC_3(VAR_10))
   VAR_12 |= VAR_5;
  if (VAR_8) {
   if (VAR_7->fe_fpscr & VAR_4 || FUNC_2(VAR_9) || FUNC_2(VAR_10))
    VAR_12 |= VAR_6;
  }
  goto done;
 }





 if (FUNC_4(VAR_9) && FUNC_4(VAR_10)) {
  VAR_12 = VAR_0;
  goto done;
 }
 if (VAR_9->fp_sign) {
  if (!VAR_10->fp_sign) {
   VAR_12 = VAR_2;
   goto done;
  }
 } else {
  if (VAR_10->fp_sign) {
   VAR_12 = VAR_1;
   goto done;
  }
 }
 if (VAR_9->fp_class < VAR_10->fp_class) {
  VAR_12 = (VAR_9->fp_sign ? ((VAR_2) == VAR_2 ? VAR_1 : VAR_2) : (VAR_2));
  goto done;
 }
 if (VAR_9->fp_class > VAR_10->fp_class) {
  VAR_12 = (VAR_9->fp_sign ? ((VAR_1) == VAR_2 ? VAR_1 : VAR_2) : (VAR_1));
  goto done;
 }

 if (FUNC_0(VAR_9)) {
  VAR_12 = VAR_0;
  goto done;
 }
 FUNC_6(VAR_7);
 if (FUNC_4(VAR_11))
  VAR_12 = VAR_0;
 else if (VAR_11->fp_sign)
  VAR_12 = VAR_2;
 else
  VAR_12 = VAR_1;
done:
 VAR_7->fe_cx = VAR_12;
}
