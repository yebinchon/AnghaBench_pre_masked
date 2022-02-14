
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gpio_chip {int ngpio; int owner; } ;
struct mlxbf_gpio_state {struct gpio_chip gc; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_2 (struct gpio_chip*,struct device*,int,scalar_t__,int *,int *,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,struct gpio_chip*,struct mlxbf_gpio_state*) ;
 struct mlxbf_gpio_state* FUNC_6 (struct device*,int,int ) ;
 scalar_t__ FUNC_7 (struct platform_device*,int ) ;
 int FUNC_8 (struct platform_device*,struct mlxbf_gpio_state*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_8)
{
 struct mlxbf_gpio_state *VAR_9;
 struct device *VAR_10 = &VAR_8->dev;
 struct gpio_chip *VAR_11;
 int VAR_12;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->base = FUNC_7(VAR_8, 0);
 if (FUNC_0(VAR_9->base))
  return FUNC_1(VAR_9->base);

 VAR_11 = &VAR_9->gc;
 VAR_12 = FUNC_2(VAR_11, VAR_10, 8,
    VAR_9->base + VAR_6,
    ((void*)0),
    ((void*)0),
    VAR_9->base + VAR_5,
    VAR_9->base + VAR_4,
    0);
 if (VAR_12)
  return -VAR_0;

 VAR_11->owner = VAR_7;
 VAR_11->ngpio = VAR_3;

 VAR_12 = FUNC_5(VAR_10, &VAR_9->gc, VAR_9);
 if (VAR_12) {
  FUNC_3(&VAR_8->dev, "Failed adding memory mapped gpiochip\n");
  return VAR_12;
 }

 FUNC_8(VAR_8, VAR_9);
 FUNC_4(&VAR_8->dev, "registered Mellanox BlueField GPIO");
 return 0;
}
