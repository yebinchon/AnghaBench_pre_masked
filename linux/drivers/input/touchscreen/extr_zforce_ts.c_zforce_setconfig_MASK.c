
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zforce_ts {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,char) ;
 int FUNC_2 (struct zforce_ts*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct zforce_ts *VAR_2, char VAR_3)
{
 struct i2c_client *VAR_4 = VAR_2->client;
 char VAR_5[7] = { VAR_1, 5, VAR_0,
   VAR_3, 0, 0, 0 };

 FUNC_1(&VAR_4->dev, "set config to (%d)\n", VAR_3);

 return FUNC_2(VAR_2, &VAR_5[0], FUNC_0(VAR_5));
}
