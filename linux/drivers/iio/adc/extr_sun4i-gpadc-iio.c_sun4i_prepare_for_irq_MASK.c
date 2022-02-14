
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sun4i_gpadc_iio {unsigned int fifo_data_irq; TYPE_2__* data; int regmap; int completion; } ;
struct TYPE_3__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct TYPE_4__ {int tp_mode_en; int tp_adc_select; int (* adc_chan_select ) (int) ;int adc_chan_mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct sun4i_gpadc_iio* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_3, int VAR_4,
     unsigned int VAR_5)
{
 struct sun4i_gpadc_iio *VAR_6 = FUNC_1(VAR_3);
 int VAR_7;
 u32 VAR_8;

 FUNC_3(VAR_3->dev.parent);

 FUNC_6(&VAR_6->completion);

 VAR_7 = FUNC_5(VAR_6->regmap, VAR_1,
      FUNC_0(1) |
      VAR_2);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_6->regmap, VAR_0, &VAR_8);
 if (VAR_7)
  return VAR_7;

 if (VAR_5 == VAR_6->fifo_data_irq) {
  VAR_7 = FUNC_5(VAR_6->regmap, VAR_0,
       VAR_6->data->tp_mode_en |
       VAR_6->data->tp_adc_select |
       VAR_6->data->adc_chan_select(VAR_4));




  if ((VAR_8 & VAR_6->data->adc_chan_mask) !=
    VAR_6->data->adc_chan_select(VAR_4))
   FUNC_2(10);

 } else {




  VAR_7 = FUNC_5(VAR_6->regmap, VAR_0,
       VAR_6->data->tp_mode_en);
 }

 if (VAR_7)
  return VAR_7;





 if ((VAR_8 & VAR_6->data->tp_adc_select) != VAR_6->data->tp_adc_select)
  FUNC_2(100);

 return 0;
}
