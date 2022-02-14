
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int num_regions; TYPE_3__* region; } ;
struct intel_vgpu {TYPE_2__ vdev; } ;
struct TYPE_7__ {TYPE_1__* ops; } ;
struct TYPE_5__ {int (* release ) (struct intel_vgpu*,TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct intel_vgpu*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 int VAR_1;
 struct intel_vgpu *VAR_2 = (struct intel_vgpu *)VAR_0;

 if (!VAR_2->vdev.region)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_2->vdev.num_regions; VAR_1++)
  if (VAR_2->vdev.region[VAR_1].ops->release)
   VAR_2->vdev.region[VAR_1].ops->release(VAR_2,
     &VAR_2->vdev.region[VAR_1]);
 VAR_2->vdev.num_regions = 0;
 FUNC_0(VAR_2->vdev.region);
 VAR_2->vdev.region = ((void*)0);
}
