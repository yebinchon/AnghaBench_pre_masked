
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int base; int ngpio; scalar_t__ can_sleep; int set; int get; int direction_output; int direction_input; int get_direction; int owner; int of_node; TYPE_2__* parent; int label; } ;
struct sama5d2_piobu {TYPE_1__ chip; int regmap; } ;
struct TYPE_7__ {int of_node; } ;
struct platform_device {TYPE_2__ dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,char*,int,...) ;
 int FUNC_3 (TYPE_2__*,TYPE_1__*,struct sama5d2_piobu*) ;
 struct sama5d2_piobu* FUNC_4 (TYPE_2__*,int,int ) ;
 int FUNC_5 (struct platform_device*,struct sama5d2_piobu*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct sama5d2_piobu *VAR_10;
 int VAR_11, VAR_12;

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 FUNC_5(VAR_9, VAR_10);
 VAR_10->chip.label = VAR_9->name;
 VAR_10->chip.parent = &VAR_9->dev;
 VAR_10->chip.of_node = VAR_9->dev.of_node;
 VAR_10->chip.owner = VAR_3,
 VAR_10->chip.get_direction = VAR_7,
 VAR_10->chip.direction_input = VAR_4,
 VAR_10->chip.direction_output = VAR_5,
 VAR_10->chip.get = VAR_6,
 VAR_10->chip.set = VAR_8,
 VAR_10->chip.base = -1,
 VAR_10->chip.ngpio = VAR_2,
 VAR_10->chip.can_sleep = 0,

 VAR_10->regmap = FUNC_7(VAR_9->dev.of_node);
 if (FUNC_0(VAR_10->regmap)) {
  FUNC_2(&VAR_9->dev, "Failed to get syscon regmap %ld\n",
   FUNC_1(VAR_10->regmap));
  return FUNC_1(VAR_10->regmap);
 }

 VAR_11 = FUNC_3(&VAR_9->dev, &VAR_10->chip, VAR_10);
 if (VAR_11) {
  FUNC_2(&VAR_9->dev, "Failed to add gpiochip %d\n", VAR_11);
  return VAR_11;
 }

 for (VAR_12 = 0; VAR_12 < VAR_2; ++VAR_12) {
  VAR_11 = FUNC_6(&VAR_10->chip, VAR_12);
  if (VAR_11) {
   FUNC_2(&VAR_9->dev, "Failed to setup pin: %d %d\n",
    VAR_12, VAR_11);
   return VAR_11;
  }
 }

 return 0;
}
