
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mma8452_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 struct mma8452_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct mma8452_data*) ;
 int FUNC_4 (struct mma8452_data*) ;
 int ** VAR_0 ;
 int FUNC_5 (char*,int ,int ) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
         struct device_attribute *VAR_2,
         char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_1(VAR_1);
 struct mma8452_data *VAR_5 = FUNC_2(VAR_4);
 int VAR_6, VAR_7;

 VAR_6 = FUNC_3(VAR_5);
 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_5(VAR_3, VAR_0[VAR_7][VAR_6],
  FUNC_0(VAR_0[0][0]));
}
