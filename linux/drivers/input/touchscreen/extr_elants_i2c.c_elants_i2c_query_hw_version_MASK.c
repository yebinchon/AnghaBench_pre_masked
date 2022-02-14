
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dev; } ;
struct elants_data {int hw_version; struct i2c_client* client; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int,int,int*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct i2c_client*,int const*,int,int*,int) ;
 int FUNC_3 (int*) ;

__attribute__((used)) static int FUNC_4(struct elants_data *VAR_5)
{
 struct i2c_client *VAR_6 = VAR_5->client;
 int VAR_7, VAR_8;
 const u8 VAR_9[] = { VAR_0, VAR_2, 0x00, 0x01 };
 u8 VAR_10[VAR_3];

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_7 = FUNC_2(VAR_6, VAR_9, sizeof(VAR_9),
         VAR_10, sizeof(VAR_10));
  if (!VAR_7) {
   VAR_5->hw_version = FUNC_3(VAR_10);
   if (VAR_5->hw_version != 0xffff)
    return 0;
  }

  FUNC_0(&VAR_6->dev, "read fw id error=%d, buf=%*phC\n",
   VAR_7, (int)sizeof(VAR_10), VAR_10);
 }

 if (VAR_7) {
  FUNC_1(&VAR_6->dev,
   "Failed to read fw id: %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_1(&VAR_6->dev, "Invalid fw id: %#04x\n", VAR_5->hw_version);

 return -VAR_1;
}
