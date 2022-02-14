
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srf08_data {int range_mm; int lock; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct srf08_data *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7, VAR_8;
 int VAR_9;

 FUNC_5(&VAR_5->lock);

 VAR_7 = FUNC_3(VAR_5->client,
   VAR_4, VAR_1);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->dev, "write command - err: %d\n", VAR_7);
  FUNC_6(&VAR_5->lock);
  return VAR_7;
 }
 VAR_9 = 1 + VAR_5->range_mm / 172;
 FUNC_4(VAR_9);
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = FUNC_1(VAR_5->client,
      VAR_3);


  if (VAR_7 < 255 && VAR_7 > 0)
   break;
  FUNC_4(5);
 }

 if (VAR_7 >= 255 || VAR_7 <= 0) {
  FUNC_0(&VAR_6->dev, "device not ready\n");
  FUNC_6(&VAR_5->lock);
  return -VAR_0;
 }

 VAR_7 = FUNC_2(VAR_5->client,
      VAR_2);
 if (VAR_7 < 0) {
  FUNC_0(&VAR_6->dev, "cannot read distance: ret=%d\n", VAR_7);
  FUNC_6(&VAR_5->lock);
  return VAR_7;
 }

 FUNC_6(&VAR_5->lock);

 return VAR_7;
}
