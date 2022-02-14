
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct vibra_info {int enabled; TYPE_2__* input_dev; int play_work; int base; int regmap; } ;
struct TYPE_13__ {int parent; } ;
struct platform_device {TYPE_6__ dev; } ;
struct TYPE_11__ {scalar_t__ version; } ;
struct TYPE_12__ {char* name; int close; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_6__*,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_6__*,char*,int *) ;
 TYPE_2__* FUNC_4 (TYPE_6__*) ;
 struct vibra_info* FUNC_5 (TYPE_6__*,int,int ) ;
 int FUNC_6 (TYPE_2__*,int *,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,struct vibra_info*) ;
 int VAR_5 ;
 int FUNC_10 (struct vibra_info*) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_8)
{
 struct vibra_info *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_5(&VAR_8->dev, sizeof(*VAR_9), VAR_4);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->regmap = FUNC_2(VAR_8->dev.parent, ((void*)0));
 if (!VAR_9->regmap) {
  FUNC_1(&VAR_8->dev, "failed to get vibrator regmap.\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_3(&VAR_8->dev, "reg", &VAR_9->base);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "failed to get vibrator base address.\n");
  return VAR_10;
 }

 VAR_9->input_dev = FUNC_4(&VAR_8->dev);
 if (!VAR_9->input_dev) {
  FUNC_1(&VAR_8->dev, "failed to allocate input device.\n");
  return -VAR_1;
 }

 VAR_9->input_dev->name = "sc27xx:vibrator";
 VAR_9->input_dev->id.version = 0;
 VAR_9->input_dev->close = VAR_5;

 FUNC_9(VAR_9->input_dev, VAR_9);
 FUNC_8(VAR_9->input_dev, VAR_2, VAR_3);
 FUNC_0(&VAR_9->play_work, VAR_7);
 VAR_9->enabled = 0;

 VAR_10 = FUNC_10(VAR_9);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "failed to initialize the vibrator.\n");
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_9->input_dev, ((void*)0),
     VAR_6);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "failed to register vibrator to FF.\n");
  return VAR_10;
 }

 VAR_10 = FUNC_7(VAR_9->input_dev);
 if (VAR_10) {
  FUNC_1(&VAR_8->dev, "failed to register input device.\n");
  return VAR_10;
 }

 return 0;
}
