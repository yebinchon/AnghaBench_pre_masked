
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ip17xx_state {int num_vlans; TYPE_3__* vlans; TYPE_2__* ports; TYPE_1__* regs; int vlan_enabled; } ;
struct TYPE_6__ {unsigned int ports; } ;
struct TYPE_5__ {int shareports; } ;
struct TYPE_4__ {int NUM_PORTS; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ip17xx_state *VAR_1)
{
 int VAR_2, VAR_3;
 VAR_1->num_vlans = 0;
 for (VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if (VAR_1->vlans[VAR_2].ports != 0) {
   VAR_1->num_vlans = VAR_2+1;
  }
 }

 for (VAR_2=0; VAR_2<VAR_1->regs->NUM_PORTS; VAR_2++) {
  unsigned int VAR_4 = (1<<VAR_2);
  if (!VAR_1->vlan_enabled) {

   VAR_1->ports[VAR_2].shareports = (1<<VAR_1->regs->NUM_PORTS)-1;
   continue;
  }
  VAR_1->ports[VAR_2].shareports = VAR_4;
  for (VAR_3=0; VAR_3<VAR_0; VAR_3++) {
   if (VAR_1->vlans[VAR_3].ports & VAR_4)
    VAR_1->ports[VAR_2].shareports |= VAR_1->vlans[VAR_3].ports;
  }
 }
}
