
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int i; } ;
struct switch_val {int port_vlan; TYPE_1__ value; } ;
struct switch_dev {int vlans; } ;
struct switch_attr {int dummy; } ;
struct mvsw61xx_state {TYPE_2__* vlans; } ;
struct TYPE_4__ {int port_based; } ;


 int VAR_0 ;
 struct mvsw61xx_state* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int FUNC_1(struct switch_dev *VAR_1,
  const struct switch_attr *VAR_2, struct switch_val *VAR_3)
{
 struct mvsw61xx_state *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = VAR_3->port_vlan;

 if (VAR_5 <= 0 || VAR_5 >= VAR_1->vlans)
  return -VAR_0;

 if (VAR_3->value.i == 1)
  VAR_4->vlans[VAR_5].port_based = 1;
 else
  VAR_4->vlans[VAR_5].port_based = 0;

 return 0;
}
