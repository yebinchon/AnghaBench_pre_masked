
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sht15_data {int val_status; scalar_t__ supply_uv; int val_temp; } ;
struct TYPE_3__ {int d1; scalar_t__ vdd; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static inline int FUNC_1(struct sht15_data *VAR_2)
{
 int VAR_3 = VAR_1[0].d1;
 int VAR_4 = (VAR_2->val_status & VAR_0) ? 40 : 10;
 int VAR_5;

 for (VAR_5 = FUNC_0(VAR_1) - 1; VAR_5 > 0; VAR_5--)

  if (VAR_2->supply_uv > VAR_1[VAR_5 - 1].vdd) {
   VAR_3 = (VAR_2->supply_uv - VAR_1[VAR_5 - 1].vdd)
    * (VAR_1[VAR_5].d1 - VAR_1[VAR_5 - 1].d1)
    / (VAR_1[VAR_5].vdd - VAR_1[VAR_5 - 1].vdd)
    + VAR_1[VAR_5 - 1].d1;
   break;
  }

 return VAR_2->val_temp * VAR_4 + VAR_3;
}
