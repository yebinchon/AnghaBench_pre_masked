
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct hp03_priv {int pressure; int temp; int lock; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hp03_priv*) ;
 struct hp03_priv* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_3,
    struct iio_chan_spec const *VAR_4,
    int *VAR_5, int *VAR_6, long VAR_7)
{
 struct hp03_priv *VAR_8 = FUNC_1(VAR_3);
 int VAR_9;

 FUNC_2(&VAR_8->lock);
 VAR_9 = FUNC_0(VAR_8);
 FUNC_3(&VAR_8->lock);

 if (VAR_9)
  return VAR_9;

 switch (VAR_7) {
 case 131:
  switch (VAR_4->type) {
  case 129:
   *VAR_5 = VAR_8->pressure;
   return VAR_1;
  case 128:
   *VAR_5 = VAR_8->temp;
   return VAR_1;
  default:
   return -VAR_0;
  }
  break;
 case 130:
  switch (VAR_4->type) {
  case 129:
   *VAR_5 = 0;
   *VAR_6 = 1000;
   return VAR_2;
  case 128:
   *VAR_5 = 10;
   return VAR_1;
  default:
   return -VAR_0;
  }
  break;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
