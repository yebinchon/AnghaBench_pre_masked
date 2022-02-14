
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regulator_haptic {int active; int dev; int regulator; } ;


 int FUNC_0 (int ,char*,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct regulator_haptic *VAR_0, bool VAR_1)
{
 int VAR_2;

 if (VAR_0->active != VAR_1) {

  VAR_2 = VAR_1 ? FUNC_2(VAR_0->regulator) :
        FUNC_1(VAR_0->regulator);
  if (VAR_2) {
   FUNC_0(VAR_0->dev,
    "failed to switch regulator %s: %d\n",
    VAR_1 ? "on" : "off", VAR_2);
   return VAR_2;
  }

  VAR_0->active = VAR_1;
 }

 return 0;
}
