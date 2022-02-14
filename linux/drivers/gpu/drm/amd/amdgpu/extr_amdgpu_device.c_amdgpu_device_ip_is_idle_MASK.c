
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_3__* ip_blocks; } ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_8__ {int (* is_idle ) (void*) ;} ;
struct TYPE_5__ {int valid; } ;
struct TYPE_7__ {TYPE_2__* version; TYPE_1__ status; } ;
struct TYPE_6__ {int type; TYPE_4__* funcs; } ;


 int FUNC_0 (void*) ;

bool FUNC_1(struct amdgpu_device *VAR_0,
         enum amd_ip_block_type VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ip_blocks; VAR_2++) {
  if (!VAR_0->ip_blocks[VAR_2].status.valid)
   continue;
  if (VAR_0->ip_blocks[VAR_2].version->type == VAR_1)
   return VAR_0->ip_blocks[VAR_2].version->funcs->is_idle((void *)VAR_0);
 }
 return 1;

}
