
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int channel2; int type; } ;
struct TYPE_2__ {int voc; int co2; int raw_data; } ;
struct ccs811_data {int lock; TYPE_1__ buffer; } ;


 int VAR_0 ;
 int VAR_1 ;






 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (struct ccs811_data*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ccs811_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct iio_dev *VAR_5,
      struct iio_chan_spec const *VAR_6,
      int *VAR_7, int *VAR_8, long VAR_9)
{
 struct ccs811_data *VAR_10 = FUNC_4(VAR_5);
 int VAR_11;

 switch (VAR_9) {
 case 134:
  VAR_11 = FUNC_2(VAR_5);
  if (VAR_11)
   return VAR_11;
  FUNC_5(&VAR_10->lock);
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11 < 0) {
   FUNC_6(&VAR_10->lock);
   FUNC_3(VAR_5);
   return VAR_11;
  }

  switch (VAR_6->type) {
  case 128:
   *VAR_7 = FUNC_0(VAR_10->buffer.raw_data) &
        VAR_0;
   VAR_11 = VAR_2;
   break;
  case 131:
   *VAR_7 = FUNC_0(VAR_10->buffer.raw_data) >> 10;
   VAR_11 = VAR_2;
   break;
  case 132:
   switch (VAR_6->channel2) {
   case 130:
    *VAR_7 = FUNC_0(VAR_10->buffer.co2);
    VAR_11 = VAR_2;
    break;
   case 129:
    *VAR_7 = FUNC_0(VAR_10->buffer.voc);
    VAR_11 = VAR_2;
    break;
   default:
    VAR_11 = -VAR_1;
   }
   break;
  default:
   VAR_11 = -VAR_1;
  }
  FUNC_6(&VAR_10->lock);
  FUNC_3(VAR_5);

  return VAR_11;

 case 133:
  switch (VAR_6->type) {
  case 128:
   *VAR_7 = 1;
   *VAR_8 = 612903;
   return VAR_3;
  case 131:
   *VAR_7 = 0;
   *VAR_8 = 1000;
   return VAR_3;
  case 132:
   switch (VAR_6->channel2) {
   case 130:
    *VAR_7 = 0;
    *VAR_8 = 100;
    return VAR_3;
   case 129:
    *VAR_7 = 0;
    *VAR_8 = 100;
    return VAR_4;
   default:
    return -VAR_1;
   }
  default:
   return -VAR_1;
  }
 default:
  return -VAR_1;
 }
}
