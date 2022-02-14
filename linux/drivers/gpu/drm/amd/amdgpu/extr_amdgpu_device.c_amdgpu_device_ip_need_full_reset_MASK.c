
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_3__* ip_blocks; } ;
struct TYPE_5__ {scalar_t__ hang; int valid; } ;
struct TYPE_6__ {TYPE_2__ status; TYPE_1__* version; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static bool FUNC_2(struct amdgpu_device *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_5))
  return 1;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_ip_blocks; VAR_6++) {
  if (!VAR_5->ip_blocks[VAR_6].status.valid)
   continue;
  if ((VAR_5->ip_blocks[VAR_6].version->type == VAR_2) ||
      (VAR_5->ip_blocks[VAR_6].version->type == VAR_4) ||
      (VAR_5->ip_blocks[VAR_6].version->type == VAR_0) ||
      (VAR_5->ip_blocks[VAR_6].version->type == VAR_1) ||
       VAR_5->ip_blocks[VAR_6].version->type == VAR_3) {
   if (VAR_5->ip_blocks[VAR_6].status.hang) {
    FUNC_0("Some block need full reset!\n");
    return 1;
   }
  }
 }
 return 0;
}
