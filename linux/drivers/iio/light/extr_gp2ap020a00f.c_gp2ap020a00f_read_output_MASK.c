
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct gp2ap020a00f_data {int regmap; TYPE_1__* client; } ;
typedef int __le16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,unsigned int,int *,int) ;
 int FUNC_3 (struct gp2ap020a00f_data*) ;

__attribute__((used)) static int FUNC_4(struct gp2ap020a00f_data *VAR_0,
     unsigned int VAR_1, int *VAR_2)
{
 u8 VAR_3[2];
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->client->dev, "data ready timeout\n");

 VAR_4 = FUNC_2(VAR_0->regmap, VAR_1, VAR_3, 2);
 if (VAR_4 < 0)
  return VAR_4;

 *VAR_2 = FUNC_1((__le16 *)VAR_3);

 return VAR_4;
}
