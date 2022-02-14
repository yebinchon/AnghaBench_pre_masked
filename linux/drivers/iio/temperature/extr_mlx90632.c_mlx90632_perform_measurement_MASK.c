
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx90632_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,unsigned int,int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct mlx90632_data *VAR_4)
{
 int VAR_5, VAR_6 = 100;
 unsigned int VAR_7;

 VAR_5 = FUNC_2(VAR_4->regmap, VAR_1,
     VAR_3, 0);
 if (VAR_5 < 0)
  return VAR_5;

 while (VAR_6-- > 0) {
  VAR_5 = FUNC_1(VAR_4->regmap, VAR_1,
      &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_7 & VAR_3)
   break;
  FUNC_3(10000, 11000);
 }

 if (VAR_6 < 0) {
  FUNC_0(&VAR_4->client->dev, "data not ready");
  return -VAR_0;
 }

 return (VAR_7 & VAR_2) >> 2;
}
