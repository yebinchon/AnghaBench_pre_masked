
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct amdgpu_device {int num_ip_blocks; TYPE_4__* ip_blocks; } ;
struct TYPE_7__ {int hw; int sw; } ;
struct TYPE_8__ {TYPE_3__ status; TYPE_2__* version; } ;
struct TYPE_6__ {TYPE_1__* funcs; } ;
struct TYPE_5__ {int (* hw_init ) (struct amdgpu_device*) ;int name; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_ip_blocks; VAR_1++) {
  if (!VAR_0->ip_blocks[VAR_1].status.sw)
   continue;
  if (VAR_0->ip_blocks[VAR_1].status.hw)
   continue;
  VAR_2 = VAR_0->ip_blocks[VAR_1].version->funcs->hw_init(VAR_0);
  if (VAR_2) {
   FUNC_0("hw_init of IP block <%s> failed %d\n",
      VAR_0->ip_blocks[VAR_1].version->funcs->name, VAR_2);
   return VAR_2;
  }
  VAR_0->ip_blocks[VAR_1].status.hw = 1;
 }

 return 0;
}
