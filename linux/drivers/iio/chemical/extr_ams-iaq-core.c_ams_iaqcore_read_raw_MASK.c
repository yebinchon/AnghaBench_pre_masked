
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct TYPE_2__ {int voc_ppb; int resistance; int co2_ppm; } ;
struct ams_iaqcore_data {int lock; TYPE_1__ buffer; } ;





 int VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ams_iaqcore_data*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ams_iaqcore_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct iio_dev *VAR_5,
    struct iio_chan_spec const *VAR_6, int *VAR_7,
    int *VAR_8, long VAR_9)
{
 struct ams_iaqcore_data *VAR_10 = FUNC_3(VAR_5);
 int VAR_11;

 if (VAR_9 != VAR_1)
  return -VAR_0;

 FUNC_4(&VAR_10->lock);
 VAR_11 = FUNC_0(VAR_10);

 if (VAR_11)
  goto err_out;

 switch (VAR_6->address) {
 case 130:
  *VAR_7 = 0;
  *VAR_8 = FUNC_1(VAR_10->buffer.co2_ppm);
  VAR_11 = VAR_3;
  break;
 case 129:
  *VAR_7 = FUNC_2(VAR_10->buffer.resistance);
  VAR_11 = VAR_2;
  break;
 case 128:
  *VAR_7 = 0;
  *VAR_8 = FUNC_1(VAR_10->buffer.voc_ppb);
  VAR_11 = VAR_4;
  break;
 default:
  VAR_11 = -VAR_0;
 }

err_out:
 FUNC_5(&VAR_10->lock);

 return VAR_11;
}
