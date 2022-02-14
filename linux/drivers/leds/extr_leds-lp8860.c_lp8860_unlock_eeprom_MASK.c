
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lp8860_led {int lock; int regmap; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct lp8860_led *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_1(&VAR_6->lock);

 if (VAR_7 == VAR_5) {
  VAR_8 = FUNC_3(VAR_6->regmap,
   VAR_3,
   VAR_0);
  if (VAR_8) {
   FUNC_0(&VAR_6->client->dev, "EEPROM Unlock failed\n");
   goto out;
  }

  VAR_8 = FUNC_3(VAR_6->regmap,
   VAR_3,
   VAR_1);
  if (VAR_8) {
   FUNC_0(&VAR_6->client->dev, "EEPROM Unlock failed\n");
   goto out;
  }
  VAR_8 = FUNC_3(VAR_6->regmap,
   VAR_3,
   VAR_2);
  if (VAR_8) {
   FUNC_0(&VAR_6->client->dev, "EEPROM Unlock failed\n");
   goto out;
  }
 } else {
  VAR_8 = FUNC_3(VAR_6->regmap,
   VAR_3,
   VAR_4);
 }

out:
 FUNC_2(&VAR_6->lock);
 return VAR_8;
}
