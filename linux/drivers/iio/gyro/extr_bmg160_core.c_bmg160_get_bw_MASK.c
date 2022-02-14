
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct bmg160_data {int regmap; } ;
struct TYPE_3__ {unsigned int bw_bits; int odr; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_4(struct bmg160_data *VAR_5, int *VAR_6)
{
 struct device *VAR_7 = FUNC_2(VAR_5->regmap);
 int VAR_8;
 unsigned int VAR_9;
 int VAR_10;

 VAR_10 = FUNC_3(VAR_5->regmap, VAR_0, &VAR_9);
 if (VAR_10 < 0) {
  FUNC_1(VAR_7, "Error reading reg_pmu_bw\n");
  return VAR_10;
 }


 VAR_9 &= ~VAR_1;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); ++VAR_8) {
  if (VAR_4[VAR_8].bw_bits == VAR_9) {
   *VAR_6 = VAR_4[VAR_8].odr;
   return VAR_3;
  }
 }

 return -VAR_2;
}
