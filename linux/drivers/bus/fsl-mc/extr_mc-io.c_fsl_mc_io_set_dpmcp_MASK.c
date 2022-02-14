
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_io {struct fsl_mc_device* dpmcp_dev; } ;
struct TYPE_2__ {int id; } ;
struct fsl_mc_device {struct fsl_mc_io* mc_io; int mc_handle; TYPE_1__ obj_desc; } ;


 int VAR_0 ;
 int FUNC_0 (struct fsl_mc_io*,int ,int ,int *) ;

__attribute__((used)) static int FUNC_1(struct fsl_mc_io *VAR_1,
          struct fsl_mc_device *VAR_2)
{
 int VAR_3;

 if (VAR_1->dpmcp_dev)
  return -VAR_0;

 if (VAR_2->mc_io)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1,
      0,
      VAR_2->obj_desc.id,
      &VAR_2->mc_handle);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_1->dpmcp_dev = VAR_2;
 VAR_2->mc_io = VAR_1;
 return 0;
}
