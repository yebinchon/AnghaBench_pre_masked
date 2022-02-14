
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct iio_dev {int dev; int name; } ;
struct adis16136 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,unsigned int*) ;
 int FUNC_2 (int *,char*,unsigned int,unsigned int) ;
 struct adis16136* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2)
{
 struct adis16136 *VAR_3 = FUNC_3(VAR_2);
 unsigned int VAR_4;
 uint16_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_3->adis);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(&VAR_3->adis, VAR_0,
  &VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_4(VAR_2->name, "adis%u\n", &VAR_4);
 if (VAR_6 != 1)
  return -VAR_1;

 if (VAR_5 != VAR_4)
  FUNC_2(&VAR_2->dev, "Device ID(%u) and product ID(%u) do not match.",
    VAR_4, VAR_5);

 return 0;
}
