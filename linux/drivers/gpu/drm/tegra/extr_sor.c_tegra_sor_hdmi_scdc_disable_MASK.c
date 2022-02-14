
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct i2c_adapter* ddc; } ;
struct tegra_sor {TYPE_1__ output; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,int) ;
 int FUNC_1 (struct i2c_adapter*,int) ;
 int FUNC_2 (struct tegra_sor*) ;

__attribute__((used)) static void FUNC_3(struct tegra_sor *VAR_0)
{
 struct i2c_adapter *VAR_1 = VAR_0->output.ddc;

 FUNC_0(VAR_1, 0);
 FUNC_1(VAR_1, 0);

 FUNC_2(VAR_0);
}
