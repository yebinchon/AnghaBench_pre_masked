
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc35240_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mmc35240_data *VAR_5)
{
 int VAR_6, VAR_7 = 100;
 unsigned int VAR_8;

 VAR_6 = FUNC_2(VAR_5->regmap, VAR_2,
      VAR_1);
 if (VAR_6 < 0)
  return VAR_6;

 while (VAR_7-- > 0) {
  VAR_6 = FUNC_1(VAR_5->regmap, VAR_3,
      &VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_8 & VAR_4)
   break;

  FUNC_3(10000, 11000);
 }

 if (VAR_7 < 0) {
  FUNC_0(&VAR_5->client->dev, "data not ready\n");
  return -VAR_0;
 }

 return 0;
}
