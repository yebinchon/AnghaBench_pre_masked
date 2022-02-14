
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cap11xx_priv {TYPE_1__* idev; int * keycodes; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int keycodemax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,unsigned int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,unsigned int*) ;
 int FUNC_3 (int ,int ,int,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct cap11xx_priv *VAR_5 = VAR_4;
 unsigned int VAR_6;
 int VAR_7, VAR_8;





 VAR_7 = FUNC_3(VAR_5->regmap, VAR_0, 1, 0);
 if (VAR_7 < 0)
  goto out;

 VAR_7 = FUNC_2(VAR_5->regmap, VAR_1, &VAR_6);
 if (VAR_7 < 0)
  goto out;

 for (VAR_8 = 0; VAR_8 < VAR_5->idev->keycodemax; VAR_8++)
  FUNC_0(VAR_5->idev, VAR_5->keycodes[VAR_8],
     VAR_6 & (1 << VAR_8));

 FUNC_1(VAR_5->idev);

out:
 return VAR_2;
}
