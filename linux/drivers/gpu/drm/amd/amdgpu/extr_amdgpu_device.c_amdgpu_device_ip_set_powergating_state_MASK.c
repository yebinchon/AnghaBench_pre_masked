
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_4__* ip_blocks; } ;
typedef enum amd_powergating_state { ____Placeholder_amd_powergating_state } amd_powergating_state ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_5__ {int valid; } ;
struct TYPE_8__ {TYPE_3__* version; TYPE_1__ status; } ;
struct TYPE_7__ {int type; TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* set_powergating_state ) (void*,int) ;int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (void*,int) ;

int FUNC_2(void *VAR_0,
        enum amd_ip_block_type VAR_1,
        enum amd_powergating_state VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0;
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_ip_blocks; VAR_4++) {
  if (!VAR_3->ip_blocks[VAR_4].status.valid)
   continue;
  if (VAR_3->ip_blocks[VAR_4].version->type != VAR_1)
   continue;
  if (!VAR_3->ip_blocks[VAR_4].version->funcs->set_powergating_state)
   continue;
  VAR_5 = VAR_3->ip_blocks[VAR_4].version->funcs->set_powergating_state(
   (void *)VAR_3, VAR_2);
  if (VAR_5)
   FUNC_0("set_powergating_state of IP block <%s> failed %d\n",
      VAR_3->ip_blocks[VAR_4].version->funcs->name, VAR_5);
 }
 return VAR_5;
}
