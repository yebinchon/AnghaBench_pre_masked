
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_dev {int dummy; } ;
struct iio_chan_spec {int address; } ;
struct ak8974 {TYPE_1__* i2c; int lock; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct ak8974*,int *) ;
 int FUNC_1 (struct ak8974*) ;
 int FUNC_2 (int *,char*) ;
 struct ak8974* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct iio_dev *VAR_3,
      struct iio_chan_spec const *VAR_4,
      int *VAR_5, int *VAR_6,
      long VAR_7)
{
 struct ak8974 *VAR_8 = FUNC_3(VAR_3);
 __le16 VAR_9[3];
 int VAR_10 = -VAR_0;

 FUNC_7(&VAR_8->i2c->dev);
 FUNC_5(&VAR_8->lock);

 switch (VAR_7) {
 case 128:
  if (VAR_4->address > 2) {
   FUNC_2(&VAR_8->i2c->dev, "faulty channel address\n");
   VAR_10 = -VAR_1;
   goto out_unlock;
  }
  VAR_10 = FUNC_1(VAR_8);
  if (VAR_10)
   goto out_unlock;
  VAR_10 = FUNC_0(VAR_8, VAR_9);
  if (VAR_10)
   goto out_unlock;





  *VAR_5 = FUNC_4(VAR_9[VAR_4->address]);

  VAR_10 = VAR_2;
 }

 out_unlock:
 FUNC_6(&VAR_8->lock);
 FUNC_8(&VAR_8->i2c->dev);
 FUNC_9(&VAR_8->i2c->dev);

 return VAR_10;
}
