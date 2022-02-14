
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct bmi160_data {int regmap; } ;
typedef enum bmi160_sensor_type { ____Placeholder_bmi160_sensor_type } bmi160_sensor_type ;
struct TYPE_6__ {int range; } ;
struct TYPE_5__ {int num; TYPE_1__* tbl; } ;
struct TYPE_4__ {int bits; int uscale; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;

__attribute__((used)) static
int FUNC_1(struct bmi160_data *VAR_3, enum bmi160_sensor_type VAR_4,
       int *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_3->regmap, VAR_1[VAR_4].range, &VAR_8);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_2[VAR_4].num; VAR_6++)
  if (VAR_2[VAR_4].tbl[VAR_6].bits == VAR_8) {
   *VAR_5 = VAR_2[VAR_4].tbl[VAR_6].uscale;
   return 0;
  }

 return -VAR_0;
}
