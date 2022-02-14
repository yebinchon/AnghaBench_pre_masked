
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int watermark; } ;
struct at91_adc_state {TYPE_1__ dma_st; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct at91_adc_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct at91_adc_state *VAR_5 = FUNC_1(VAR_4);

 return FUNC_2(VAR_3, VAR_0, "%d\n", VAR_5->dma_st.watermark);
}
