
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kmx61_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int address; } ;


 int VAR_0 ;



 int VAR_1 ;
 struct kmx61_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct kmx61_data*,int,int,int ) ;
 int FUNC_2 (struct kmx61_data*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3, int VAR_4,
      int VAR_5, long VAR_6)
{
 int VAR_7;
 struct kmx61_data *VAR_8 = FUNC_0(VAR_2);

 switch (VAR_6) {
 case 129:
  if (VAR_3->type != 130 && VAR_3->type != VAR_1)
   return -VAR_0;

  FUNC_3(&VAR_8->lock);
  VAR_7 = FUNC_1(VAR_8, VAR_4, VAR_5, VAR_3->address);
  FUNC_4(&VAR_8->lock);
  return VAR_7;
 case 128:
  switch (VAR_3->type) {
  case 130:
   if (VAR_4 != 0)
    return -VAR_0;
   FUNC_3(&VAR_8->lock);
   VAR_7 = FUNC_2(VAR_8, VAR_5);
   FUNC_4(&VAR_8->lock);
   return VAR_7;
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
