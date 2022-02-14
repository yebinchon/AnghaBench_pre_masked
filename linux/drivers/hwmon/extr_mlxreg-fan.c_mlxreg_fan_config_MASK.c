
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int connected; int reg; } ;
struct mlxreg_fan {int* cooling_levels; int dev; scalar_t__ divider; scalar_t__ samples; TYPE_2__ pwm; TYPE_1__* tacho; } ;
struct mlxreg_core_platform_data {int counter; struct mlxreg_core_data* data; } ;
struct mlxreg_core_data {int label; scalar_t__ bit; scalar_t__ mask; scalar_t__ capability; int reg; } ;
struct TYPE_3__ {int connected; scalar_t__ mask; int reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mlxreg_fan*,struct mlxreg_core_data*) ;
 int FUNC_2 (struct mlxreg_fan*,struct mlxreg_core_data*) ;
 scalar_t__ FUNC_3 (int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct mlxreg_fan *VAR_6,
        struct mlxreg_core_platform_data *VAR_7)
{
 struct mlxreg_core_data *VAR_8 = VAR_7->data;
 bool VAR_9 = 0;
 int VAR_10 = 0, VAR_11;
 int VAR_12;

 VAR_6->samples = VAR_5;
 VAR_6->divider = VAR_4;
 for (VAR_11 = 0; VAR_11 < VAR_7->counter; VAR_11++, VAR_8++) {
  if (FUNC_3(VAR_8->label, "tacho", sizeof(VAR_8->label))) {
   if (VAR_10 == VAR_2) {
    FUNC_0(VAR_6->dev, "too many tacho entries: %s\n",
     VAR_8->label);
    return -VAR_0;
   }

   if (VAR_8->capability) {
    VAR_12 = FUNC_1(VAR_6, VAR_8);
    if (VAR_12 < 0)
     return VAR_12;
    else if (!VAR_12) {
     VAR_10++;
     continue;
    }
   }

   VAR_6->tacho[VAR_10].reg = VAR_8->reg;
   VAR_6->tacho[VAR_10].mask = VAR_8->mask;
   VAR_6->tacho[VAR_10++].connected = 1;
  } else if (FUNC_3(VAR_8->label, "pwm", sizeof(VAR_8->label))) {
   if (VAR_6->pwm.connected) {
    FUNC_0(VAR_6->dev, "duplicate pwm entry: %s\n",
     VAR_8->label);
    return -VAR_0;
   }
   VAR_6->pwm.reg = VAR_8->reg;
   VAR_6->pwm.connected = 1;
  } else if (FUNC_3(VAR_8->label, "conf", sizeof(VAR_8->label))) {
   if (VAR_9) {
    FUNC_0(VAR_6->dev, "duplicate conf entry: %s\n",
     VAR_8->label);
    return -VAR_0;
   }

   if (!VAR_8->mask && !VAR_8->bit && !VAR_8->capability) {
    FUNC_0(VAR_6->dev, "invalid conf entry params: %s\n",
     VAR_8->label);
    return -VAR_0;
   }
   if (VAR_8->capability) {
    VAR_12 = FUNC_2(VAR_6, VAR_8);
    if (VAR_12)
     return VAR_12;
   } else {
    if (VAR_8->mask)
     VAR_6->samples = VAR_8->mask;
    if (VAR_8->bit)
     VAR_6->divider = VAR_8->bit;
   }
   VAR_9 = 1;
  } else {
   FUNC_0(VAR_6->dev, "invalid label: %s\n", VAR_8->label);
   return -VAR_0;
  }
 }


 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  VAR_6->cooling_levels[VAR_11] = VAR_3;
 for (VAR_11 = VAR_3; VAR_11 <= VAR_1; VAR_11++)
  VAR_6->cooling_levels[VAR_11] = VAR_11;

 return 0;
}
