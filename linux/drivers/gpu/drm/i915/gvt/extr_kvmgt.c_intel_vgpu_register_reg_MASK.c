
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct vfio_region {unsigned int type; unsigned int subtype; size_t size; void* data; int flags; struct intel_vgpu_regops const* ops; } ;
struct intel_vgpu_regops {int dummy; } ;
struct TYPE_2__ {int num_regions; struct vfio_region* region; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vfio_region* FUNC_0 (struct vfio_region*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct intel_vgpu *VAR_2,
  unsigned int VAR_3, unsigned int VAR_4,
  const struct intel_vgpu_regops *VAR_5,
  size_t VAR_6, u32 VAR_7, void *VAR_8)
{
 struct vfio_region *VAR_9;

 VAR_9 = FUNC_0(VAR_2->vdev.region,
   (VAR_2->vdev.num_regions + 1) * sizeof(*VAR_9),
   VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_2->vdev.region = VAR_9;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].type = VAR_3;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].subtype = VAR_4;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].ops = VAR_5;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].size = VAR_6;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].flags = VAR_7;
 VAR_2->vdev.region[VAR_2->vdev.num_regions].data = VAR_8;
 VAR_2->vdev.num_regions++;
 return 0;
}
