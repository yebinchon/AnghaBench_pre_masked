
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int * int_counter; } ;
struct hfi1_ctxtdata {int (* do_interrupt ) (struct hfi1_ctxtdata*,int ) ;struct hfi1_devdata* dd; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;
 int FUNC_4 (struct hfi1_ctxtdata*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hfi1_devdata*,struct hfi1_ctxtdata*) ;

irqreturn_t FUNC_7(int VAR_3, void *VAR_4)
{
 struct hfi1_ctxtdata *VAR_5 = VAR_4;
 struct hfi1_devdata *VAR_6 = VAR_5->dd;
 int VAR_7;
 int VAR_8;

 FUNC_6(VAR_6, VAR_5);
 FUNC_5(*VAR_6->int_counter);
 FUNC_0(VAR_5);


 VAR_7 = VAR_5->do_interrupt(VAR_5, 0);






 if (VAR_7 == VAR_2)
  return VAR_1;







 FUNC_2(VAR_5);
 VAR_8 = FUNC_1(VAR_5);
 if (VAR_8)
  FUNC_3(VAR_5);

 return VAR_0;
}
