
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vl6180_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;


 int VAR_1 ;
 struct vl6180_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct vl6180_data*,int,int) ;
 int FUNC_2 (struct vl6180_data*,int,int) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_2,
        struct iio_chan_spec const *VAR_3,
        int VAR_4, int VAR_5, long VAR_6)
{
 struct vl6180_data *VAR_7 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 128:
  return FUNC_2(VAR_7, VAR_4, VAR_5);

 case 129:
  if (VAR_3->type != VAR_1)
   return -VAR_0;

  return FUNC_1(VAR_7, VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
}
