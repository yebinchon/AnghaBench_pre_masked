
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ipmi_smi {int local_sel_device; int local_event_generator; } ;
struct TYPE_4__ {scalar_t__ netfn; scalar_t__ cmd; int* data; } ;
struct TYPE_3__ {scalar_t__ addr_type; } ;
struct ipmi_recv_msg {TYPE_2__ msg; TYPE_1__ addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct ipmi_smi *VAR_4, struct ipmi_recv_msg *VAR_5)
{
 if ((VAR_5->addr.addr_type == VAR_3)
     && (VAR_5->msg.netfn == VAR_2)
     && (VAR_5->msg.cmd == VAR_1)
     && (VAR_5->msg.data[0] == VAR_0)) {




  VAR_4->local_sel_device = (VAR_5->msg.data[6] >> 2) & 1;
  VAR_4->local_event_generator = (VAR_5->msg.data[6] >> 5) & 1;
 }
}
