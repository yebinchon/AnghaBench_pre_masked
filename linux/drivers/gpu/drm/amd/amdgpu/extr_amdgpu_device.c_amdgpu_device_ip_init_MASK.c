
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int num_physical_nodes; } ;
struct TYPE_14__ {TYPE_6__ xgmi; } ;
struct TYPE_12__ {int csa_obj; } ;
struct amdgpu_device {int num_ip_blocks; TYPE_7__ gmc; int dev; TYPE_5__ virt; TYPE_4__* ip_blocks; } ;
struct TYPE_10__ {int sw; int hw; int valid; } ;
struct TYPE_11__ {TYPE_3__ status; TYPE_2__* version; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__* funcs; } ;
struct TYPE_8__ {int (* sw_init ) (void*) ;int (* hw_init ) (void*) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct amdgpu_device*,int *,int ,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (struct amdgpu_device*) ;
 scalar_t__ FUNC_10 (struct amdgpu_device*) ;
 int FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*,int ,int ,int) ;
 int FUNC_13 (struct amdgpu_device*) ;
 int FUNC_14 (struct amdgpu_device*,int) ;
 int FUNC_15 (struct amdgpu_device*) ;
 int FUNC_16 (int ,char*,int) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;

__attribute__((used)) static int FUNC_19(struct amdgpu_device *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_9(VAR_5);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_ip_blocks; VAR_6++) {
  if (!VAR_5->ip_blocks[VAR_6].status.valid)
   continue;
  VAR_7 = VAR_5->ip_blocks[VAR_6].version->funcs->sw_init((void *)VAR_5);
  if (VAR_7) {
   FUNC_0("sw_init of IP block <%s> failed %d\n",
      VAR_5->ip_blocks[VAR_6].version->funcs->name, VAR_7);
   goto init_failed;
  }
  VAR_5->ip_blocks[VAR_6].status.sw = 1;


  if (VAR_5->ip_blocks[VAR_6].version->type == VAR_3) {
   VAR_7 = FUNC_6(VAR_5);
   if (VAR_7) {
    FUNC_0("amdgpu_vram_scratch_init failed %d\n", VAR_7);
    goto init_failed;
   }
   VAR_7 = VAR_5->ip_blocks[VAR_6].version->funcs->hw_init((void *)VAR_5);
   if (VAR_7) {
    FUNC_0("hw_init %d failed %d\n", VAR_6, VAR_7);
    goto init_failed;
   }
   VAR_7 = FUNC_7(VAR_5);
   if (VAR_7) {
    FUNC_0("amdgpu_device_wb_init failed %d\n", VAR_7);
    goto init_failed;
   }
   VAR_5->ip_blocks[VAR_6].status.hw = 1;


   if (VAR_4 || FUNC_10(VAR_5)) {
    VAR_7 = FUNC_1(VAR_5, &VAR_5->virt.csa_obj,
        VAR_2,
        VAR_1);
    if (VAR_7) {
     FUNC_0("allocate CSA failed %d\n", VAR_7);
     goto init_failed;
    }
   }
  }
 }

 VAR_7 = FUNC_8(VAR_5);
 if (VAR_7) {
  FUNC_16(VAR_5->dev, "IB initialization failed (%d).\n", VAR_7);
  FUNC_12(VAR_5, VAR_0, 0, VAR_7);
  goto init_failed;
 }

 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7)
  goto init_failed;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7)
  goto init_failed;

 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7)
  goto init_failed;

 VAR_7 = FUNC_5(VAR_5);
 if (VAR_7)
  goto init_failed;

 if (VAR_5->gmc.xgmi.num_physical_nodes > 1)
  FUNC_15(VAR_5);
 FUNC_2(VAR_5);

init_failed:
 if (FUNC_10(VAR_5)) {
  if (!VAR_7)
   FUNC_13(VAR_5);
  FUNC_14(VAR_5, 1);
 }

 return VAR_7;
}
