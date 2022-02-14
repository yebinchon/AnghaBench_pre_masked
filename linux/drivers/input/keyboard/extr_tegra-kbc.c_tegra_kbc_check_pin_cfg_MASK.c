
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tegra_kbc_pin_cfg {int type; int num; } ;
struct tegra_kbc {int dev; TYPE_1__* hw_support; struct tegra_kbc_pin_cfg* pin_cfg; } ;
struct TYPE_2__ {int max_columns; int max_rows; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*,int,int ) ;

__attribute__((used)) static bool FUNC_1(const struct tegra_kbc *VAR_1,
     unsigned int *VAR_2)
{
 int VAR_3;

 *VAR_2 = 0;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  const struct tegra_kbc_pin_cfg *VAR_4 = &VAR_1->pin_cfg[VAR_3];

  switch (VAR_4->type) {
  case 128:
   if (VAR_4->num >= VAR_1->hw_support->max_rows) {
    FUNC_0(VAR_1->dev,
     "pin_cfg[%d]: invalid row number %d\n",
     VAR_3, VAR_4->num);
    return 0;
   }
   (*VAR_2)++;
   break;

  case 130:
   if (VAR_4->num >= VAR_1->hw_support->max_columns) {
    FUNC_0(VAR_1->dev,
     "pin_cfg[%d]: invalid column number %d\n",
     VAR_3, VAR_4->num);
    return 0;
   }
   break;

  case 129:
   break;

  default:
   FUNC_0(VAR_1->dev,
    "pin_cfg[%d]: invalid entry type %d\n",
    VAR_4->type, VAR_4->num);
   return 0;
  }
 }

 return 1;
}
