
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct switch_port* ports; } ;
struct switch_val {size_t port_vlan; scalar_t__ len; TYPE_1__ value; } ;
struct switch_port {int flags; int id; } ;
struct switch_dev {int ports; } ;
struct b53_vlan {int members; int untag; } ;
struct b53_device {struct b53_vlan* vlans; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct b53_device* FUNC_1 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_2(struct switch_dev *VAR_1, struct switch_val *VAR_2)
{
 struct b53_device *VAR_3 = FUNC_1(VAR_1);
 struct switch_port *VAR_4 = &VAR_2->value.ports[0];
 struct b53_vlan *VAR_5 = &VAR_3->vlans[VAR_2->port_vlan];
 int VAR_6;

 VAR_2->len = 0;

 if (!VAR_5->members)
  return 0;

 for (VAR_6 = 0; VAR_6 < VAR_1->ports; VAR_6++) {
  if (!(VAR_5->members & FUNC_0(VAR_6)))
   continue;


  if (!(VAR_5->untag & FUNC_0(VAR_6)))
   VAR_4->flags = FUNC_0(VAR_0);
  else
   VAR_4->flags = 0;

  VAR_4->id = VAR_6;
  VAR_2->len++;
  VAR_4++;
 }

 return 0;
}
