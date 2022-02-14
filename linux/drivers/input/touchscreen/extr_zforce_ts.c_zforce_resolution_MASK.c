
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zforce_ts {struct i2c_client* client; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int,int) ;
 int FUNC_2 (struct zforce_ts*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct zforce_ts *VAR_2, u16 VAR_3, u16 VAR_4)
{
 struct i2c_client *VAR_5 = VAR_2->client;
 char VAR_6[7] = { VAR_1, 5, VAR_0,
   (VAR_3 & 0xff), ((VAR_3 >> 8) & 0xff),
   (VAR_4 & 0xff), ((VAR_4 >> 8) & 0xff) };

 FUNC_1(&VAR_5->dev, "set resolution to (%d,%d)\n", VAR_3, VAR_4);

 return FUNC_2(VAR_2, &VAR_6[0], FUNC_0(VAR_6));
}
