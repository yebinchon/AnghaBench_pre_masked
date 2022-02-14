
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_device {int dummy; } ;


 int FUNC_0 (struct fsl_mc_device*) ;
 int FUNC_1 (struct fsl_mc_device*) ;
 int FUNC_2 (struct fsl_mc_device*) ;
 int FUNC_3 (struct fsl_mc_device*) ;
 int FUNC_4 (struct fsl_mc_device*) ;

__attribute__((used)) static int FUNC_5(struct fsl_mc_device *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 < 0)
  goto error_free_irqs;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1 < 0)
  goto error_free_irqs;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 < 0)
  goto error_free_irqs;

 return 0;

error_free_irqs:
 FUNC_3(VAR_0);
 return VAR_1;
}
