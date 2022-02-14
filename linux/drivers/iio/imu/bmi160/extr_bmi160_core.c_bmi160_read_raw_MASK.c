
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; int channel2; } ;
struct bmi160_data {int dummy; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bmi160_data*,int ,int ,int*) ;
 int FUNC_1 (struct bmi160_data*,int ,int*,int*) ;
 int FUNC_2 (struct bmi160_data*,int ,int*) ;
 int FUNC_3 (int ) ;
 struct bmi160_data* FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6, long VAR_7)
{
 int VAR_8;
 struct bmi160_data *VAR_9 = FUNC_4(VAR_3);

 switch (VAR_7) {
 case 130:
  VAR_8 = FUNC_0(VAR_9, VAR_4->type, VAR_4->channel2, VAR_5);
  if (VAR_8)
   return VAR_8;
  return VAR_1;
 case 128:
  *VAR_5 = 0;
  VAR_8 = FUNC_2(VAR_9,
           FUNC_3(VAR_4->type), VAR_6);
  return VAR_8 ? VAR_8 : VAR_2;
 case 129:
  VAR_8 = FUNC_1(VAR_9, FUNC_3(VAR_4->type),
         VAR_5, VAR_6);
  return VAR_8 ? VAR_8 : VAR_2;
 default:
  return -VAR_0;
 }

 return 0;
}
