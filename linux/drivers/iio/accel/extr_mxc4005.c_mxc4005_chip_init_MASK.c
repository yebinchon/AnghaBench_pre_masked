
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc4005_data {int dev; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct mxc4005_data *VAR_1)
{
 int VAR_2;
 unsigned int VAR_3;

 VAR_2 = FUNC_2(VAR_1->regmap, VAR_0, &VAR_3);
 if (VAR_2 < 0) {
  FUNC_1(VAR_1->dev, "failed to read chip id\n");
  return VAR_2;
 }

 FUNC_0(VAR_1->dev, "MXC4005 chip id %02x\n", VAR_3);

 return 0;
}
