
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;
struct hdc100x_data {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int FUNC_0 (struct hdc100x_data*,int ,int) ;
 int FUNC_1 (struct hdc100x_data*,int ,int ) ;
 struct hdc100x_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
        struct iio_chan_spec const *VAR_4,
        int VAR_5, int VAR_6, long VAR_7)
{
 struct hdc100x_data *VAR_8 = FUNC_2(VAR_3);
 int VAR_9 = -VAR_0;

 switch (VAR_7) {
 case 129:
  if (VAR_5 != 0)
   return -VAR_0;

  FUNC_3(&VAR_8->lock);
  VAR_9 = FUNC_0(VAR_8, VAR_4->address, VAR_6);
  FUNC_4(&VAR_8->lock);
  return VAR_9;
 case 128:
  if (VAR_4->type != VAR_2 || VAR_6 != 0)
   return -VAR_0;

  FUNC_3(&VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8, VAR_1,
     VAR_5 ? VAR_1 : 0);
  FUNC_4(&VAR_8->lock);
  return VAR_9;
 default:
  return -VAR_0;
 }
}
