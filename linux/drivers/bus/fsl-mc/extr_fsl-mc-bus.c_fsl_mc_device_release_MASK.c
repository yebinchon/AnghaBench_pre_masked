
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {struct fsl_mc_device* regions; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct fsl_mc_device*) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_2 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0)
{
 struct fsl_mc_device *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1->regions);

 if (FUNC_0(VAR_1))
  FUNC_1(FUNC_2(VAR_1));
 else
  FUNC_1(VAR_1);
}
