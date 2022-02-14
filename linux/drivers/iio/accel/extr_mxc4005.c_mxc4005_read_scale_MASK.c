
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mxc4005_data {int dev; int regmap; } ;
struct TYPE_3__ {int scale; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 (int ,int ,unsigned int*) ;

__attribute__((used)) static int FUNC_3(struct mxc4005_data *VAR_4)
{
 unsigned int VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4->regmap, VAR_2, &VAR_5);
 if (VAR_6 < 0) {
  FUNC_1(VAR_4->dev, "failed to read reg_control\n");
  return VAR_6;
 }

 VAR_7 = VAR_5 >> VAR_1;

 if (VAR_7 < 0 || VAR_7 >= FUNC_0(VAR_3))
  return -VAR_0;

 return VAR_3[VAR_7].scale;
}
