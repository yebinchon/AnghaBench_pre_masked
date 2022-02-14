
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int label; int set; int get; int direction_output; int direction_input; int get_direction; int * parent; int ngpio; } ;
struct xgene_gpio {TYPE_1__ chip; int lock; int base; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_1__*,struct xgene_gpio*) ;
 int FUNC_4 (int *,int ,int ) ;
 struct xgene_gpio* FUNC_5 (int *,int,int ) ;
 struct resource* FUNC_6 (struct platform_device*,int ,int ) ;
 int FUNC_7 (struct platform_device*,struct xgene_gpio*) ;
 int FUNC_8 (struct resource*) ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_10)
{
 struct resource *VAR_11;
 struct xgene_gpio *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_5(&VAR_10->dev, sizeof(*VAR_12), VAR_2);
 if (!VAR_12) {
  VAR_13 = -VAR_1;
  goto err;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_3, 0);
 if (!VAR_11) {
  VAR_13 = -VAR_0;
  goto err;
 }

 VAR_12->base = FUNC_4(&VAR_10->dev, VAR_11->start,
       FUNC_8(VAR_11));
 if (!VAR_12->base) {
  VAR_13 = -VAR_1;
  goto err;
 }

 VAR_12->chip.ngpio = VAR_4;

 FUNC_9(&VAR_12->lock);
 VAR_12->chip.parent = &VAR_10->dev;
 VAR_12->chip.get_direction = VAR_8;
 VAR_12->chip.direction_input = VAR_5;
 VAR_12->chip.direction_output = VAR_6;
 VAR_12->chip.get = VAR_7;
 VAR_12->chip.set = VAR_9;
 VAR_12->chip.label = FUNC_2(&VAR_10->dev);
 VAR_12->chip.base = -1;

 FUNC_7(VAR_10, VAR_12);

 VAR_13 = FUNC_3(&VAR_10->dev, &VAR_12->chip, VAR_12);
 if (VAR_13) {
  FUNC_0(&VAR_10->dev,
   "failed to register gpiochip.\n");
  goto err;
 }

 FUNC_1(&VAR_10->dev, "X-Gene GPIO driver registered.\n");
 return 0;
err:
 FUNC_0(&VAR_10->dev, "X-Gene GPIO driver registration failed.\n");
 return VAR_13;
}
