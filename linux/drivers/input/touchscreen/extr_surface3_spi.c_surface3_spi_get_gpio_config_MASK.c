
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct surface3_ts_data {struct gpio_desc** gpiod_rst; TYPE_1__* spi; } ;
struct gpio_desc {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*,int,int) ;
 struct gpio_desc* FUNC_3 (struct device*,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct surface3_ts_data *VAR_2)
{
 int VAR_3;
 struct device *VAR_4;
 struct gpio_desc *VAR_5;
 int VAR_6;

 VAR_4 = &VAR_2->spi->dev;


 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_5 = FUNC_3(VAR_4, ((void*)0), VAR_6, VAR_1);
  if (FUNC_0(VAR_5)) {
   VAR_3 = FUNC_1(VAR_5);
   if (VAR_3 != -VAR_0)
    FUNC_2(VAR_4,
     "Failed to get power GPIO %d: %d\n",
     VAR_6,
     VAR_3);
   return VAR_3;
  }

  VAR_2->gpiod_rst[VAR_6] = VAR_5;
 }

 return 0;
}
