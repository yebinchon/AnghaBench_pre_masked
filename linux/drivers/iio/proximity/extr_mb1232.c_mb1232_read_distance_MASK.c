
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mb1232_data {scalar_t__ irqnr; int lock; int ranging; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;
typedef int s16 ;
typedef int buf ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,char*,int) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static s16 FUNC_9(struct mb1232_data *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 int VAR_6;
 s16 VAR_7;
 __be16 VAR_8;

 FUNC_5(&VAR_4->lock);

 FUNC_7(&VAR_4->ranging);

 VAR_6 = FUNC_3(VAR_5, VAR_3);
 if (VAR_6 < 0) {
  FUNC_1(&VAR_5->dev, "write command - err: %d\n", VAR_6);
  goto error_unlock;
 }

 if (VAR_4->irqnr >= 0) {

  VAR_6 = FUNC_8(&VAR_4->ranging,
         VAR_2/10);
  if (VAR_6 < 0)
   goto error_unlock;
  else if (VAR_6 == 0) {
   VAR_6 = -VAR_1;
   goto error_unlock;
  }
 } else {

  FUNC_4(15);
 }

 VAR_6 = FUNC_2(VAR_5, (char *)&VAR_8, sizeof(VAR_8));
 if (VAR_6 < 0) {
  FUNC_1(&VAR_5->dev, "i2c_master_recv: ret=%d\n", VAR_6);
  goto error_unlock;
 }

 VAR_7 = FUNC_0(VAR_8);

 if (VAR_7 < 0) {
  FUNC_1(&VAR_5->dev, "distance=%d\n", VAR_7);
  VAR_6 = -VAR_0;
  goto error_unlock;
 }

 FUNC_6(&VAR_4->lock);

 return VAR_7;

error_unlock:
 FUNC_6(&VAR_4->lock);

 return VAR_6;
}
