
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;
struct bmi160_data {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct bmi160_data*,int ,int,int) ;
 int FUNC_1 (struct bmi160_data*,int ,int) ;
 int FUNC_2 (int ) ;
 struct bmi160_data* FUNC_3 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
       struct iio_chan_spec const *VAR_2,
       int VAR_3, int VAR_4, long VAR_5)
{
 struct bmi160_data *VAR_6 = FUNC_3(VAR_1);

 switch (VAR_5) {
 case 128:
  return FUNC_1(VAR_6,
     FUNC_2(VAR_2->type), VAR_4);
  break;
 case 129:
  return FUNC_0(VAR_6, FUNC_2(VAR_2->type),
          VAR_3, VAR_4);
 default:
  return -VAR_0;
 }

 return 0;
}
