
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int parent; } ;
struct TYPE_4__ {int type; } ;
struct fsl_mc_device {TYPE_2__ dev; TYPE_1__ obj_desc; } ;
struct fsl_mc_bus {int dummy; } ;
typedef enum fsl_mc_pool_type { ____Placeholder_fsl_mc_pool_type } fsl_mc_pool_type ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (struct fsl_mc_device*) ;
 int FUNC_3 (struct fsl_mc_bus*,int,struct fsl_mc_device*) ;
 int FUNC_4 (int ,int*) ;
 struct fsl_mc_bus* FUNC_5 (struct fsl_mc_device*) ;
 struct fsl_mc_device* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct fsl_mc_device *VAR_1)
{
 enum fsl_mc_pool_type VAR_2;
 struct fsl_mc_device *VAR_3;
 struct fsl_mc_bus *VAR_4;
 int VAR_5;

 if (!FUNC_2(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_6(VAR_1->dev.parent);
 if (!FUNC_1(&VAR_3->dev))
  return -VAR_0;

 VAR_4 = FUNC_5(VAR_3);
 VAR_5 = FUNC_4(VAR_1->obj_desc.type, &VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_0(&VAR_1->dev,
  "Allocatable fsl-mc device bound to fsl_mc_allocator driver");
 return 0;
}
