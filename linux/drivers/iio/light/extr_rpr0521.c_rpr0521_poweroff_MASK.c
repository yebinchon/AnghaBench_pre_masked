
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rpr0521_data {int als_dev_en; int pxs_dev_en; TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_3(struct rpr0521_data *VAR_6)
{
 int VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_6->regmap, VAR_5,
     VAR_1 |
     VAR_3,
     VAR_0 |
     VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6->als_dev_en = 0;
 VAR_6->pxs_dev_en = 0;





 VAR_7 = FUNC_1(VAR_6->regmap, VAR_4, &VAR_8);
 if (VAR_7) {
  FUNC_0(&VAR_6->client->dev, "Failed to reset int pin.\n");
  return VAR_7;
 }

 return 0;
}
