
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ina2xx_data {TYPE_1__* config; int regmap; } ;
struct TYPE_2__ {int config_default; } ;


 int VAR_0 ;
 int FUNC_0 (struct ina2xx_data*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct ina2xx_data *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->regmap, VAR_0,
          VAR_1->config->config_default);
 if (VAR_2 < 0)
  return VAR_2;

 return FUNC_0(VAR_1);
}
