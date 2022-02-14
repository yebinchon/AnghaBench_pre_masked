
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_3__* ip_blocks; } ;
struct TYPE_8__ {scalar_t__ hang; int valid; } ;
struct TYPE_7__ {TYPE_2__* version; TYPE_4__ status; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* soft_reset ) (struct amdgpu_device*) ;} ;


 int FUNC_0 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ip_blocks; VAR_1++) {
  if (!VAR_0->ip_blocks[VAR_1].status.valid)
   continue;
  if (VAR_0->ip_blocks[VAR_1].status.hang &&
      VAR_0->ip_blocks[VAR_1].version->funcs->soft_reset) {
   VAR_2 = VAR_0->ip_blocks[VAR_1].version->funcs->soft_reset(VAR_0);
   if (VAR_2)
    return VAR_2;
  }
 }

 return 0;
}
