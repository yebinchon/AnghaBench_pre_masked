
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_yres; int max_xres; void* edid_size; void* edid_max_size; int edid_offset; } ;
struct vfio_edid_region {int edid_blob; TYPE_1__ vfio_edid_regs; } ;
struct intel_vgpu_port {TYPE_2__* edid; int id; } ;
struct intel_vgpu {int dummy; } ;
struct TYPE_4__ {int edid_block; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct intel_vgpu_port* FUNC_0 (struct intel_vgpu*,int) ;
 int FUNC_1 (struct intel_vgpu*,int ,int ,int *,void*,int,struct vfio_edid_region*) ;
 int VAR_9 ;
 struct vfio_edid_region* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(void *VAR_10, int VAR_11)
{
 struct intel_vgpu *VAR_12 = (struct intel_vgpu *)VAR_10;
 struct intel_vgpu_port *VAR_13 = FUNC_0(VAR_12, VAR_11);
 struct vfio_edid_region *VAR_14;
 int VAR_15;

 VAR_14 = FUNC_2(sizeof(*VAR_14), VAR_3);
 if (!VAR_14)
  return -VAR_2;


 VAR_14->vfio_edid_regs.edid_offset = VAR_0;
 VAR_14->vfio_edid_regs.edid_max_size = VAR_1;
 VAR_14->vfio_edid_regs.edid_size = VAR_1;
 VAR_14->vfio_edid_regs.max_xres = FUNC_3(VAR_13->id);
 VAR_14->vfio_edid_regs.max_yres = FUNC_4(VAR_13->id);
 VAR_14->edid_blob = VAR_13->edid->edid_block;

 VAR_15 = FUNC_1(VAR_12,
   VAR_8,
   VAR_7,
   &VAR_9, VAR_1,
   VAR_5 |
   VAR_6 |
   VAR_4, VAR_14);

 return VAR_15;
}
