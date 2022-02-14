
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stts751_priv {int temp; TYPE_1__* client; } ;
typedef int s32 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct stts751_priv *VAR_2)
{
 s32 VAR_3, VAR_4, VAR_5;
 VAR_3 = FUNC_1(VAR_2->client, VAR_0);
 if (VAR_3 < 0) {
  FUNC_0(&VAR_2->client->dev,
   "I2C read failed (temp H). ret: %x\n", VAR_3);
  return VAR_3;
 }

 VAR_5 = FUNC_1(VAR_2->client, VAR_1);
 if (VAR_5 < 0) {
  FUNC_0(&VAR_2->client->dev,
   "I2C read failed (temp L). ret: %x\n", VAR_5);
  return VAR_5;
 }

 VAR_4 = FUNC_1(VAR_2->client, VAR_0);
 if (VAR_4 < 0) {
  FUNC_0(&VAR_2->client->dev,
   "I2C 2nd read failed (temp H). ret: %x\n", VAR_4);
  return VAR_4;
 }

 if (VAR_3 != VAR_4) {
  VAR_5 = FUNC_1(VAR_2->client,
      VAR_1);
  if (VAR_5 < 0) {
   FUNC_0(&VAR_2->client->dev,
    "I2C 2nd read failed (temp L). ret: %x\n",
    VAR_5);
   return VAR_5;
  }
 }

 VAR_2->temp = FUNC_2((VAR_3 << 8) | VAR_5);
 return 0;
}
