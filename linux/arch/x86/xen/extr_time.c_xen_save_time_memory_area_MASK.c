
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * v; } ;
struct vcpu_register_time_memory_area {TYPE_1__ addr; } ;


 int FUNC_0 (int ,int ,struct vcpu_register_time_memory_area*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;

void FUNC_4(void)
{
 struct vcpu_register_time_memory_area VAR_4;
 int VAR_5;

 VAR_2 = FUNC_3() - VAR_3;

 if (!VAR_1)
  return;

 VAR_4.addr.v = ((void*)0);

 VAR_5 = FUNC_0(VAR_0, 0, &VAR_4);
 if (VAR_5 != 0)
  FUNC_2("Cannot save secondary vcpu_time_info (err %d)",
     VAR_5);
 else
  FUNC_1(VAR_1);
}
