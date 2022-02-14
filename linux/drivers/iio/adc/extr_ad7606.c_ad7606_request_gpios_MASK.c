
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct ad7606_state {int gpio_os; TYPE_1__* chip_info; void* gpio_frstdata; void* gpio_standby; void* gpio_range; void* gpio_reset; void* gpio_convst; struct device* dev; } ;
struct TYPE_2__ {int oversampling_num; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (struct device*,char*,int ) ;
 int FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct ad7606_state *VAR_3)
{
 struct device *VAR_4 = VAR_3->dev;

 VAR_3->gpio_convst = FUNC_3(VAR_4, "adi,conversion-start",
      VAR_2);
 if (FUNC_0(VAR_3->gpio_convst))
  return FUNC_1(VAR_3->gpio_convst);

 VAR_3->gpio_reset = FUNC_5(VAR_4, "reset", VAR_2);
 if (FUNC_0(VAR_3->gpio_reset))
  return FUNC_1(VAR_3->gpio_reset);

 VAR_3->gpio_range = FUNC_5(VAR_4, "adi,range",
       VAR_2);
 if (FUNC_0(VAR_3->gpio_range))
  return FUNC_1(VAR_3->gpio_range);

 VAR_3->gpio_standby = FUNC_5(VAR_4, "standby",
         VAR_1);
 if (FUNC_0(VAR_3->gpio_standby))
  return FUNC_1(VAR_3->gpio_standby);

 VAR_3->gpio_frstdata = FUNC_5(VAR_4, "adi,first-data",
          VAR_0);
 if (FUNC_0(VAR_3->gpio_frstdata))
  return FUNC_1(VAR_3->gpio_frstdata);

 if (!VAR_3->chip_info->oversampling_num)
  return 0;

 VAR_3->gpio_os = FUNC_4(VAR_4,
          "adi,oversampling-ratio",
          VAR_2);
 return FUNC_2(VAR_3->gpio_os);
}
