
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiod_data {unsigned int irq_flags; struct gpio_desc* desc; } ;
struct gpio_desc {int flags; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 struct gpiod_data* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,unsigned int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, int VAR_4)
{
 struct gpiod_data *VAR_5 = FUNC_1(VAR_3);
 struct gpio_desc *VAR_6 = VAR_5->desc;
 int VAR_7 = 0;
 unsigned int VAR_8 = VAR_5->irq_flags;

 if (!!FUNC_5(VAR_0, &VAR_6->flags) == !!VAR_4)
  return 0;

 if (VAR_4)
  FUNC_4(VAR_0, &VAR_6->flags);
 else
  FUNC_0(VAR_0, &VAR_6->flags);


 if (VAR_8 == VAR_1 ||
     VAR_8 == VAR_2) {
  FUNC_2(VAR_3);
  VAR_7 = FUNC_3(VAR_3, VAR_8);
 }

 return VAR_7;
}
