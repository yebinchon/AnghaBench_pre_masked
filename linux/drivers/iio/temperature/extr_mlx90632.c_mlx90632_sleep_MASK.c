
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx90632_data {int regmap; TYPE_1__* client; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx90632_data *VAR_0)
{
 FUNC_2(VAR_0->regmap);

 FUNC_0(&VAR_0->client->dev, "Requesting sleep");
 return FUNC_1(VAR_0->regmap);
}
