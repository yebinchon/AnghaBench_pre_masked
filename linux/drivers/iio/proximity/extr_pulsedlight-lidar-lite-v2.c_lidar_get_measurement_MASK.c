
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct lidar_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct lidar_data*,int ) ;
 int FUNC_2 (struct lidar_data*,scalar_t__*) ;
 int FUNC_3 (struct lidar_data*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,int) ;

__attribute__((used)) static int FUNC_8(struct lidar_data *VAR_6, u16 *VAR_7)
{
 struct i2c_client *VAR_8 = VAR_6->client;
 int VAR_9 = 10;
 int VAR_10;

 FUNC_4(&VAR_8->dev);


 VAR_10 = FUNC_3(VAR_6, VAR_2);
 if (VAR_10 < 0) {
  FUNC_0(&VAR_8->dev, "cannot send start measurement command");
  return VAR_10;
 }

 while (VAR_9--) {
  FUNC_7(1000, 2000);

  VAR_10 = FUNC_1(VAR_6, VAR_3);
  if (VAR_10 < 0)
   break;


  if (VAR_10 & VAR_4) {
   *VAR_7 = 0;
   VAR_10 = -VAR_0;
   break;
  }


  if (!(VAR_10 & VAR_5)) {
   VAR_10 = FUNC_2(VAR_6, VAR_7);
   break;
  }
  VAR_10 = -VAR_1;
 }
 FUNC_5(&VAR_8->dev);
 FUNC_6(&VAR_8->dev);

 return VAR_10;
}
