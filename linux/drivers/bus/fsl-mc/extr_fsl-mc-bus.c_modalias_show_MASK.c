
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vendor; char* type; } ;
struct fsl_mc_device {TYPE_1__ obj_desc; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int,char*) ;
 struct fsl_mc_device* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_0, struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct fsl_mc_device *VAR_3 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, "fsl-mc:v%08Xd%s\n", VAR_3->obj_desc.vendor,
         VAR_3->obj_desc.type);
}
