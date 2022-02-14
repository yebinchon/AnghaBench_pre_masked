
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma7660_data {int lock; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 struct mma7660_data* FUNC_0 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_1 (struct mma7660_data*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_4,
    struct iio_chan_spec const *VAR_5,
    int *VAR_6, int *VAR_7, long VAR_8)
{
 struct mma7660_data *VAR_9 = FUNC_0(VAR_4);
 int VAR_10;

 switch (VAR_8) {
 case 129:
  FUNC_2(&VAR_9->lock);
  VAR_10 = FUNC_1(VAR_9, VAR_5->address);
  FUNC_3(&VAR_9->lock);
  if (VAR_10 < 0)
   return VAR_10;
  *VAR_6 = FUNC_4(VAR_10, 5);
  return VAR_1;
 case 128:
  *VAR_6 = 0;
  *VAR_7 = VAR_3;
  return VAR_2;
 default:
  return -VAR_0;
 }

 return -VAR_0;
}
