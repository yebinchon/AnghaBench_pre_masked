
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct gpio_keys_platform_data {int nbuttons; int (* enable ) (int ) ;} ;
struct gpio_keys_button_dev {int * data; int dev; struct gpio_keys_platform_data* pdata; int work; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct platform_device*,struct gpio_keys_button_dev**,int) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct gpio_keys_button_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct gpio_keys_platform_data *VAR_2;
 struct gpio_keys_button_dev *VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_1, &VAR_3, 1);

 if (VAR_4)
  return VAR_4;

 FUNC_0(&VAR_3->work, VAR_0);

 VAR_2 = VAR_3->pdata;

 if (VAR_2->enable)
  VAR_2->enable(VAR_3->dev);

 for (VAR_5 = 0; VAR_5 < VAR_2->nbuttons; VAR_5++)
  FUNC_2(&VAR_3->data[VAR_5]);

 FUNC_3(VAR_3);

 return VAR_4;
}
