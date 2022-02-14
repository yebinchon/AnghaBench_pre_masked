
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct switch_val {int port_vlan; } ;
struct switch_dev {int ports; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int reg_mutex; TYPE_1__* chip; } ;
struct TYPE_2__ {int (* atu_flush_port ) (struct ar8xxx_priv*,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ar8xxx_priv*,int) ;
 struct ar8xxx_priv* FUNC_3 (struct switch_dev*) ;

int
FUNC_4(struct switch_dev *VAR_1,
       const struct switch_attr *VAR_2,
       struct switch_val *VAR_3)
{
 struct ar8xxx_priv *VAR_4 = FUNC_3(VAR_1);
 int VAR_5, VAR_6;

 VAR_5 = VAR_3->port_vlan;
 if (VAR_5 >= VAR_1->ports)
  return -VAR_0;

 FUNC_0(&VAR_4->reg_mutex);
 VAR_6 = VAR_4->chip->atu_flush_port(VAR_4, VAR_5);
 FUNC_1(&VAR_4->reg_mutex);

 return VAR_6;
}
