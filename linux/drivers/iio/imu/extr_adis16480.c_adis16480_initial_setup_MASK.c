
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint16_t ;
struct iio_dev {int dev; int name; } ;
struct adis16480 {int adis; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,char*,unsigned int,unsigned int) ;
 struct adis16480* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,unsigned int*) ;

__attribute__((used)) static int FUNC_9(struct iio_dev *VAR_3)
{
 struct adis16480 *VAR_4 = FUNC_6(VAR_3);
 uint16_t VAR_5;
 unsigned int VAR_6;
 int VAR_7;

 FUNC_3(&VAR_4->adis);
 FUNC_7(70);

 VAR_7 = FUNC_4(&VAR_4->adis, VAR_0, FUNC_0(1));
 if (VAR_7)
  return VAR_7;
 FUNC_7(30);

 VAR_7 = FUNC_1(&VAR_4->adis);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(&VAR_4->adis, VAR_1, &VAR_5);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_8(VAR_3->name, "adis%u\n", &VAR_6);
 if (VAR_7 != 1)
  return -VAR_2;

 if (VAR_5 != VAR_6)
  FUNC_5(&VAR_3->dev, "Device ID(%u) and product ID(%u) do not match.",
    VAR_6, VAR_5);

 return 0;
}
