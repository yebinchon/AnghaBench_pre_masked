
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* ports; } ;
struct switch_val {int port_vlan; int len; TYPE_2__ value; } ;
struct switch_dev {int vlans; int ports; } ;
struct mvsw61xx_state {TYPE_3__* vlans; } ;
struct TYPE_6__ {int mask; int port_mode; int port_sstate; int vid; } ;
struct TYPE_4__ {int id; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_6,
  struct switch_val *VAR_7)
{
 struct mvsw61xx_state *VAR_8 = FUNC_0(VAR_6);
 int VAR_9, VAR_10, VAR_11, VAR_12;

 VAR_12 = VAR_7->port_vlan;

 if (VAR_12 <= 0 || VAR_12 >= VAR_6->vlans)
  return -VAR_0;

 VAR_8->vlans[VAR_12].mask = 0;
 VAR_8->vlans[VAR_12].port_mode = 0;
 VAR_8->vlans[VAR_12].port_sstate = 0;

 if(VAR_8->vlans[VAR_12].vid == 0)
  VAR_8->vlans[VAR_12].vid = VAR_12;

 for (VAR_9 = 0; VAR_9 < VAR_7->len; VAR_9++) {
  VAR_11 = VAR_7->value.ports[VAR_9].id;

  VAR_8->vlans[VAR_12].mask |= (1 << VAR_11);
  if (VAR_7->value.ports[VAR_9].flags &
    (1 << VAR_5))
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_4;

  VAR_8->vlans[VAR_12].port_mode |= VAR_10 << (VAR_11 * 4);
  VAR_8->vlans[VAR_12].port_sstate |=
   VAR_1 << (VAR_11 * 4 + 2);
 }





 for (VAR_9 = 0; VAR_9 < VAR_6->ports; VAR_9++)
  if (!(VAR_8->vlans[VAR_12].mask & (1 << VAR_9)))
   VAR_8->vlans[VAR_12].port_mode |=
    VAR_2 << (VAR_9 * 4);

 return 0;
}
