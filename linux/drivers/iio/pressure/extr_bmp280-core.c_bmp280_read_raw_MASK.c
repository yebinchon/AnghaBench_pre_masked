
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bmp280_data {int oversampling_humid; int oversampling_press; int oversampling_temp; int dev; int lock; TYPE_1__* chip_info; } ;
struct TYPE_2__ {int (* read_humid ) (struct bmp280_data*,int*,int*) ;int (* read_press ) (struct bmp280_data*,int*,int*) ;int (* read_temp ) (struct bmp280_data*,int*) ;} ;


 int VAR_0 ;





 int VAR_1 ;
 struct bmp280_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct bmp280_data*,int*,int*) ;
 int FUNC_7 (struct bmp280_data*,int*,int*) ;
 int FUNC_8 (struct bmp280_data*,int*) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5, long VAR_6)
{
 int VAR_7;
 struct bmp280_data *VAR_8 = FUNC_0(VAR_2);

 FUNC_3(VAR_8->dev);
 FUNC_1(&VAR_8->lock);

 switch (VAR_6) {
 case 131:
  switch (VAR_3->type) {
  case 130:
   VAR_7 = VAR_8->chip_info->read_humid(VAR_8, VAR_4, VAR_5);
   break;
  case 129:
   VAR_7 = VAR_8->chip_info->read_press(VAR_8, VAR_4, VAR_5);
   break;
  case 128:
   VAR_7 = VAR_8->chip_info->read_temp(VAR_8, VAR_4);
   break;
  default:
   VAR_7 = -VAR_0;
   break;
  }
  break;
 case 132:
  switch (VAR_3->type) {
  case 130:
   *VAR_4 = 1 << VAR_8->oversampling_humid;
   VAR_7 = VAR_1;
   break;
  case 129:
   *VAR_4 = 1 << VAR_8->oversampling_press;
   VAR_7 = VAR_1;
   break;
  case 128:
   *VAR_4 = 1 << VAR_8->oversampling_temp;
   VAR_7 = VAR_1;
   break;
  default:
   VAR_7 = -VAR_0;
   break;
  }
  break;
 default:
  VAR_7 = -VAR_0;
  break;
 }

 FUNC_2(&VAR_8->lock);
 FUNC_4(VAR_8->dev);
 FUNC_5(VAR_8->dev);

 return VAR_7;
}
