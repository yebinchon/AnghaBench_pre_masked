
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct srpt_port {int port; int * mad_agent; } ;
struct srpt_device {TYPE_1__* device; struct srpt_port* port; } ;
struct ib_port_modify {int clr_port_cap_mask; } ;
struct TYPE_2__ {int phys_port_cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,int ,struct ib_port_modify*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct srpt_device *VAR_1)
{
 struct ib_port_modify VAR_2 = {
  .clr_port_cap_mask = VAR_0,
 };
 struct srpt_port *VAR_3;
 int VAR_4;

 for (VAR_4 = 1; VAR_4 <= VAR_1->device->phys_port_cnt; VAR_4++) {
  VAR_3 = &VAR_1->port[VAR_4 - 1];
  FUNC_0(VAR_3->port != VAR_4);
  if (FUNC_1(VAR_1->device, VAR_4, 0, &VAR_2) < 0)
   FUNC_3("disabling MAD processing failed.\n");
  if (VAR_3->mad_agent) {
   FUNC_2(VAR_3->mad_agent);
   VAR_3->mad_agent = ((void*)0);
  }
 }
}
