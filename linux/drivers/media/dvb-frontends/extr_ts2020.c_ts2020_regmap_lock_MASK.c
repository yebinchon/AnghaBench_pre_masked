
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ts2020_priv {TYPE_2__* fe; int regmap_mutex; } ;
struct TYPE_3__ {int (* i2c_gate_ctrl ) (TYPE_2__*,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct ts2020_priv *VAR_1 = VAR_0;

 FUNC_0(&VAR_1->regmap_mutex);
 if (VAR_1->fe->ops.i2c_gate_ctrl)
  VAR_1->fe->ops.i2c_gate_ctrl(VAR_1->fe, 1);
}
