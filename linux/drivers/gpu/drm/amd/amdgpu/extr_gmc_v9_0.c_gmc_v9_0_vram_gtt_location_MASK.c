
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct amdgpu_gmc {int dummy; } ;
struct TYPE_5__ {int physical_node_id; int node_segment_size; } ;
struct TYPE_6__ {TYPE_2__ xgmi; } ;
struct TYPE_4__ {int vram_base_offset; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_3__ gmc; TYPE_1__ vm_manager; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_gmc*) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_gmc*) ;
 int FUNC_2 (struct amdgpu_device*,struct amdgpu_gmc*,int) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;

__attribute__((used)) static void FUNC_7(struct amdgpu_device *VAR_1,
     struct amdgpu_gmc *VAR_2)
{
 u64 VAR_3 = 0;

 if (VAR_1->asic_type == VAR_0)
  VAR_3 = FUNC_6(VAR_1);
 else if (!FUNC_3(VAR_1))
  VAR_3 = FUNC_5(VAR_1);


 VAR_3 += VAR_1->gmc.xgmi.physical_node_id * VAR_1->gmc.xgmi.node_segment_size;
 FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_1(VAR_1, VAR_2);
 FUNC_0(VAR_1, VAR_2);

 VAR_1->vm_manager.vram_base_offset = FUNC_4(VAR_1);


 VAR_1->vm_manager.vram_base_offset +=
  VAR_1->gmc.xgmi.physical_node_id * VAR_1->gmc.xgmi.node_segment_size;
}
