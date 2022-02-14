
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct iio_chan_spec {size_t address; } ;
struct ak8975_data {int* raw_to_gauss; } ;


 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct iio_dev*,size_t,int*) ;
 struct ak8975_data* FUNC_1 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_2(struct iio_dev *VAR_2,
      struct iio_chan_spec const *VAR_3,
      int *VAR_4, int *VAR_5,
      long VAR_6)
{
 struct ak8975_data *VAR_7 = FUNC_1(VAR_2);

 switch (VAR_6) {
 case 129:
  return FUNC_0(VAR_2, VAR_3->address, VAR_4);
 case 128:
  *VAR_4 = 0;
  *VAR_5 = VAR_7->raw_to_gauss[VAR_3->address];
  return VAR_1;
 }
 return -VAR_0;
}
