
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * v; } ;
struct vcpu_register_time_memory_area {TYPE_1__ addr; } ;
struct TYPE_4__ {int pvti; } ;


 int FUNC_0 (int ,int ,struct vcpu_register_time_memory_area*) ;
 int VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 () ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_3 ;

void FUNC_4(void)
{
 struct vcpu_register_time_memory_area VAR_4;
 int VAR_5;

 if (!VAR_1)
  goto out;

 VAR_4.addr.v = &VAR_1->pvti;

 VAR_5 = FUNC_0(VAR_0, 0, &VAR_4);
 if (VAR_5 != 0)
  FUNC_1("Cannot restore secondary vcpu_time_info (err %d)",
     VAR_5);

out:

 FUNC_2();
 VAR_3 = FUNC_3() - VAR_2;
}
