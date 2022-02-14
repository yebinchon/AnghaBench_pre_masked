
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts_platdata {int y_max; int x_max; } ;
struct zforce_ts {struct zforce_ts_platdata* pdata; struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct zforce_ts*,int ) ;
 int FUNC_4 (struct zforce_ts*,int ) ;
 int FUNC_5 (struct zforce_ts*,int ,int ) ;
 int FUNC_6 (struct zforce_ts*,int,int,int) ;
 int FUNC_7 (struct zforce_ts*,int ) ;

__attribute__((used)) static int FUNC_8(struct zforce_ts *VAR_4)
{
 struct i2c_client *VAR_5 = VAR_4->client;
 const struct zforce_ts_platdata *VAR_6 = VAR_4->pdata;
 int VAR_7;

 FUNC_0(&VAR_5->dev, "starting device\n");

 VAR_7 = FUNC_4(VAR_4, VAR_2);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Unable to initialize, %d\n", VAR_7);
  return VAR_7;
 }

 VAR_7 = FUNC_5(VAR_4, VAR_6->x_max, VAR_6->y_max);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Unable to set resolution, %d\n", VAR_7);
  goto error;
 }

 VAR_7 = FUNC_6(VAR_4, 10, 50, 50);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Unable to set scan frequency, %d\n",
   VAR_7);
  goto error;
 }

 VAR_7 = FUNC_7(VAR_4, VAR_3);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Unable to set config\n");
  goto error;
 }


 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (VAR_7) {
  FUNC_1(&VAR_5->dev, "Unable to request data\n");
  goto error;
 }





 FUNC_2(200);

 return 0;

error:
 FUNC_4(VAR_4, VAR_1);
 return VAR_7;
}
