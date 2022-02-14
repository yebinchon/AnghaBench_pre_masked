
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zopt2201_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;


 int VAR_0 ;




 struct zopt2201_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct zopt2201_data*,int,int) ;
 int FUNC_2 (struct zopt2201_data*,int,int) ;
 int FUNC_3 (struct zopt2201_data*,int,int) ;

__attribute__((used)) static int FUNC_4(struct iio_dev *VAR_1,
         struct iio_chan_spec const *VAR_2,
         int VAR_3, int VAR_4, long VAR_5)
{
 struct zopt2201_data *VAR_6 = FUNC_0(VAR_1);

 switch (VAR_5) {
 case 131:
  return FUNC_1(VAR_6, VAR_3, VAR_4);
 case 130:
  switch (VAR_2->address) {
  case 129:
   return FUNC_2(VAR_6, VAR_3, VAR_4);
  case 128:
   return FUNC_3(VAR_6, VAR_3, VAR_4);
  default:
   return -VAR_0;
  }
 }

 return -VAR_0;
}
