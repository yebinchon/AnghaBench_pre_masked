
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxreg_fan {int dev; int regmap; } ;
struct mlxreg_core_data {int bit; int capability; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct mlxreg_fan *VAR_0,
         struct mlxreg_core_data *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->regmap, VAR_1->capability, &VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_0->dev, "Failed to query capability register 0x%08x\n",
   VAR_1->capability);
  return VAR_3;
 }

 return !!(VAR_2 & VAR_1->bit);
}
