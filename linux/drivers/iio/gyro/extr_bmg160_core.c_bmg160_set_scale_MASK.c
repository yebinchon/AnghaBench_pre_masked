
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bmg160_data {int dps_range; int regmap; } ;
struct TYPE_3__ {int scale; int dps_range; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_3, int VAR_4)
{
 struct device *VAR_5 = FUNC_2(VAR_3->regmap);
 int VAR_6, VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_2); ++VAR_7) {
  if (VAR_2[VAR_7].scale == VAR_4) {
   VAR_6 = FUNC_3(VAR_3->regmap, VAR_0,
        VAR_2[VAR_7].dps_range);
   if (VAR_6 < 0) {
    FUNC_1(VAR_5, "Error writing reg_range\n");
    return VAR_6;
   }
   VAR_3->dps_range = VAR_2[VAR_7].dps_range;
   return 0;
  }
 }

 return -VAR_1;
}
