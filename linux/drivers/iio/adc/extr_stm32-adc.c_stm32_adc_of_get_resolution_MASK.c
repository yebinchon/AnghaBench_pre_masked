
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct stm32_adc {unsigned int res; TYPE_2__* cfg; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct iio_dev {TYPE_3__ dev; } ;
struct device_node {int dummy; } ;
struct TYPE_6__ {TYPE_1__* adc_info; } ;
struct TYPE_5__ {scalar_t__* resolutions; unsigned int num_res; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 struct stm32_adc* FUNC_2 (struct iio_dev*) ;
 scalar_t__ FUNC_3 (struct device_node*,char*,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dev.of_node;
 struct stm32_adc *VAR_3 = FUNC_2(VAR_1);
 unsigned int VAR_4;
 u32 VAR_5;

 if (FUNC_3(VAR_2, "assigned-resolution-bits", &VAR_5))
  VAR_5 = VAR_3->cfg->adc_info->resolutions[0];

 for (VAR_4 = 0; VAR_4 < VAR_3->cfg->adc_info->num_res; VAR_4++)
  if (VAR_5 == VAR_3->cfg->adc_info->resolutions[VAR_4])
   break;
 if (VAR_4 >= VAR_3->cfg->adc_info->num_res) {
  FUNC_1(&VAR_1->dev, "Bad resolution: %u bits\n", VAR_5);
  return -VAR_0;
 }

 FUNC_0(&VAR_1->dev, "Using %u bits resolution\n", VAR_5);
 VAR_3->res = VAR_4;

 return 0;
}
