
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* label; int base; int ngpio; int can_sleep; TYPE_1__* parent; int direction_output; int direction_input; int get; int set; void* owner; } ;
struct vprbrd_gpio {TYPE_3__ gpiob; TYPE_3__ gpioa; struct vprbrd* vb; } ;
struct vprbrd {int dummy; } ;
struct TYPE_5__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 struct vprbrd* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,struct vprbrd_gpio*) ;
 struct vprbrd_gpio* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct platform_device*,struct vprbrd_gpio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_11)
{
 struct vprbrd *VAR_12 = FUNC_1(VAR_11->dev.parent);
 struct vprbrd_gpio *VAR_13;
 int VAR_14;

 VAR_13 = FUNC_3(&VAR_11->dev, sizeof(*VAR_13), VAR_1);
 if (VAR_13 == ((void*)0))
  return -VAR_0;

 VAR_13->vb = VAR_12;

 VAR_13->gpioa.label = "viperboard gpio a";
 VAR_13->gpioa.parent = &VAR_11->dev;
 VAR_13->gpioa.owner = VAR_2;
 VAR_13->gpioa.base = -1;
 VAR_13->gpioa.ngpio = 16;
 VAR_13->gpioa.can_sleep = 1;
 VAR_13->gpioa.set = VAR_6;
 VAR_13->gpioa.get = VAR_5;
 VAR_13->gpioa.direction_input = VAR_3;
 VAR_13->gpioa.direction_output = VAR_4;
 VAR_14 = FUNC_2(&VAR_11->dev, &VAR_13->gpioa, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(VAR_13->gpioa.parent, "could not add gpio a");
  return VAR_14;
 }


 VAR_13->gpiob.label = "viperboard gpio b";
 VAR_13->gpiob.parent = &VAR_11->dev;
 VAR_13->gpiob.owner = VAR_2;
 VAR_13->gpiob.base = -1;
 VAR_13->gpiob.ngpio = 16;
 VAR_13->gpiob.can_sleep = 1;
 VAR_13->gpiob.set = VAR_10;
 VAR_13->gpiob.get = VAR_9;
 VAR_13->gpiob.direction_input = VAR_7;
 VAR_13->gpiob.direction_output = VAR_8;
 VAR_14 = FUNC_2(&VAR_11->dev, &VAR_13->gpiob, VAR_13);
 if (VAR_14 < 0) {
  FUNC_0(VAR_13->gpiob.parent, "could not add gpio b");
  return VAR_14;
 }

 FUNC_4(VAR_11, VAR_13);

 return VAR_14;
}
