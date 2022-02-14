
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_4__* ip_blocks; } ;
struct TYPE_5__ {scalar_t__ hang; int valid; } ;
struct TYPE_8__ {TYPE_3__* version; TYPE_1__ status; } ;
struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_6__ {int name; scalar_t__ (* check_soft_reset ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (struct amdgpu_device*) ;
 scalar_t__ FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static bool FUNC_4(struct amdgpu_device *VAR_0)
{
 int VAR_1;
 bool VAR_2 = 0;

 if (FUNC_2(VAR_0))
  return 1;

 if (FUNC_1(VAR_0))
  return 1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ip_blocks; VAR_1++) {
  if (!VAR_0->ip_blocks[VAR_1].status.valid)
   continue;
  if (VAR_0->ip_blocks[VAR_1].version->funcs->check_soft_reset)
   VAR_0->ip_blocks[VAR_1].status.hang =
    VAR_0->ip_blocks[VAR_1].version->funcs->check_soft_reset(VAR_0);
  if (VAR_0->ip_blocks[VAR_1].status.hang) {
   FUNC_0("IP block:%s is hung!\n", VAR_0->ip_blocks[VAR_1].version->funcs->name);
   VAR_2 = 1;
  }
 }
 return VAR_2;
}
