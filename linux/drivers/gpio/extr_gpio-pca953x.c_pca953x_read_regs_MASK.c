
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct pca953x_chip {TYPE_1__* client; int regmap; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct pca953x_chip*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pca953x_chip*,int,int ,int,int) ;
 int FUNC_3 (int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_4(struct pca953x_chip *VAR_0, int VAR_1, u8 *VAR_2)
{
 u8 VAR_3 = FUNC_2(VAR_0, VAR_1, 0, 0, 1);
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0->regmap, VAR_3, VAR_2, FUNC_0(VAR_0));
 if (VAR_4 < 0) {
  FUNC_1(&VAR_0->client->dev, "failed reading register\n");
  return VAR_4;
 }

 return 0;
}
