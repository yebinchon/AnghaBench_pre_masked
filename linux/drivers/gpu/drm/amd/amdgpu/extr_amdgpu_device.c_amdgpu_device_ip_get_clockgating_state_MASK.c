
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct amdgpu_device {int num_ip_blocks; TYPE_4__* ip_blocks; } ;
struct TYPE_5__ {int valid; } ;
struct TYPE_8__ {TYPE_3__* version; TYPE_1__ status; } ;
struct TYPE_7__ {TYPE_2__* funcs; } ;
struct TYPE_6__ {int (* get_clockgating_state ) (void*,int *) ;} ;


 int FUNC_0 (void*,int *) ;

void FUNC_1(struct amdgpu_device *VAR_0,
         u32 *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_ip_blocks; VAR_2++) {
  if (!VAR_0->ip_blocks[VAR_2].status.valid)
   continue;
  if (VAR_0->ip_blocks[VAR_2].version->funcs->get_clockgating_state)
   VAR_0->ip_blocks[VAR_2].version->funcs->get_clockgating_state((void *)VAR_0, VAR_1);
 }
}
