
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ edid_offset; } ;
struct vfio_edid_region {TYPE_1__ vfio_edid_regs; } ;
struct TYPE_5__ {TYPE_3__* region; } ;
struct intel_vgpu {TYPE_2__ vdev; } ;
typedef scalar_t__ loff_t ;
struct TYPE_6__ {scalar_t__ data; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct vfio_edid_region*,char*,size_t,scalar_t__,int) ;
 int FUNC_3 (struct intel_vgpu*,struct vfio_edid_region*,char*,size_t,scalar_t__,int) ;

__attribute__((used)) static size_t FUNC_4(struct intel_vgpu *VAR_3, char *VAR_4,
  size_t VAR_5, loff_t *VAR_6, bool VAR_7)
{
 int VAR_8;
 unsigned int VAR_9 = FUNC_0(*VAR_6) -
   VAR_1;
 struct vfio_edid_region *VAR_10 =
  (struct vfio_edid_region *)VAR_3->vdev.region[VAR_9].data;
 loff_t VAR_11 = *VAR_6 & VAR_2;

 if (VAR_11 < VAR_10->vfio_edid_regs.edid_offset) {
  VAR_8 = FUNC_3(VAR_3, VAR_10, VAR_4, VAR_5, VAR_11, VAR_7);
 } else {
  VAR_11 -= VAR_0;
  VAR_8 = FUNC_2(VAR_10, VAR_4, VAR_5, VAR_11, VAR_7);
 }

 if (VAR_8 < 0)
  FUNC_1("failed to access EDID region\n");

 return VAR_8;
}
