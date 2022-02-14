
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_creation_params {int resolution; int primary; int weight; int handle; int fence_sz; int high_gm_sz; int low_gm_sz; } ;
struct TYPE_2__ {int weight; } ;
struct intel_vgpu {int id; int object_idr; int page_track_tree; int dmabuf_obj_list_head; int dmabuf_lock; int vgpu_lock; TYPE_1__ sched_ctl; struct intel_gvt* gvt; int handle; } ;
struct intel_gvt {int vgpu_idr; int dev_priv; } ;


 int VAR_0 ;
 struct intel_vgpu* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (char*,int ,int ,int ,int ) ;
 int FUNC_6 (int *,struct intel_vgpu*,scalar_t__,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (struct intel_vgpu*) ;
 int FUNC_10 (struct intel_vgpu*) ;
 int FUNC_11 (struct intel_vgpu*) ;
 int FUNC_12 (struct intel_vgpu*,int ) ;
 int FUNC_13 (struct intel_vgpu*) ;
 int FUNC_14 (struct intel_vgpu*,struct intel_vgpu_creation_params*) ;
 int FUNC_15 (struct intel_vgpu*) ;
 int FUNC_16 (struct intel_vgpu*) ;
 int FUNC_17 (struct intel_vgpu*) ;
 int FUNC_18 (struct intel_vgpu*) ;
 int FUNC_19 (struct intel_vgpu*) ;
 int FUNC_20 (struct intel_vgpu*) ;
 int FUNC_21 (struct intel_vgpu*) ;
 int FUNC_22 (struct intel_vgpu*,int ) ;
 int FUNC_23 (struct intel_vgpu*,int ) ;
 int FUNC_24 (struct intel_vgpu*) ;
 int FUNC_25 (struct intel_vgpu*) ;
 int FUNC_26 (struct intel_vgpu*) ;
 int FUNC_27 (struct intel_vgpu*) ;
 int FUNC_28 (struct intel_vgpu*) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (struct intel_vgpu*) ;
 int FUNC_31 (struct intel_vgpu*) ;
 struct intel_vgpu* FUNC_32 (int) ;

__attribute__((used)) static struct intel_vgpu *FUNC_33(struct intel_gvt *VAR_5,
  struct intel_vgpu_creation_params *VAR_6)
{
 struct intel_vgpu *VAR_7;
 int VAR_8;

 FUNC_5("handle %llu low %llu MB high %llu MB fence %llu\n",
   VAR_6->handle, VAR_6->low_gm_sz, VAR_6->high_gm_sz,
   VAR_6->fence_sz);

 VAR_7 = FUNC_32(sizeof(*VAR_7));
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_6(&VAR_5->vgpu_idr, VAR_7, VAR_3 + 1, VAR_2,
  VAR_1);
 if (VAR_8 < 0)
  goto out_free_vgpu;

 VAR_7->id = VAR_8;
 VAR_7->handle = VAR_6->handle;
 VAR_7->gvt = VAR_5;
 VAR_7->sched_ctl.weight = VAR_6->weight;
 FUNC_29(&VAR_7->vgpu_lock);
 FUNC_29(&VAR_7->dmabuf_lock);
 FUNC_1(&VAR_7->dmabuf_obj_list_head);
 FUNC_2(&VAR_7->page_track_tree, VAR_1);
 FUNC_7(&VAR_7->object_idr);
 FUNC_22(VAR_7, VAR_6->primary);

 VAR_8 = FUNC_25(VAR_7);
 if (VAR_8)
  goto out_clean_idr;

 VAR_8 = FUNC_14(VAR_7, VAR_6);
 if (VAR_8)
  goto out_clean_vgpu_mmio;

 FUNC_30(VAR_7);

 VAR_8 = FUNC_10(VAR_7);
 if (VAR_8)
  goto out_clean_vgpu_resource;

 VAR_8 = FUNC_24(VAR_7);
 if (VAR_8)
  goto out_detach_hypervisor_vgpu;

 VAR_8 = FUNC_26(VAR_7);
 if (VAR_8)
  goto out_clean_gtt;

 VAR_8 = FUNC_23(VAR_7, VAR_6->resolution);
 if (VAR_8)
  goto out_clean_opregion;

 VAR_8 = FUNC_28(VAR_7);
 if (VAR_8)
  goto out_clean_display;

 VAR_8 = FUNC_27(VAR_7);
 if (VAR_8)
  goto out_clean_submission;

 FUNC_9(VAR_7);

 VAR_8 = FUNC_13(VAR_7);
 if (VAR_8)
  goto out_clean_sched_policy;


 if (FUNC_4(VAR_5->dev_priv) || FUNC_3(VAR_5->dev_priv))
  VAR_8 = FUNC_12(VAR_7, VAR_4);
 if (VAR_8)
  goto out_clean_sched_policy;

 return VAR_7;

out_clean_sched_policy:
 FUNC_19(VAR_7);
out_clean_submission:
 FUNC_20(VAR_7);
out_clean_display:
 FUNC_15(VAR_7);
out_clean_opregion:
 FUNC_18(VAR_7);
out_clean_gtt:
 FUNC_16(VAR_7);
out_detach_hypervisor_vgpu:
 FUNC_11(VAR_7);
out_clean_vgpu_resource:
 FUNC_21(VAR_7);
out_clean_vgpu_mmio:
 FUNC_17(VAR_7);
out_clean_idr:
 FUNC_8(&VAR_5->vgpu_idr, VAR_7->id);
out_free_vgpu:
 FUNC_31(VAR_7);
 return FUNC_0(VAR_8);
}
