
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {int id; struct device dev; } ;
struct gpio_chip {int base; int free; int request; int owner; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (struct gpio_chip*,struct device*,int,scalar_t__,scalar_t__,int *,int *,scalar_t__,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct gpio_chip*,int *) ;
 struct gpio_chip* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_8 (struct platform_device*,struct gpio_chip*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct gpio_chip *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_6(VAR_10, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_6 = FUNC_7(VAR_9, 0);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_12 = FUNC_2(VAR_11, VAR_10, 4, VAR_6 + VAR_2,
    VAR_6 + VAR_4, ((void*)0),
    ((void*)0), VAR_6 + VAR_3, 0);
 if (VAR_12)
  goto err;

 VAR_11->owner = VAR_5;
 VAR_11->request = VAR_8;
 VAR_11->free = VAR_7;
 VAR_11->base = VAR_9->id * 32;

 VAR_12 = FUNC_5(VAR_10, VAR_11, ((void*)0));
 if (VAR_12)
  goto err;

 FUNC_8(VAR_9, VAR_11);
 FUNC_4(VAR_10, "Loongson1 GPIO driver registered\n");

 return 0;
err:
 FUNC_3(VAR_10, "failed to register GPIO device\n");
 return VAR_12;
}
