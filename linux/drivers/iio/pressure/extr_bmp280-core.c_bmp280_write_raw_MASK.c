
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bmp280_data {int dev; int lock; } ;


 int VAR_0 ;




 int FUNC_0 (struct bmp280_data*,int) ;
 int FUNC_1 (struct bmp280_data*,int) ;
 int FUNC_2 (struct bmp280_data*,int) ;
 struct bmp280_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 int VAR_6 = 0;
 struct bmp280_data *VAR_7 = FUNC_3(VAR_1);

 switch (VAR_5) {
 case 131:
  FUNC_6(VAR_7->dev);
  FUNC_4(&VAR_7->lock);
  switch (VAR_2->type) {
  case 130:
   VAR_6 = FUNC_0(VAR_7, VAR_3);
   break;
  case 129:
   VAR_6 = FUNC_1(VAR_7, VAR_3);
   break;
  case 128:
   VAR_6 = FUNC_2(VAR_7, VAR_3);
   break;
  default:
   VAR_6 = -VAR_0;
   break;
  }
  FUNC_5(&VAR_7->lock);
  FUNC_7(VAR_7->dev);
  FUNC_8(VAR_7->dev);
  break;
 default:
  return -VAR_0;
 }

 return VAR_6;
}
