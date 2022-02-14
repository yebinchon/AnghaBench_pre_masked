
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mxc4005_data {int dev; int regmap; } ;
struct TYPE_3__ {int scale; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_4 ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct mxc4005_data *VAR_5, int VAR_6)
{
 unsigned int VAR_7;
 int VAR_8;
 int VAR_9;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_4); VAR_8++) {
  if (VAR_4[VAR_8].scale == VAR_6) {
   VAR_7 = VAR_8 << VAR_1;
   VAR_9 = FUNC_2(VAR_5->regmap,
       VAR_2,
       VAR_3,
       VAR_7);
   if (VAR_9 < 0)
    FUNC_1(VAR_5->dev,
     "failed to write reg_control\n");
   return VAR_9;
  }
 }

 return -VAR_0;
}
