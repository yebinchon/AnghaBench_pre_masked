
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dev; } ;
struct sii902x {TYPE_1__ bridge; int mutex; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,unsigned int*) ;
 int FUNC_4 (int ,int ,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_3, void *VAR_4)
{
 struct sii902x *VAR_5 = VAR_4;
 unsigned int VAR_6 = 0;

 FUNC_1(&VAR_5->mutex);

 FUNC_3(VAR_5->regmap, VAR_2, &VAR_6);
 FUNC_4(VAR_5->regmap, VAR_2, VAR_6);

 FUNC_2(&VAR_5->mutex);

 if ((VAR_6 & VAR_1) && VAR_5->bridge.dev)
  FUNC_0(VAR_5->bridge.dev);

 return VAR_0;
}
