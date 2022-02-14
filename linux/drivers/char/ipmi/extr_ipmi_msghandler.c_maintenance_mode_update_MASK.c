
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipmi_smi {int maintenance_mode_enable; int send_info; TYPE_1__* handlers; } ;
struct TYPE_2__ {int (* set_maintenance_mode ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ipmi_smi *VAR_0)
{
 if (VAR_0->handlers->set_maintenance_mode)
  VAR_0->handlers->set_maintenance_mode(
   VAR_0->send_info, VAR_0->maintenance_mode_enable);
}
