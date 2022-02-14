
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel; } ;
struct apds9300_data {int mutex; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct apds9300_data*,int) ;
 struct apds9300_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
  struct iio_chan_spec const *VAR_3, int *VAR_4, int *VAR_5,
  long VAR_6)
{
 int VAR_7, VAR_8, VAR_9 = -VAR_0;
 struct apds9300_data *VAR_10 = FUNC_2(VAR_2);

 FUNC_3(&VAR_10->mutex);
 switch (VAR_3->type) {
 case 128:
  VAR_7 = FUNC_1(VAR_10, 0);
  if (VAR_7 < 0) {
   VAR_9 = VAR_7;
   break;
  }
  VAR_8 = FUNC_1(VAR_10, 1);
  if (VAR_8 < 0) {
   VAR_9 = VAR_8;
   break;
  }
  *VAR_4 = FUNC_0(VAR_7, VAR_8);
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = FUNC_1(VAR_10, VAR_3->channel);
  if (VAR_9 < 0)
   break;
  *VAR_4 = VAR_9;
  VAR_9 = VAR_1;
  break;
 default:
  break;
 }
 FUNC_4(&VAR_10->mutex);

 return VAR_9;
}
