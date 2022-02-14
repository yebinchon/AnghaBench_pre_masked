
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct intel_soc_pmic {int regmap; } ;


 int FUNC_0 (int ) ;
 struct intel_soc_pmic* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct intel_soc_pmic *VAR_2 = FUNC_1(VAR_1->dev.parent);

 return FUNC_2(&VAR_1->dev,
   FUNC_0(VAR_1->dev.parent),
   VAR_2->regmap,
   &VAR_0);
}
