
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct ak8974 {TYPE_1__* i2c; int lock; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct ak8974*,int *) ;
 int FUNC_1 (struct ak8974*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct ak8974* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*,int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct iio_dev *VAR_0)
{
 struct ak8974 *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;
 __le16 VAR_3[8];

 FUNC_8(&VAR_1->i2c->dev);
 FUNC_6(&VAR_1->lock);

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_2(&VAR_1->i2c->dev, "error triggering measure\n");
  goto out_unlock;
 }
 VAR_2 = FUNC_0(VAR_1, VAR_3);
 if (VAR_2) {
  FUNC_2(&VAR_1->i2c->dev, "error getting measures\n");
  goto out_unlock;
 }

 FUNC_5(VAR_0, VAR_3,
        FUNC_3(VAR_0));

 out_unlock:
 FUNC_7(&VAR_1->lock);
 FUNC_9(&VAR_1->i2c->dev);
 FUNC_10(&VAR_1->i2c->dev);
}
