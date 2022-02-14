
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct hfi1_ctxtdata {int aspm_enabled; int aspm_lock; int dd; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct hfi1_ctxtdata* FUNC_1 (int ,struct timer_list*,int ) ;
 struct hfi1_ctxtdata* VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct timer_list *VAR_2)
{
 struct hfi1_ctxtdata *VAR_3 = FUNC_1(VAR_3, VAR_2, VAR_0);
 unsigned long VAR_4;

 FUNC_2(&VAR_3->aspm_lock, VAR_4);
 FUNC_0(VAR_3->dd);
 VAR_3->aspm_enabled = 1;
 FUNC_3(&VAR_3->aspm_lock, VAR_4);
}
