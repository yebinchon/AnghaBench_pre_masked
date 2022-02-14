
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct itg3200 {TYPE_1__* i2c; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 struct itg3200* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int*) ;
 int FUNC_4 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_2)
{
 struct itg3200 *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;
 u8 VAR_5;

 VAR_4 = FUNC_4(VAR_2);
 if (VAR_4)
  goto err_ret;

 VAR_4 = FUNC_3(VAR_2, VAR_1, &VAR_5);
 if (VAR_4)
  goto err_ret;

 if (((VAR_5 >> 1) & 0x3f) != 0x34) {
  FUNC_0(&VAR_3->i2c->dev, "invalid reg value 0x%02x", VAR_5);
  VAR_4 = -VAR_0;
  goto err_ret;
 }

 VAR_4 = FUNC_2(VAR_2);
err_ret:
 return VAR_4;
}
