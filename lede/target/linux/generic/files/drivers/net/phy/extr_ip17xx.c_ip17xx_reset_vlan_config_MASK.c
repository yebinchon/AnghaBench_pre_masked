
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ip17xx_state {int remove_tag; int add_tag; TYPE_2__* ports; TYPE_1__* vlans; TYPE_3__* regs; scalar_t__ vlan_enabled; } ;
struct TYPE_6__ {int NUM_PORTS; } ;
struct TYPE_5__ {scalar_t__ pvid; } ;
struct TYPE_4__ {int ports; int tag; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct ip17xx_state *VAR_2)
{
 int VAR_3;

 VAR_2->remove_tag = (VAR_2->vlan_enabled ? ((1<<VAR_2->regs->NUM_PORTS)-1) : 0x0000);
 VAR_2->add_tag = 0x0000;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  VAR_2->vlans[VAR_3].ports = 0x0000;
  VAR_2->vlans[VAR_3].tag = (VAR_3 ? VAR_3 : 16);
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  VAR_2->ports[VAR_3].pvid = 0;
}
