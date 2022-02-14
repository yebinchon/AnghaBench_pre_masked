
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_device {int dev; int regulator; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct panfrost_device *VAR_0)
{
 int VAR_1;

 VAR_0->regulator = FUNC_3(VAR_0->dev, "mali");
 if (FUNC_0(VAR_0->regulator)) {
  VAR_1 = FUNC_1(VAR_0->regulator);
  FUNC_2(VAR_0->dev, "failed to get regulator: %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_4(VAR_0->regulator);
 if (VAR_1 < 0) {
  FUNC_2(VAR_0->dev, "failed to enable regulator: %d\n", VAR_1);
  return VAR_1;
 }

 return 0;
}
