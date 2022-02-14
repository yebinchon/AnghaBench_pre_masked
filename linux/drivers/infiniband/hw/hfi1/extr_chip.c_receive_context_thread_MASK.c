
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_ctxtdata {int (* do_interrupt ) (struct hfi1_ctxtdata*,int) ;} ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct hfi1_ctxtdata*,int) ;

irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct hfi1_ctxtdata *VAR_3 = VAR_2;
 int VAR_4;


 (void)VAR_3->do_interrupt(VAR_3, 1);
 FUNC_3();
 FUNC_1(VAR_3);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4)
  FUNC_2(VAR_3);
 FUNC_4();

 return VAR_0;
}
