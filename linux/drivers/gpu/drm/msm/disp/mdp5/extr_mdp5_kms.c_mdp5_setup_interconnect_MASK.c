
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct icc_path {int dummy; } ;


 scalar_t__ FUNC_0 (struct icc_path*) ;
 int FUNC_1 (struct icc_path*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct icc_path*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct icc_path*,int ,int ) ;
 struct icc_path* FUNC_6 (int *,char*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct icc_path *VAR_1 = FUNC_6(&VAR_0->dev, "mdp0-mem");
 struct icc_path *VAR_2 = FUNC_6(&VAR_0->dev, "mdp1-mem");
 struct icc_path *VAR_3 = FUNC_6(&VAR_0->dev, "rotator-mem");

 if (FUNC_0(VAR_1))
  return FUNC_3(VAR_1);

 if (!VAR_1) {






  FUNC_4(&VAR_0->dev, "No interconnect support may cause display underflows!\n");
  return 0;
 }

 FUNC_5(VAR_1, 0, FUNC_2(6400));

 if (!FUNC_1(VAR_2))
  FUNC_5(VAR_2, 0, FUNC_2(6400));
 if (!FUNC_1(VAR_3))
  FUNC_5(VAR_3, 0, FUNC_2(6400));

 return 0;
}
