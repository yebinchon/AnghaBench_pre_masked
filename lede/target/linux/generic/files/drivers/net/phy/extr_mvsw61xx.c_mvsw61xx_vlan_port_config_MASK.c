
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_dev {int ports; } ;
struct mvsw61xx_state {TYPE_2__* ports; TYPE_1__* vlans; } ;
struct TYPE_4__ {int mask; int fdb; int qmode; int pvid; } ;
struct TYPE_3__ {int mask; int port_mode; scalar_t__ port_based; int vid; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static void FUNC_1(struct switch_dev *VAR_2, int VAR_3)
{
 struct mvsw61xx_state *VAR_4 = FUNC_0(VAR_2);
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->ports; VAR_5++) {
  if (!(VAR_4->vlans[VAR_3].mask & (1 << VAR_5)))
   continue;

  VAR_6 = (VAR_4->vlans[VAR_3].port_mode >> (VAR_5 * 4)) & 0xf;

  if(VAR_6 != VAR_1)
   VAR_4->ports[VAR_5].pvid = VAR_4->vlans[VAR_3].vid;

  if (VAR_4->vlans[VAR_3].port_based) {
   VAR_4->ports[VAR_5].mask |= VAR_4->vlans[VAR_3].mask;
   VAR_4->ports[VAR_5].fdb = VAR_3;
  }
  else
   VAR_4->ports[VAR_5].qmode = VAR_0;
 }
}
