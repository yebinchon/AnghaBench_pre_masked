
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int of_node; int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct of_device_id {TYPE_1__* data; } ;
struct da9063_onkey {int key_power; TYPE_3__* input; int work; int phys; TYPE_1__* config; int regmap; TYPE_5__* dev; } ;
struct TYPE_12__ {TYPE_5__* parent; } ;
struct TYPE_13__ {char* name; TYPE_2__ dev; int phys; } ;
struct TYPE_11__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_5__*,char*,...) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_5__*,int ,struct da9063_onkey*) ;
 TYPE_3__* FUNC_4 (TYPE_5__*) ;
 struct da9063_onkey* FUNC_5 (TYPE_5__*,int,int ) ;
 int FUNC_6 (TYPE_5__*,int,int *,int ,int,char*,struct da9063_onkey*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,int ,int ) ;
 struct of_device_id* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct platform_device*,char*) ;
 int FUNC_12 (int ,int,char*,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_11)
{
 struct da9063_onkey *VAR_12;
 const struct of_device_id *VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_13 = FUNC_9(VAR_8,
         VAR_11->dev.of_node);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_5(&VAR_11->dev, sizeof(struct da9063_onkey),
        VAR_3);
 if (!VAR_12) {
  FUNC_1(&VAR_11->dev, "Failed to allocate memory.\n");
  return -VAR_0;
 }

 VAR_12->config = VAR_13->data;
 VAR_12->dev = &VAR_11->dev;

 VAR_12->regmap = FUNC_2(VAR_11->dev.parent, ((void*)0));
 if (!VAR_12->regmap) {
  FUNC_1(&VAR_11->dev, "Parent regmap unavailable.\n");
  return -VAR_1;
 }

 VAR_12->key_power = !FUNC_10(VAR_11->dev.of_node,
        "dlg,disable-key-power");

 VAR_12->input = FUNC_4(&VAR_11->dev);
 if (!VAR_12->input) {
  FUNC_1(&VAR_11->dev, "Failed to allocated input device.\n");
  return -VAR_0;
 }

 VAR_12->input->name = VAR_12->config->name;
 FUNC_12(VAR_12->phys, sizeof(VAR_12->phys), "%s/input0",
   VAR_12->config->name);
 VAR_12->input->phys = VAR_12->phys;
 VAR_12->input->dev.parent = &VAR_11->dev;

 FUNC_8(VAR_12->input, VAR_2, VAR_6);

 FUNC_0(&VAR_12->work, VAR_10);

 VAR_15 = FUNC_3(&VAR_11->dev, VAR_7, VAR_12);
 if (VAR_15) {
  FUNC_1(&VAR_11->dev,
   "Failed to add cancel poll action: %d\n",
   VAR_15);
  return VAR_15;
 }

 VAR_14 = FUNC_11(VAR_11, "ONKEY");
 if (VAR_14 < 0)
  return VAR_14;

 VAR_15 = FUNC_6(&VAR_11->dev, VAR_14,
       ((void*)0), VAR_9,
       VAR_5 | VAR_4,
       "ONKEY", VAR_12);
 if (VAR_15) {
  FUNC_1(&VAR_11->dev,
   "Failed to request IRQ %d: %d\n", VAR_14, VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_7(VAR_12->input);
 if (VAR_15) {
  FUNC_1(&VAR_11->dev,
   "Failed to register input device: %d\n", VAR_15);
  return VAR_15;
 }

 return 0;
}
