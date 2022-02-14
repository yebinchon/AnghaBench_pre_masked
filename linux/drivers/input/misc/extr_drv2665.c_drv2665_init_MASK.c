
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drv2665_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct drv2665_data *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_2(VAR_1->regmap,
          VAR_0,
          FUNC_0(VAR_0));
 if (VAR_2) {
  FUNC_1(&VAR_1->client->dev,
   "Failed to write init registers: %d\n",
   VAR_2);
  return VAR_2;
 }

 return 0;
}
