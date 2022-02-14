
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* ports; } ;
struct switch_val {int port_vlan; int len; TYPE_3__ value; } ;
struct switch_dev {int vlans; int ports; } ;
struct mvsw61xx_state {TYPE_1__* vlans; } ;
struct TYPE_5__ {int id; int flags; } ;
struct TYPE_4__ {int mask; int port_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_3,
  struct switch_val *VAR_4)
{
 struct mvsw61xx_state *VAR_5 = FUNC_0(VAR_3);
 int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = VAR_4->port_vlan;

 if (VAR_9 <= 0 || VAR_9 >= VAR_3->vlans)
  return -VAR_0;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_3->ports; VAR_6++) {
  if (VAR_5->vlans[VAR_9].mask & (1 << VAR_6)) {
   VAR_4->value.ports[VAR_7].id = VAR_6;

   VAR_8 = (VAR_5->vlans[VAR_9].port_mode >> (VAR_6 * 4)) & 0xf;
   if (VAR_8 == VAR_1)
    VAR_4->value.ports[VAR_7].flags =
     (1 << VAR_2);
   else
    VAR_4->value.ports[VAR_7].flags = 0;

   VAR_7++;
  }
 }

 VAR_4->len = VAR_7;

 return 0;
}
