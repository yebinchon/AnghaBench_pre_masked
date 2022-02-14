
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lmp91000_data {int adc_chan; int cb_buffer; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int*,int) ;
 struct lmp91000_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int*,int*) ;
 int FUNC_6 (int ,int*,int*) ;
 int FUNC_7 (struct lmp91000_data*,int ,int*) ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct iio_dev *VAR_4,
        struct iio_chan_spec const *VAR_5,
        int *VAR_6, int *VAR_7, long VAR_8)
{
 struct lmp91000_data *VAR_9 = FUNC_4(VAR_4);

 switch (VAR_8) {
 case 129:
 case 130: {
  int VAR_10 = FUNC_1(VAR_9->cb_buffer);

  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_7(VAR_9, VAR_5->address, VAR_6);

  FUNC_2(VAR_9->cb_buffer);

  if (VAR_10)
   return VAR_10;

  if (VAR_8 == 130) {
   int VAR_11, VAR_12;

   VAR_10 = FUNC_3(VAR_9->adc_chan,
          *VAR_6, &VAR_11, 1);
   if (VAR_10)
    return VAR_10;

   for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_3); VAR_12++)
    if (VAR_3[VAR_12] < VAR_11)
     break;

   *VAR_6 = (VAR_2 + VAR_12) * 1000;
  }
  return VAR_1;
 }
 case 131:
  return FUNC_5(VAR_9->adc_chan, VAR_6, VAR_7);
 case 128:
  return FUNC_6(VAR_9->adc_chan, VAR_6, VAR_7);
 }

 return -VAR_0;
}
