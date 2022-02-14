
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_driver {int (* shutdown ) (struct fsl_mc_device*) ;} ;
struct fsl_mc_device {int dummy; } ;
struct device {int driver; } ;


 int FUNC_0 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_1 (struct device*) ;
 struct fsl_mc_driver* FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_0)
{
 struct fsl_mc_driver *VAR_1 = FUNC_2(VAR_0->driver);
 struct fsl_mc_device *VAR_2 = FUNC_1(VAR_0);

 VAR_1->shutdown(VAR_2);
}
