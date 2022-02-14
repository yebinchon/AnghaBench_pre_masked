
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int pp_handle; TYPE_3__* pp_funcs; } ;
struct amdgpu_device {int num_ip_blocks; TYPE_6__* ip_blocks; int mp1_state; TYPE_4__ powerplay; } ;
struct TYPE_11__ {int hw; int valid; } ;
struct TYPE_12__ {TYPE_5__ status; TYPE_2__* version; } ;
struct TYPE_9__ {int (* set_mp1_state ) (int ,int ) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__* funcs; } ;
struct TYPE_7__ {int (* suspend ) (struct amdgpu_device*) ;int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4;

 for (VAR_3 = VAR_2->num_ip_blocks - 1; VAR_3 >= 0; VAR_3--) {
  if (!VAR_2->ip_blocks[VAR_3].status.valid)
   continue;

  if (VAR_2->ip_blocks[VAR_3].version->type == VAR_0)
   continue;

  VAR_4 = VAR_2->ip_blocks[VAR_3].version->funcs->suspend(VAR_2);

  if (VAR_4) {
   FUNC_0("suspend of IP block <%s> failed %d\n",
      VAR_2->ip_blocks[VAR_3].version->funcs->name, VAR_4);
  }
  VAR_2->ip_blocks[VAR_3].status.hw = 0;

  if (VAR_2->ip_blocks[VAR_3].version->type == VAR_1) {
   if (FUNC_1(VAR_2)) {

   } else if (VAR_2->powerplay.pp_funcs &&
        VAR_2->powerplay.pp_funcs->set_mp1_state) {
    VAR_4 = VAR_2->powerplay.pp_funcs->set_mp1_state(
     VAR_2->powerplay.pp_handle,
     VAR_2->mp1_state);
    if (VAR_4) {
     FUNC_0("SMC failed to set mp1 state %d, %d\n",
        VAR_2->mp1_state, VAR_4);
     return VAR_4;
    }
   }
  }

  VAR_2->ip_blocks[VAR_3].status.hw = 0;
 }

 return 0;
}
