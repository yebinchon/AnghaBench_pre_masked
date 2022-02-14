
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stk8312_data {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct stk8312_data *VAR_6)
{
 int VAR_7;
 int VAR_8 = 10;
 struct i2c_client *VAR_9 = VAR_6->client;

 VAR_7 = FUNC_3(VAR_9, VAR_3, 0x70);
 if (VAR_7 < 0)
  goto exit_err;
 VAR_7 = FUNC_3(VAR_9, VAR_4, 0x02);
 if (VAR_7 < 0)
  goto exit_err;

 do {
  FUNC_5(1000, 5000);
  VAR_7 = FUNC_2(VAR_9, VAR_4);
  if (VAR_7 < 0)
   goto exit_err;
  VAR_8--;
 } while (!(VAR_7 & FUNC_0(7)) && VAR_8 > 0);

 if (VAR_8 == 0) {
  VAR_7 = -VAR_1;
  goto exit_err;
 }

 VAR_7 = FUNC_2(VAR_9, VAR_5);
 if (VAR_7 == 0)
  VAR_7 = -VAR_0;
 if (VAR_7 < 0)
  goto exit_err;

 VAR_7 = FUNC_3(VAR_6->client, VAR_2, VAR_7);
 if (VAR_7 < 0)
  goto exit_err;
 FUNC_4(150);

 return 0;

exit_err:
 FUNC_1(&VAR_9->dev, "failed to initialize sensor\n");
 return VAR_7;
}
