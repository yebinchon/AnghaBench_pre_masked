
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3692x_led {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct lm3692x_led *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_1(VAR_1->regmap, VAR_0, &VAR_3);
 if (VAR_2)
  return VAR_2;

 if (VAR_3)
  FUNC_0(&VAR_1->client->dev, "Detected a fault 0x%X\n", VAR_3);




 FUNC_1(VAR_1->regmap, VAR_0, &VAR_3);
 if (VAR_3)
  FUNC_0(&VAR_1->client->dev, "Second read of fault flags 0x%X\n",
   VAR_3);

 return VAR_3;
}
