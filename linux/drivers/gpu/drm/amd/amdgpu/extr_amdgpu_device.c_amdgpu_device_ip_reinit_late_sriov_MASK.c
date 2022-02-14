
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int hw; int valid; } ;
struct amdgpu_ip_block {TYPE_3__ status; TYPE_2__* version; } ;
struct amdgpu_device {int num_ip_blocks; struct amdgpu_ip_block* ip_blocks; } ;
typedef enum amd_ip_block_type { ____Placeholder_amd_ip_block_type } amd_ip_block_type ;
struct TYPE_5__ {int type; TYPE_1__* funcs; } ;
struct TYPE_4__ {int (* hw_init ) (struct amdgpu_device*) ;int name; } ;
 int FUNC_0 (int*) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;

 static enum amd_ip_block_type VAR_3[] = {
  130,
  133,
  132,
  131,
  129,
  128
 };

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_3); VAR_1++) {
  int VAR_4;
  struct amdgpu_ip_block *VAR_5;

  for (VAR_4 = 0; VAR_4 < VAR_0->num_ip_blocks; VAR_4++) {
   VAR_5 = &VAR_0->ip_blocks[VAR_4];

   if (VAR_5->version->type != VAR_3[VAR_1] ||
    !VAR_5->status.valid ||
    VAR_5->status.hw)
    continue;

   VAR_2 = VAR_5->version->funcs->hw_init(VAR_0);
   FUNC_1("RE-INIT-late: %s %s\n", VAR_5->version->funcs->name, VAR_2?"failed":"succeeded");
   if (VAR_2)
    return VAR_2;
   VAR_5->status.hw = 1;
  }
 }

 return 0;
}
