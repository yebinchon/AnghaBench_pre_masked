
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lima_device {int dev; int * regulator; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,int) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct lima_device *VAR_2)
{
 int VAR_3;

 VAR_2->regulator = FUNC_3(VAR_2->dev, "mali");
 if (FUNC_0(VAR_2->regulator)) {
  VAR_3 = FUNC_1(VAR_2->regulator);
  VAR_2->regulator = ((void*)0);
  if (VAR_3 == -VAR_0)
   return 0;
  if (VAR_3 != -VAR_1)
   FUNC_2(VAR_2->dev, "failed to get regulator: %d\n", VAR_3);
  return VAR_3;
 }

 VAR_3 = FUNC_4(VAR_2->regulator);
 if (VAR_3 < 0) {
  FUNC_2(VAR_2->dev, "failed to enable regulator: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
