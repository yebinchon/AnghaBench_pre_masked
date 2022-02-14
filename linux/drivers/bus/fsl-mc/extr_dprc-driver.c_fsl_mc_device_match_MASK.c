
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_mc_obj_desc {scalar_t__ id; int type; } ;
struct TYPE_2__ {scalar_t__ id; int type; } ;
struct fsl_mc_device {TYPE_1__ obj_desc; } ;


 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool FUNC_1(struct fsl_mc_device *VAR_0,
    struct fsl_mc_obj_desc *VAR_1)
{
 return VAR_0->obj_desc.id == VAR_1->id &&
        FUNC_0(VAR_0->obj_desc.type, VAR_1->type) == 0;

}
