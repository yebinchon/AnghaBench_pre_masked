
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct i2c_client {int dev; } ;
struct elants_data {int bc_version; int iap_version; struct i2c_client* client; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int,int,int*) ;
 int FUNC_1 (struct i2c_client*,int const*,int,int*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(struct elants_data *VAR_3)
{
 struct i2c_client *VAR_4 = VAR_3->client;
 const u8 VAR_5[] = { VAR_0, VAR_1, 0x00, 0x01 };
 u8 VAR_6[VAR_2];
 u16 VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_5, sizeof(VAR_5),
        VAR_6, sizeof(VAR_6));
 if (VAR_8) {
  FUNC_0(&VAR_4->dev,
   "read BC version error=%d, buf=%*phC\n",
   VAR_8, (int)sizeof(VAR_6), VAR_6);
  return VAR_8;
 }

 VAR_7 = FUNC_2(VAR_6);
 VAR_3->bc_version = VAR_7 >> 8;
 VAR_3->iap_version = VAR_7 & 0xff;

 return 0;
}
