
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxreg_fan {int divider; int dev; int regmap; } ;
struct mlxreg_core_data {int capability; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct mlxreg_fan *VAR_2,
     struct mlxreg_core_data *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_2->regmap, VAR_3->capability, &VAR_4);
 if (VAR_5) {
  FUNC_0(VAR_2->dev, "Failed to query capability register 0x%08x\n",
   VAR_3->capability);
  return VAR_5;
 }







 if (VAR_4 > 0 && VAR_4 <= VAR_1)
  VAR_2->divider = VAR_4 * VAR_0;

 return 0;
}
