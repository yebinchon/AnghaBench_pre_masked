
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stm32_dac {TYPE_1__* common; } ;
struct iio_dev {int dummy; } ;
struct TYPE_4__ {int realbits; } ;
struct iio_chan_spec {TYPE_2__ scan_type; int channel; } ;
struct TYPE_3__ {int vref_mv; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct stm32_dac* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct stm32_dac*,int ,int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
         struct iio_chan_spec const *VAR_3,
         int *VAR_4, int *VAR_5, long VAR_6)
{
 struct stm32_dac *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 129:
  return FUNC_1(VAR_7, VAR_3->channel, VAR_4);
 case 128:
  *VAR_4 = VAR_7->common->vref_mv;
  *VAR_5 = VAR_3->scan_type.realbits;
  return VAR_1;
 default:
  return -VAR_0;
 }
}
