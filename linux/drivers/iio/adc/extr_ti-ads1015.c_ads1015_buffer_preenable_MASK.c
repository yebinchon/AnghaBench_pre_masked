
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct ads1015_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ads1015_data*) ;
 int FUNC_1 (struct ads1015_data*,int) ;
 struct ads1015_data* FUNC_2 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_3(struct iio_dev *VAR_1)
{
 struct ads1015_data *VAR_2 = FUNC_2(VAR_1);


 if (FUNC_0(VAR_2))
  return -VAR_0;

 return FUNC_1(FUNC_2(VAR_1), 1);
}
