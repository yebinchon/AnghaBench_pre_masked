
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_4__* ip_blocks; } ;
struct TYPE_7__ {int hw; int valid; } ;
struct TYPE_8__ {TYPE_3__ status; TYPE_2__* version; } ;
struct TYPE_6__ {scalar_t__ type; TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* resume ) (struct amdgpu_device*) ;int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4->num_ip_blocks; VAR_5++) {
  if (!VAR_4->ip_blocks[VAR_5].status.valid || VAR_4->ip_blocks[VAR_5].status.hw)
   continue;
  if (VAR_4->ip_blocks[VAR_5].version->type == VAR_0 ||
      VAR_4->ip_blocks[VAR_5].version->type == VAR_1 ||
      VAR_4->ip_blocks[VAR_5].version->type == VAR_2 ||
      VAR_4->ip_blocks[VAR_5].version->type == VAR_3)
   continue;
  VAR_6 = VAR_4->ip_blocks[VAR_5].version->funcs->resume(VAR_4);
  if (VAR_6) {
   FUNC_0("resume of IP block <%s> failed %d\n",
      VAR_4->ip_blocks[VAR_5].version->funcs->name, VAR_6);
   return VAR_6;
  }
  VAR_4->ip_blocks[VAR_5].status.hw = 1;
 }

 return 0;
}
