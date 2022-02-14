
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si1133_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int type; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct si1133_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct si1133_data*,int ,int,int) ;
 int FUNC_3 (struct si1133_data*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_5,
       struct iio_chan_spec const *VAR_6,
       int VAR_7, int VAR_8, long VAR_9)
{
 struct si1133_data *VAR_10 = FUNC_0(VAR_5);

 switch (VAR_9) {
 case 130:
  switch (VAR_6->type) {
  case 129:
  case 128:
   VAR_7 = FUNC_1(VAR_7, VAR_8);
   if (VAR_7 < 0)
    return VAR_7;

   return FUNC_3(VAR_10,
           VAR_3,
           VAR_4,
           VAR_7);
  default:
   return -VAR_0;
  }
 case 131:
  return FUNC_2(VAR_10, 0, VAR_7, VAR_8);
 case 132:
  switch (VAR_6->type) {
  case 129:
  case 128:
   if (VAR_7 != 0 && VAR_7 != 1)
    return -VAR_0;

   return FUNC_3(VAR_10,
           VAR_1,
           VAR_2,
           VAR_7);
  default:
   return -VAR_0;
  }
 default:
  return -VAR_0;
 }
}
