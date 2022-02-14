
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rm_action; } ;
struct kvmppc_host_rm_core {TYPE_1__ rm_state; int * rm_data; } ;
struct TYPE_4__ {struct kvmppc_host_rm_core* rm_core; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (scalar_t__,int *) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int VAR_1 ;

void FUNC_3(void)
{
 int VAR_2;
 unsigned int VAR_3 = FUNC_1();
 struct kvmppc_host_rm_core *VAR_4;

 VAR_2 = VAR_3 >> VAR_1;
 VAR_4 = &VAR_0->rm_core[VAR_2];

 if (VAR_4->rm_data) {
  FUNC_0(VAR_4->rm_state.rm_action,
       VAR_4->rm_data);

  VAR_4->rm_data = ((void*)0);
  FUNC_2();
  VAR_4->rm_state.rm_action = 0;
 }
}
