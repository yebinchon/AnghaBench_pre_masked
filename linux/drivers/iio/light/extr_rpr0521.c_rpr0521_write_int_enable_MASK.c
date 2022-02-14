
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct rpr0521_data *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_1(VAR_8->regmap, VAR_7,
  VAR_5,
  VAR_4);
 if (VAR_9) {
  FUNC_0(&VAR_8->client->dev, "PS control reg write fail.\n");
  return -VAR_0;
  }


 VAR_9 = FUNC_2(VAR_8->regmap, VAR_6,
  VAR_1 |
  VAR_2 |
  VAR_3
  );
 if (VAR_9) {
  FUNC_0(&VAR_8->client->dev, "Interrupt setup write fail.\n");
  return -VAR_0;
  }

 return 0;
}
