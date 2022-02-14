
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panfrost_device {int rstc; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct panfrost_device *VAR_0)
{
 int VAR_1;

 VAR_0->rstc = FUNC_3(VAR_0->dev, 0, 1);
 if (FUNC_0(VAR_0->rstc)) {
  FUNC_2(VAR_0->dev, "get reset failed %ld\n", FUNC_1(VAR_0->rstc));
  return FUNC_1(VAR_0->rstc);
 }

 VAR_1 = FUNC_4(VAR_0->rstc);
 if (VAR_1)
  return VAR_1;

 return 0;
}
