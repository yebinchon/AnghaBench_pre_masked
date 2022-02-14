
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct max31856_data {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct iio_dev* FUNC_0 (struct device*) ;
 struct max31856_data* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct max31856_data*,int ,int*,int) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, u8 VAR_2, char *VAR_3)
{
 struct iio_dev *VAR_4 = FUNC_0(VAR_1);
 struct max31856_data *VAR_5 = FUNC_1(VAR_4);
 u8 VAR_6;
 int VAR_7;
 bool VAR_8;

 VAR_7 = FUNC_2(VAR_5, VAR_0, &VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 VAR_8 = VAR_6 & VAR_2;

 return FUNC_3(VAR_3, "%d\n", VAR_8);
}
