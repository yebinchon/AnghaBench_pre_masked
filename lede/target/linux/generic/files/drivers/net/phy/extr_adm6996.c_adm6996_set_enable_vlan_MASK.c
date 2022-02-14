
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct adm6996_priv {int enable_vlan; } ;


 int VAR_0 ;
 struct adm6996_priv* FUNC_0 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_1(struct switch_dev *VAR_1, const struct switch_attr *VAR_2,
   struct switch_val *VAR_3)
{
 struct adm6996_priv *VAR_4 = FUNC_0(VAR_1);

 if (VAR_3->value.i > 1)
  return -VAR_0;

 VAR_4->enable_vlan = VAR_3->value.i;

 return 0;
}
