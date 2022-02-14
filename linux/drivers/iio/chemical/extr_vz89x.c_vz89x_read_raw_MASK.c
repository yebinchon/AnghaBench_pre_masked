
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vz89x_data {int* buffer; int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; int channel2; int type; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 struct vz89x_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vz89x_data*) ;
 int FUNC_4 (struct vz89x_data*,struct iio_chan_spec const*,int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
     struct iio_chan_spec const *VAR_4, int *VAR_5,
     int *VAR_6, long VAR_7)
{
 struct vz89x_data *VAR_8 = FUNC_0(VAR_3);
 int VAR_9 = -VAR_0;

 switch (VAR_7) {
 case 133:
  FUNC_1(&VAR_8->lock);
  VAR_9 = FUNC_3(VAR_8);
  FUNC_2(&VAR_8->lock);

  if (VAR_9)
   return VAR_9;

  switch (VAR_4->type) {
  case 131:
   *VAR_5 = VAR_8->buffer[VAR_4->address];
   return VAR_1;
  case 128:
   VAR_9 = FUNC_4(VAR_8, VAR_4, VAR_5);
   if (!VAR_9)
    return VAR_1;
   break;
  default:
   return -VAR_0;
  }
  break;
 case 132:
  switch (VAR_4->type) {
  case 128:
   *VAR_5 = 10;
   return VAR_1;
  default:
   return -VAR_0;
  }
  break;
 case 134:
  switch (VAR_4->channel2) {
  case 130:
   *VAR_5 = 44;
   *VAR_6 = 250000;
   return VAR_2;
  case 129:
   *VAR_5 = -13;
   return VAR_1;
  default:
   return -VAR_0;
  }
 }

 return VAR_9;
}
