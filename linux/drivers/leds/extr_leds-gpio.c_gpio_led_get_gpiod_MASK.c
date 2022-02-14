
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_led {int gpio; int name; scalar_t__ active_low; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct gpio_desc* FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct gpio_desc*) ;
 int FUNC_3 (struct device*,int ,unsigned long,int ) ;
 struct gpio_desc* FUNC_4 (struct device*,int *,int,unsigned long) ;
 int FUNC_5 (int ) ;
 struct gpio_desc* FUNC_6 (int ) ;
 int FUNC_7 (struct gpio_desc*,int ) ;

__attribute__((used)) static struct gpio_desc *FUNC_8(struct device *VAR_4, int VAR_5,
         const struct gpio_led *VAR_6)
{
 struct gpio_desc *VAR_7;
 unsigned long VAR_8 = VAR_3;
 int VAR_9;







 VAR_7 = FUNC_4(VAR_4, ((void*)0), VAR_5, VAR_8);
 if (!FUNC_1(VAR_7)) {
  FUNC_7(VAR_7, VAR_6->name);
  return VAR_7;
 }
 if (FUNC_2(VAR_7) != -VAR_1)
  return VAR_7;
 if (!FUNC_5(VAR_6->gpio))
  return FUNC_0(-VAR_1);

 if (VAR_6->active_low)
  VAR_8 |= VAR_2;

 VAR_9 = FUNC_3(VAR_4, VAR_6->gpio, VAR_8,
        VAR_6->name);
 if (VAR_9 < 0)
  return FUNC_0(VAR_9);

 VAR_7 = FUNC_6(VAR_6->gpio);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 return VAR_7;
}
