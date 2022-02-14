
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct amdgpu_device {scalar_t__ asic_type; int num_ip_blocks; TYPE_4__* ip_blocks; scalar_t__ in_suspend; scalar_t__ in_gpu_reset; } ;
struct TYPE_7__ {int hw; } ;
struct TYPE_8__ {TYPE_3__ status; TYPE_2__* version; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* resume ) (struct amdgpu_device*) ;int (* hw_init ) (struct amdgpu_device*) ;int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,int *) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 uint32_t VAR_5;

 if (VAR_2->asic_type >= VAR_1) {
  for (VAR_4 = 0; VAR_4 < VAR_2->num_ip_blocks; VAR_4++) {
   if (VAR_2->ip_blocks[VAR_4].version->type != VAR_0)
    continue;


   if (VAR_2->ip_blocks[VAR_4].status.hw == 1)
    break;

   if (VAR_2->in_gpu_reset || VAR_2->in_suspend) {
    VAR_3 = VAR_2->ip_blocks[VAR_4].version->funcs->resume(VAR_2);
    if (VAR_3) {
     FUNC_0("resume of IP block <%s> failed %d\n",
         VAR_2->ip_blocks[VAR_4].version->funcs->name, VAR_3);
     return VAR_3;
    }
   } else {
    VAR_3 = VAR_2->ip_blocks[VAR_4].version->funcs->hw_init(VAR_2);
    if (VAR_3) {
     FUNC_0("hw_init of IP block <%s> failed %d\n",
         VAR_2->ip_blocks[VAR_4].version->funcs->name, VAR_3);
     return VAR_3;
    }
   }

   VAR_2->ip_blocks[VAR_4].status.hw = 1;
   break;
  }
 }

 VAR_3 = FUNC_1(VAR_2, &VAR_5);

 return VAR_3;
}
