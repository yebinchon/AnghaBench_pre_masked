
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int parent; } ;
struct platform_device {TYPE_5__ dev; } ;
struct arizona_haptics {TYPE_2__* input_dev; int work; struct arizona* arizona; } ;
struct TYPE_8__ {int hap_act; } ;
struct arizona {int dev; TYPE_1__ pdata; int regmap; } ;
struct TYPE_9__ {char* name; int ffbit; int close; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,...) ;
 struct arizona* FUNC_3 (int ) ;
 TYPE_2__* FUNC_4 (TYPE_5__*) ;
 struct arizona_haptics* FUNC_5 (TYPE_5__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,struct arizona_haptics*) ;
 int FUNC_9 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_8)
{
 struct arizona *VAR_9 = FUNC_3(VAR_8->dev.parent);
 struct arizona_haptics *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_4);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->arizona = VAR_9;

 VAR_11 = FUNC_9(VAR_9->regmap, VAR_0,
     VAR_1, VAR_9->pdata.hap_act);
 if (VAR_11 != 0) {
  FUNC_2(VAR_9->dev, "Failed to set haptics actuator: %d\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_0(&VAR_10->work, VAR_7);

 VAR_10->input_dev = FUNC_4(&VAR_8->dev);
 if (!VAR_10->input_dev) {
  FUNC_2(VAR_9->dev, "Failed to allocate input device\n");
  return -VAR_2;
 }

 FUNC_8(VAR_10->input_dev, VAR_10);

 VAR_10->input_dev->name = "arizona:haptics";
 VAR_10->input_dev->close = VAR_5;
 FUNC_1(VAR_3, VAR_10->input_dev->ffbit);

 VAR_11 = FUNC_6(VAR_10->input_dev, ((void*)0),
          VAR_6);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9->dev, "input_ff_create_memless() failed: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_7(VAR_10->input_dev);
 if (VAR_11 < 0) {
  FUNC_2(VAR_9->dev, "couldn't register input device: %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
