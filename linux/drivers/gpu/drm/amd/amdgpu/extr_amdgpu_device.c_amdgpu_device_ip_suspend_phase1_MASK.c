
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
struct TYPE_5__ {int (* suspend ) (struct amdgpu_device*) ;int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct amdgpu_device*,int ) ;
 int FUNC_2 (struct amdgpu_device*,int ) ;
 int FUNC_3 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_2(VAR_3, VAR_2);
 FUNC_1(VAR_3, VAR_0);

 for (VAR_4 = VAR_3->num_ip_blocks - 1; VAR_4 >= 0; VAR_4--) {
  if (!VAR_3->ip_blocks[VAR_4].status.valid)
   continue;

  if (VAR_3->ip_blocks[VAR_4].version->type == VAR_1) {

   VAR_5 = VAR_3->ip_blocks[VAR_4].version->funcs->suspend(VAR_3);

   if (VAR_5) {
    FUNC_0("suspend of IP block <%s> failed %d\n",
       VAR_3->ip_blocks[VAR_4].version->funcs->name, VAR_5);
    return VAR_5;
   }
   VAR_3->ip_blocks[VAR_4].status.hw = 0;
  }
 }

 return 0;
}
