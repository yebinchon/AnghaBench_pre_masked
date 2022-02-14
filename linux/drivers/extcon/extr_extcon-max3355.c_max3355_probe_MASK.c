
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int name; } ;
struct max3355_data {struct gpio_desc* id_gpiod; struct gpio_desc* edev; struct gpio_desc* shdn_gpiod; } ;
struct gpio_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (int *,char*) ;
 struct gpio_desc* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,struct gpio_desc*) ;
 struct gpio_desc* FUNC_5 (int *,char*,int ) ;
 struct max3355_data* FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *,int,int *,int (*) (int,struct max3355_data*),int,int ,struct max3355_data*) ;
 int FUNC_8 (struct gpio_desc*) ;
 int VAR_8 ;
 int FUNC_9 (int,struct max3355_data*) ;
 int FUNC_10 (struct platform_device*,struct max3355_data*) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_9)
{
 struct max3355_data *VAR_10;
 struct gpio_desc *VAR_11;
 int VAR_12, VAR_13;

 VAR_10 = FUNC_6(&VAR_9->dev, sizeof(struct max3355_data),
       VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_5(&VAR_9->dev, "id", VAR_2);
 if (FUNC_0(VAR_11)) {
  FUNC_2(&VAR_9->dev, "failed to get ID_OUT GPIO\n");
  return FUNC_1(VAR_11);
 }
 VAR_10->id_gpiod = VAR_11;

 VAR_11 = FUNC_5(&VAR_9->dev, "maxim,shdn", VAR_3);
 if (FUNC_0(VAR_11)) {
  FUNC_2(&VAR_9->dev, "failed to get SHDN# GPIO\n");
  return FUNC_1(VAR_11);
 }
 VAR_10->shdn_gpiod = VAR_11;

 VAR_10->edev = FUNC_3(&VAR_9->dev, VAR_8);
 if (FUNC_0(VAR_10->edev)) {
  FUNC_2(&VAR_9->dev, "failed to allocate extcon device\n");
  return FUNC_1(VAR_10->edev);
 }

 VAR_13 = FUNC_4(&VAR_9->dev, VAR_10->edev);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_9->dev, "failed to register extcon device\n");
  return VAR_13;
 }

 VAR_12 = FUNC_8(VAR_10->id_gpiod);
 if (VAR_12 < 0) {
  FUNC_2(&VAR_9->dev, "failed to translate ID_OUT GPIO to IRQ\n");
  return VAR_12;
 }

 VAR_13 = FUNC_7(&VAR_9->dev, VAR_12, ((void*)0), FUNC_9,
     VAR_5 | VAR_4 |
     VAR_7 |
     VAR_6,
     VAR_9->name, VAR_10);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_9->dev, "failed to request ID_OUT IRQ\n");
  return VAR_13;
 }

 FUNC_10(VAR_9, VAR_10);


 FUNC_9(VAR_12, VAR_10);

 return 0;
}
