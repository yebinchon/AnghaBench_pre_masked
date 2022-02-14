
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcpu_info {int evtchn_upcall_pending; scalar_t__ evtchn_upcall_mask; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct vcpu_info* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_0 ;

void FUNC_6(void)
{
 struct vcpu_info *VAR_1;






 FUNC_1();

 VAR_1 = FUNC_3(VAR_0);
 VAR_1->evtchn_upcall_mask = 0;




 FUNC_0();
 if (FUNC_4(VAR_1->evtchn_upcall_pending))
  FUNC_5();

 FUNC_2();
}
