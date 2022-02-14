
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {int send_info; TYPE_1__* handlers; int in_shutdown; scalar_t__ maintenance_mode_enable; } ;
struct TYPE_2__ {int (* request_events ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ipmi_smi *VAR_0)
{

 if (VAR_0->maintenance_mode_enable)
  return;

 if (!VAR_0->in_shutdown)
  VAR_0->handlers->request_events(VAR_0->send_info);
}
