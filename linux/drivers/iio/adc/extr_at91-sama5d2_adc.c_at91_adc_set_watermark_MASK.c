
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iio_dev {int dev; } ;
struct TYPE_3__ {unsigned int watermark; } ;
struct at91_adc_state {TYPE_1__ dma_st; TYPE_2__* selected_trig; } ;
struct TYPE_4__ {int hw_trig; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct at91_adc_state* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2, unsigned int VAR_3)
{
 struct at91_adc_state *VAR_4 = FUNC_3(VAR_2);

 if (VAR_3 > VAR_0)
  return -VAR_1;

 if (!VAR_4->selected_trig->hw_trig) {
  FUNC_2(&VAR_2->dev, "we need hw trigger for DMA\n");
  return 0;
 }

 FUNC_2(&VAR_2->dev, "new watermark is %u\n", VAR_3);
 VAR_4->dma_st.watermark = VAR_3;







 if (VAR_3 == 1)
  FUNC_0(FUNC_4(&VAR_2->dev));
 else if (VAR_3 > 1)
  FUNC_1(FUNC_4(&VAR_2->dev));

 return 0;
}
