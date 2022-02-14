
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ i; } ;
struct switch_val {TYPE_1__ value; } ;
struct switch_dev {int dummy; } ;
struct switch_attr {int dummy; } ;
struct ar8xxx_priv {int reg_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct ar8xxx_priv* FUNC_4 (struct switch_dev*) ;

int
FUNC_5(struct switch_dev *VAR_2,
        const struct switch_attr *VAR_3,
        struct switch_val *VAR_4)
{
 struct ar8xxx_priv *VAR_5 = FUNC_4(VAR_2);

 FUNC_2(&VAR_5->reg_mutex);
 if (VAR_4->value.i)
  FUNC_1(VAR_5, VAR_1,
          VAR_0);
 else
  FUNC_0(VAR_5, VAR_1,
     VAR_0);
 FUNC_3(&VAR_5->reg_mutex);

 return 0;
}
