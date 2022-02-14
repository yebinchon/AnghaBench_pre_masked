
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx90632_data {int regmap; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct mlx90632_data *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_3(VAR_0->regmap);
 if (VAR_1 < 0) {
  FUNC_1(&VAR_0->client->dev,
   "Failed to sync regmap registers: %d\n", VAR_1);
  return VAR_1;
 }

 FUNC_0(&VAR_0->client->dev, "Requesting wake-up\n");
 return FUNC_2(VAR_0->regmap);
}
