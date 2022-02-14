
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct fsl_mc {TYPE_1__* root_mc_bus_dev; } ;
struct TYPE_2__ {int * mc_io; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 struct fsl_mc* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct fsl_mc *VAR_2 = FUNC_3(VAR_1);

 if (!FUNC_2(&VAR_2->root_mc_bus_dev->dev))
  return -VAR_0;

 FUNC_1(VAR_2->root_mc_bus_dev);

 FUNC_0(VAR_2->root_mc_bus_dev->mc_io);
 VAR_2->root_mc_bus_dev->mc_io = ((void*)0);

 return 0;
}
