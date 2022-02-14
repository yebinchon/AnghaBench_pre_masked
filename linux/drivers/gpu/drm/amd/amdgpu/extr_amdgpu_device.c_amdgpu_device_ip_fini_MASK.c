
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


struct TYPE_10__ {int csa_obj; } ;
struct TYPE_8__ {int num_physical_nodes; } ;
struct TYPE_9__ {TYPE_1__ xgmi; } ;
struct amdgpu_device {int num_ip_blocks; TYPE_7__* ip_blocks; TYPE_3__ virt; TYPE_2__ gmc; } ;
struct TYPE_13__ {int hw; int sw; int valid; int late_initialized; } ;
struct TYPE_14__ {TYPE_6__ status; TYPE_5__* version; } ;
struct TYPE_12__ {scalar_t__ type; TYPE_4__* funcs; } ;
struct TYPE_11__ {int (* hw_fini ) (void*) ;int (* sw_fini ) (void*) ;int (* late_fini ) (void*) ;int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*,int ) ;
 int FUNC_4 (struct amdgpu_device*,int ) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct amdgpu_device*) ;
 int FUNC_9 (struct amdgpu_device*) ;
 int FUNC_10 (struct amdgpu_device*) ;
 scalar_t__ FUNC_11 (struct amdgpu_device*) ;
 int FUNC_12 (struct amdgpu_device*) ;
 scalar_t__ FUNC_13 (struct amdgpu_device*,int) ;
 int FUNC_14 (struct amdgpu_device*) ;
 int FUNC_15 (void*) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;

__attribute__((used)) static int FUNC_19(struct amdgpu_device *VAR_4)
{
 int VAR_5, VAR_6;

 FUNC_10(VAR_4);

 if (VAR_4->gmc.xgmi.num_physical_nodes > 1)
  FUNC_14(VAR_4);

 FUNC_2(VAR_4);

 FUNC_4(VAR_4, VAR_3);
 FUNC_3(VAR_4, VAR_0);


 for (VAR_5 = 0; VAR_5 < VAR_4->num_ip_blocks; VAR_5++) {
  if (!VAR_4->ip_blocks[VAR_5].status.hw)
   continue;
  if (VAR_4->ip_blocks[VAR_5].version->type == VAR_2) {
   VAR_6 = VAR_4->ip_blocks[VAR_5].version->funcs->hw_fini((void *)VAR_4);

   if (VAR_6) {
    FUNC_0("hw_fini of IP block <%s> failed %d\n",
       VAR_4->ip_blocks[VAR_5].version->funcs->name, VAR_6);
   }
   VAR_4->ip_blocks[VAR_5].status.hw = 0;
   break;
  }
 }

 for (VAR_5 = VAR_4->num_ip_blocks - 1; VAR_5 >= 0; VAR_5--) {
  if (!VAR_4->ip_blocks[VAR_5].status.hw)
   continue;

  VAR_6 = VAR_4->ip_blocks[VAR_5].version->funcs->hw_fini((void *)VAR_4);

  if (VAR_6) {
   FUNC_0("hw_fini of IP block <%s> failed %d\n",
      VAR_4->ip_blocks[VAR_5].version->funcs->name, VAR_6);
  }

  VAR_4->ip_blocks[VAR_5].status.hw = 0;
 }


 for (VAR_5 = VAR_4->num_ip_blocks - 1; VAR_5 >= 0; VAR_5--) {
  if (!VAR_4->ip_blocks[VAR_5].status.sw)
   continue;

  if (VAR_4->ip_blocks[VAR_5].version->type == VAR_1) {
   FUNC_12(VAR_4);
   FUNC_7(&VAR_4->virt.csa_obj);
   FUNC_6(VAR_4);
   FUNC_5(VAR_4);
   FUNC_8(VAR_4);
  }

  VAR_6 = VAR_4->ip_blocks[VAR_5].version->funcs->sw_fini((void *)VAR_4);

  if (VAR_6) {
   FUNC_0("sw_fini of IP block <%s> failed %d\n",
      VAR_4->ip_blocks[VAR_5].version->funcs->name, VAR_6);
  }
  VAR_4->ip_blocks[VAR_5].status.sw = 0;
  VAR_4->ip_blocks[VAR_5].status.valid = 0;
 }

 for (VAR_5 = VAR_4->num_ip_blocks - 1; VAR_5 >= 0; VAR_5--) {
  if (!VAR_4->ip_blocks[VAR_5].status.late_initialized)
   continue;
  if (VAR_4->ip_blocks[VAR_5].version->funcs->late_fini)
   VAR_4->ip_blocks[VAR_5].version->funcs->late_fini((void *)VAR_4);
  VAR_4->ip_blocks[VAR_5].status.late_initialized = 0;
 }

 FUNC_9(VAR_4);

 if (FUNC_11(VAR_4))
  if (FUNC_13(VAR_4, 0))
   FUNC_1("failed to release exclusive mode on fini\n");

 return 0;
}
