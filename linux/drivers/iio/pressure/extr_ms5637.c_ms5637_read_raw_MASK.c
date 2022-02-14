
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ms_tp_dev {size_t res_index; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 struct ms_tp_dev* FUNC_0 (struct iio_dev*) ;
 int* VAR_3 ;
 int FUNC_1 (struct ms_tp_dev*,int*,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_4,
      struct iio_chan_spec const *VAR_5, int *VAR_6,
      int *VAR_7, long VAR_8)
{
 int VAR_9;
 int VAR_10;
 unsigned int VAR_11;
 struct ms_tp_dev *VAR_12 = FUNC_0(VAR_4);

 switch (VAR_8) {
 case 131:
  VAR_9 = FUNC_1(VAR_12,
       &VAR_10,
       &VAR_11);
  if (VAR_9)
   return VAR_9;

  switch (VAR_5->type) {
  case 128:
   *VAR_6 = VAR_10;

   return VAR_1;
  case 129:
   *VAR_6 = VAR_11 / 1000;
   *VAR_7 = (VAR_11 % 1000) * 1000;

   return VAR_2;
  default:
   return -VAR_0;
  }
 case 130:
  *VAR_6 = VAR_3[VAR_12->res_index];

  return VAR_1;
 default:
  return -VAR_0;
 }
}
