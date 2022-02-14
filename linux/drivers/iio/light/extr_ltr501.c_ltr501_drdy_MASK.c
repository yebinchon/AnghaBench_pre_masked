
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ltr501_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct ltr501_data *VAR_2, u8 VAR_3)
{
 int VAR_4 = 100;
 int VAR_5, VAR_6;

 while (VAR_4--) {
  VAR_5 = FUNC_2(VAR_2->regmap, VAR_1, &VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
  if ((VAR_6 & VAR_3) == VAR_3)
   return 0;
  FUNC_1(25);
 }

 FUNC_0(&VAR_2->client->dev, "ltr501_drdy() failed, data not ready\n");
 return -VAR_0;
}
