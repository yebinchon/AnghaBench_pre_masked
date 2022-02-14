
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ip_block_version {TYPE_1__* funcs; } ;
struct amdgpu_device {int num_ip_blocks; TYPE_2__* ip_blocks; } ;
struct TYPE_4__ {struct amdgpu_ip_block_version const* version; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;

int FUNC_1(struct amdgpu_device *VAR_1,
          const struct amdgpu_ip_block_version *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 FUNC_0("add ip block number %d <%s>\n", VAR_1->num_ip_blocks,
    VAR_2->funcs->name);

 VAR_1->ip_blocks[VAR_1->num_ip_blocks++].version = VAR_2;

 return 0;
}
