
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
struct TYPE_5__ {int late_initialized; } ;
struct TYPE_8__ {TYPE_3__* version; TYPE_1__ status; } ;
struct TYPE_7__ {scalar_t__ type; TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* set_powergating_state ) (void*,int) ;int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (void*,int) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_5, enum amd_powergating_state VAR_6)
{
 int VAR_7, VAR_8, VAR_9;

 if (VAR_4 == 1)
  return 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_ip_blocks; VAR_8++) {
  VAR_7 = VAR_6 == VAR_3 ? VAR_8 : VAR_5->num_ip_blocks - VAR_8 - 1;
  if (!VAR_5->ip_blocks[VAR_7].status.late_initialized)
   continue;

  if (VAR_5->ip_blocks[VAR_7].version->type != VAR_0 &&
      VAR_5->ip_blocks[VAR_7].version->type != VAR_1 &&
      VAR_5->ip_blocks[VAR_7].version->type != VAR_2 &&
      VAR_5->ip_blocks[VAR_7].version->funcs->set_powergating_state) {

   VAR_9 = VAR_5->ip_blocks[VAR_7].version->funcs->set_powergating_state((void *)VAR_5,
           VAR_6);
   if (VAR_9) {
    FUNC_0("set_powergating_state(gate) of IP block <%s> failed %d\n",
       VAR_5->ip_blocks[VAR_7].version->funcs->name, VAR_9);
    return VAR_9;
   }
  }
 }
 return 0;
}
