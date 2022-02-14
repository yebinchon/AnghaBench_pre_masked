
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* uint32_t ;
struct list_head {int dummy; } ;
struct TYPE_14__ {int max_engine_clk_ccompute; int capability; int simd_count; int max_waves_per_simd; int num_gws; int num_sdma_xgmi_engines; int num_sdma_engines; int hive_id; int drm_render_minor; int max_engine_clk_fcompute; int location_id; int device_id; int vendor_id; int simd_arrays_per_engine; int name; } ;
struct kfd_topology_device {TYPE_6__ node_props; TYPE_5__* gpu; void* gpu_id; } ;
struct TYPE_9__ {int drm_render_minor; } ;
struct kfd_dev {TYPE_2__* device_info; int hive_id; TYPE_1__ shared_resources; TYPE_8__* pdev; void* id; } ;
struct kfd_cu_info {int simd_per_cu; int cu_active_number; int num_shader_arrays_per_engine; } ;
struct amdgpu_ras {int features; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_16__ {int device; int vendor; } ;
struct TYPE_15__ {int generation_count; } ;
struct TYPE_13__ {scalar_t__ kgd; TYPE_4__* device_info; TYPE_3__* dqm; } ;
struct TYPE_12__ {int asic_family; scalar_t__ needs_iommu_device; } ;
struct TYPE_11__ {scalar_t__ sched_policy; } ;
struct TYPE_10__ {int num_xgmi_sdma_engines; int num_sdma_engines; int asic_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct list_head*) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int,char*,int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (scalar_t__,struct kfd_cu_info*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 struct amdgpu_ras* FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 scalar_t__ VAR_16 ;
 struct kfd_topology_device* FUNC_11 (struct kfd_dev*) ;
 int FUNC_12 (void**,size_t*,int ,struct kfd_dev*,int) ;
 int FUNC_13 () ;
 int FUNC_14 (void*) ;
 int FUNC_15 (struct kfd_topology_device*) ;
 int FUNC_16 (struct kfd_topology_device*) ;
 void* FUNC_17 (struct kfd_dev*) ;
 int FUNC_18 (void*,int) ;
 int FUNC_19 (void*,struct list_head*,int) ;
 int FUNC_20 (struct list_head*,int *) ;
 int FUNC_21 () ;
 int FUNC_22 (TYPE_8__*) ;
 int FUNC_23 (char*,...) ;
 int FUNC_24 (char*,void*,...) ;
 int FUNC_25 (int ,int ,int ) ;
 TYPE_7__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_26 (int *) ;

int FUNC_27(struct kfd_dev *VAR_21)
{
 uint32_t VAR_22;
 struct kfd_topology_device *VAR_23;
 struct kfd_cu_info VAR_24;
 int VAR_25 = 0;
 struct list_head VAR_26;
 void *VAR_27 = ((void*)0);
 size_t VAR_28 = 0;
 int VAR_29;
 struct amdgpu_ras *VAR_30;

 FUNC_1(&VAR_26);

 VAR_22 = FUNC_17(VAR_21);

 FUNC_23("Adding new GPU (ID: 0x%x) to topology\n", VAR_22);

 VAR_29 = FUNC_8(&VAR_18);







 VAR_23 = FUNC_11(VAR_21);
 if (!VAR_23) {
  VAR_25 = FUNC_12(&VAR_27, &VAR_28,
          VAR_3, VAR_21,
          VAR_29);
  if (VAR_25) {
   FUNC_24("Error creating VCRAT for GPU (ID: 0x%x)\n",
          VAR_22);
   return VAR_25;
  }
  VAR_25 = FUNC_19(VAR_27,
        &VAR_26,
        VAR_29);
  if (VAR_25) {
   FUNC_24("Error parsing VCRAT for GPU (ID: 0x%x)\n",
          VAR_22);
   goto err;
  }

  FUNC_10(&VAR_20);
  FUNC_20(&VAR_26,
   &VAR_19);




  VAR_25 = FUNC_21();
  FUNC_26(&VAR_20);

  if (!VAR_25)
   VAR_17.generation_count++;
  else
   FUNC_24("Failed to update GPU (ID: 0x%x) to sysfs topology. res=%d\n",
      VAR_22, VAR_25);
  VAR_23 = FUNC_11(VAR_21);
  if (FUNC_3(!VAR_23)) {
   VAR_25 = -VAR_4;
   goto err;
  }
 }

 VAR_23->gpu_id = VAR_22;
 VAR_21->id = VAR_22;
 FUNC_4(VAR_23->gpu->kgd, &VAR_24);

 FUNC_25(VAR_23->node_props.name, VAR_21->device_info->asic_name,
   VAR_15);

 VAR_23->node_props.simd_arrays_per_engine =
  VAR_24.num_shader_arrays_per_engine;

 VAR_23->node_props.vendor_id = VAR_21->pdev->vendor;
 VAR_23->node_props.device_id = VAR_21->pdev->device;
 VAR_23->node_props.location_id = FUNC_22(VAR_21->pdev);
 VAR_23->node_props.max_engine_clk_fcompute =
  FUNC_5(VAR_23->gpu->kgd);
 VAR_23->node_props.max_engine_clk_ccompute =
  FUNC_9(0) / 1000;
 VAR_23->node_props.drm_render_minor =
  VAR_21->shared_resources.drm_render_minor;

 VAR_23->node_props.hive_id = VAR_21->hive_id;
 VAR_23->node_props.num_sdma_engines = VAR_21->device_info->num_sdma_engines;
 VAR_23->node_props.num_sdma_xgmi_engines =
    VAR_21->device_info->num_xgmi_sdma_engines;
 VAR_23->node_props.num_gws = (VAR_16 &&
  VAR_23->gpu->dqm->sched_policy != VAR_14) ?
  FUNC_6(VAR_23->gpu->kgd) : 0;

 FUNC_16(VAR_23);
 FUNC_15(VAR_23);

 switch (VAR_23->gpu->device_info->asic_family) {
 case 138:
 case 139:
 case 132:
  VAR_23->node_props.capability |= ((VAR_8 <<
   VAR_10) &
   VAR_9);
  break;
 case 141:
 case 140:
 case 136:
 case 135:
 case 134:
 case 128:
  FUNC_23("Adding doorbell packet type capability\n");
  VAR_23->node_props.capability |= ((VAR_6 <<
   VAR_10) &
   VAR_9);
  break;
 case 131:
 case 130:
 case 129:
 case 133:
 case 142:
 case 137:
  VAR_23->node_props.capability |= ((VAR_7 <<
   VAR_10) &
   VAR_9);
  break;
 default:
  FUNC_2(1, "Unexpected ASIC family %u",
       VAR_23->gpu->device_info->asic_family);
 }





 if (VAR_23->gpu->device_info->needs_iommu_device)
  VAR_23->node_props.capability |= VAR_5;
 else
  VAR_23->node_props.capability &= ~VAR_5;






 if (VAR_23->gpu->device_info->asic_family == 141) {
  VAR_23->node_props.simd_count =
   VAR_24.simd_per_cu * VAR_24.cu_active_number;
  VAR_23->node_props.max_waves_per_simd = 10;
 }

 VAR_30 = FUNC_7((struct amdgpu_device *)(VAR_23->gpu->kgd));
 if (VAR_30) {

  VAR_23->node_props.capability |=
   (((VAR_30->features & FUNC_0(VAR_1)) != 0) ||
    ((VAR_30->features & FUNC_0(VAR_0)) != 0)) ?
   VAR_13 : 0;
  VAR_23->node_props.capability |= ((VAR_30->features & FUNC_0(VAR_2)) != 0) ?
   VAR_11 : 0;

  VAR_23->node_props.capability |= (VAR_30->features != 0) ?
   VAR_12 : 0;
 }

 FUNC_13();

 if (!VAR_25)
  FUNC_18(VAR_22, 1);
err:
 FUNC_14(VAR_27);
 return VAR_25;
}
