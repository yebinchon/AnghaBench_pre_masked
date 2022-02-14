
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ip_block {TYPE_1__* version; } ;
struct amdgpu_device {int num_ip_blocks; struct amdgpu_ip_block* ip_blocks; } ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_2__ {int type; } ;



struct amdgpu_ip_block *
FUNC_0(struct amdgpu_device *VAR_0,
         enum amd_ip_block_type VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ip_blocks; VAR_2++)
  if (VAR_0->ip_blocks[VAR_2].version->type == VAR_1)
   return &VAR_0->ip_blocks[VAR_2];

 return ((void*)0);
}
