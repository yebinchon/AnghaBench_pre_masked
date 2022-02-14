
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qt1050_priv {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char*,unsigned int,unsigned int) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static bool FUNC_3(struct qt1050_priv *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;


 FUNC_2(VAR_3->regmap, VAR_0, &VAR_4);
 if (VAR_4 != VAR_1) {
  FUNC_0(&VAR_3->client->dev, "ID %d not supported\n", VAR_4);
  return 0;
 }


 VAR_5 = FUNC_2(VAR_3->regmap, VAR_2, &VAR_4);
 if (VAR_5) {
  FUNC_0(&VAR_3->client->dev, "could not read the firmware version\n");
  return 0;
 }

 FUNC_1(&VAR_3->client->dev, "AT42QT1050 firmware version %1d.%1d\n",
   VAR_4 >> 4, VAR_4 & 0xf);

 return 1;
}
