
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_obj_desc {int dummy; } ;
struct fsl_mc_device {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct fsl_mc_device*,struct fsl_mc_obj_desc*) ;
 struct fsl_mc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, void *VAR_1)
{
 struct fsl_mc_obj_desc *VAR_2 = VAR_1;
 struct fsl_mc_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_3, VAR_2);
}
