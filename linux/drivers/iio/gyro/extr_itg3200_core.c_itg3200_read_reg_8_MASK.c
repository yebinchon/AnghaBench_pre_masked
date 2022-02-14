
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct itg3200 {int i2c; } ;
struct iio_dev {int dummy; } ;


 int FUNC_0 (int ,int) ;
 struct itg3200* FUNC_1 (struct iio_dev*) ;

int FUNC_2(struct iio_dev *VAR_0,
  u8 VAR_1, u8 *VAR_2)
{
 struct itg3200 *VAR_3 = FUNC_1(VAR_0);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->i2c, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;
 *VAR_2 = VAR_4;
 return 0;
}
