
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {int name; struct device dev; } ;
struct TYPE_2__ {int work; } ;
struct gpio_extcon_data {scalar_t__ extcon_id; TYPE_1__ work; int edev; int gpiod; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__*,int (*) (int *)) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,scalar_t__*) ;
 int FUNC_5 (struct device*,int ) ;
 int FUNC_6 (struct device*,char*,int ) ;
 struct gpio_extcon_data* FUNC_7 (struct device*,int,int ) ;
 int FUNC_8 (struct device*,int,int ,unsigned long,int ,struct gpio_extcon_data*) ;
 int FUNC_9 (int *) ;
 int VAR_7 ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct platform_device*,struct gpio_extcon_data*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_8)
{
 struct gpio_extcon_data *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 unsigned long VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_9 = FUNC_7(VAR_10, sizeof(struct gpio_extcon_data), VAR_3);
 if (!VAR_9)
  return -VAR_1;
 if (VAR_9->extcon_id > VAR_2)
  return -VAR_0;

 VAR_9->gpiod = FUNC_6(VAR_10, "extcon", VAR_4);
 if (FUNC_1(VAR_9->gpiod))
  return FUNC_2(VAR_9->gpiod);
 VAR_12 = FUNC_11(VAR_9->gpiod);
 if (VAR_12 <= 0)
  return VAR_12;







 if (FUNC_10(VAR_9->gpiod))
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_6;


 VAR_9->edev = FUNC_4(VAR_10, &VAR_9->extcon_id);
 if (FUNC_1(VAR_9->edev)) {
  FUNC_3(VAR_10, "failed to allocate extcon device\n");
  return -VAR_1;
 }

 VAR_13 = FUNC_5(VAR_10, VAR_9->edev);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_0(&VAR_9->work, FUNC_9);





 VAR_13 = FUNC_8(VAR_10, VAR_12,
     VAR_7, VAR_11,
     VAR_8->name, VAR_9);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_12(VAR_8, VAR_9);

 FUNC_9(&VAR_9->work.work);

 return 0;
}
