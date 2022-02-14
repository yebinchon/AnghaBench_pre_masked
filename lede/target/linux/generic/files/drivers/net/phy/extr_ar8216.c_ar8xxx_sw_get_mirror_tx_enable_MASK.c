
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int mirror_tx; } ;


 struct ar8xxx_priv* FUNC_0 (struct switch_dev*) ;

int
FUNC_1(struct switch_dev *VAR_0,
          const struct switch_attr *VAR_1,
          struct switch_val *VAR_2)
{
 struct ar8xxx_priv *VAR_3 = FUNC_0(VAR_0);
 VAR_2->value.i = VAR_3->mirror_tx;
 return 0;
}
