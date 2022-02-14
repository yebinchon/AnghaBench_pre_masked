
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_mc_obj_desc {int dummy; } ;
struct fsl_mc_device {int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct device* FUNC_0 (int *,struct fsl_mc_obj_desc*,int ) ;
 struct fsl_mc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static struct fsl_mc_device *FUNC_2(struct fsl_mc_obj_desc
        *VAR_1,
        struct fsl_mc_device
        *VAR_2)
{
 struct device *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->dev, VAR_1,
    VAR_0);

 return VAR_3 ? FUNC_1(VAR_3) : ((void*)0);
}
