
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdce706_dev_data {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct cdce706_dev_data *VAR_0, unsigned VAR_1,
         unsigned VAR_2, unsigned VAR_3)
{
 int VAR_4 = FUNC_1(VAR_0->regmap, VAR_1 | 0x80, VAR_2, VAR_3);

 if (VAR_4 < 0)
  FUNC_0(&VAR_0->client->dev, "error updating reg %u", VAR_1);
 return VAR_4;
}
