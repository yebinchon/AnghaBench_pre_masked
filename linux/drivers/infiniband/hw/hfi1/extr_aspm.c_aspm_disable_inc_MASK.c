
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int aspm_lock; int aspm_disabled_cnt; } ;


 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct hfi1_devdata *VAR_0)
{
 unsigned long VAR_1;

 FUNC_2(&VAR_0->aspm_lock, VAR_1);
 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->aspm_disabled_cnt);
 FUNC_3(&VAR_0->aspm_lock, VAR_1);
}
