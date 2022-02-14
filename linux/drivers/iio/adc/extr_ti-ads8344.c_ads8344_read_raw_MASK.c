
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int differential; int scan_index; } ;
struct ads8344 {int reg; int lock; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ads8344*,int ,int ) ;
 struct ads8344* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
       struct iio_chan_spec const *VAR_4, int *VAR_5,
       int *VAR_6, long VAR_7)
{
 struct ads8344 *VAR_8 = FUNC_1(VAR_3);

 switch (VAR_7) {
 case 129:
  FUNC_2(&VAR_8->lock);
  *VAR_5 = FUNC_0(VAR_8, VAR_4->scan_index,
      VAR_4->differential);
  FUNC_3(&VAR_8->lock);
  if (*VAR_5 < 0)
   return *VAR_5;

  return VAR_2;
 case 128:
  *VAR_5 = FUNC_4(VAR_8->reg);
  if (*VAR_5 < 0)
   return *VAR_5;


  *VAR_5 /= 1000;
  *VAR_6 = 16;

  return VAR_1;
 default:
  return -VAR_0;
 }
}
