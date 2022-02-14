
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct itg3200 {TYPE_1__* i2c; } ;
struct iio_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 struct itg3200* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct iio_dev *VAR_7)
{
 struct itg3200 *VAR_8 = FUNC_2(VAR_7);
 int VAR_9;

 FUNC_0(&VAR_8->i2c->dev, "reset device");

 VAR_9 = FUNC_3(VAR_7,
   VAR_5,
   VAR_6);
 if (VAR_9) {
  FUNC_1(&VAR_8->i2c->dev, "error resetting device");
  goto error_ret;
 }


 FUNC_4(1500);

 VAR_9 = FUNC_3(VAR_7,
   VAR_4,
   VAR_0 |
   VAR_3 |
   VAR_1 |
   VAR_2);

 if (VAR_9)
  FUNC_1(&VAR_8->i2c->dev, "error init device");

error_ret:
 return VAR_9;
}
