
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stratix10_svc_chan {TYPE_1__* ctrl; } ;
struct TYPE_2__ {int num_active_client; int * task; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct stratix10_svc_chan *VAR_0)
{

 if (VAR_0->ctrl->task && VAR_0->ctrl->num_active_client <= 1) {
  FUNC_1("svc_smc_hvc_shm_thread is stopped\n");
  FUNC_0(VAR_0->ctrl->task);
  VAR_0->ctrl->task = ((void*)0);
 }
}
