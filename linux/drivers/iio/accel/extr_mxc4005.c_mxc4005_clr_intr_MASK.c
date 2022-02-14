
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mxc4005_data {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct mxc4005_data *VAR_2)
{
 int VAR_3;


 VAR_3 = FUNC_1(VAR_2->regmap, VAR_0,
      VAR_1);
 if (VAR_3 < 0) {
  FUNC_0(VAR_2->dev, "failed to write to reg_int_clr1\n");
  return VAR_3;
 }

 return 0;
}
