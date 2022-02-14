
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bmg160_data {int regmap; } ;
struct TYPE_3__ {int filter; int bw_bits; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_2, int VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_2->regmap);
 int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); ++VAR_6) {
  if (VAR_1[VAR_6].filter == VAR_3)
   break;
 }

 VAR_5 = FUNC_3(VAR_2->regmap, VAR_0,
      VAR_1[VAR_6].bw_bits);
 if (VAR_5 < 0) {
  FUNC_1(VAR_4, "Error writing reg_pmu_bw\n");
  return VAR_5;
 }

 return 0;
}
