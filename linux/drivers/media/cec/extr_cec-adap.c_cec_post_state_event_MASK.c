
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int log_addr_mask; int phys_addr; } ;
struct cec_event {TYPE_1__ state_change; int event; } ;
struct TYPE_4__ {int log_addr_mask; } ;
struct cec_adapter {TYPE_2__ log_addrs; int phys_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct cec_adapter*,struct cec_event*) ;

__attribute__((used)) static void FUNC_1(struct cec_adapter *VAR_1)
{
 struct cec_event VAR_2 = {
  .event = VAR_0,
 };

 VAR_2.state_change.phys_addr = VAR_1->phys_addr;
 VAR_2.state_change.log_addr_mask = VAR_1->log_addrs.log_addr_mask;
 FUNC_0(VAR_1, &VAR_2);
}
