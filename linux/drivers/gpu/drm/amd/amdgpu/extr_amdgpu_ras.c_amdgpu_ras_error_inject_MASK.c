
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ta_ras_trigger_error_input {int value; int address; int sub_block_index; int inject_error_type; int block_id; } ;
struct ras_manager {int dummy; } ;
struct TYPE_6__ {int block; int sub_block_index; int type; } ;
struct ras_inject_if {TYPE_3__ head; int value; int address; } ;
struct TYPE_5__ {TYPE_1__* funcs; } ;
struct amdgpu_device {int psp; TYPE_2__ gfx; } ;
struct TYPE_4__ {int (* ras_error_inject ) (struct amdgpu_device*,struct ras_inject_if*) ;} ;





 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct ras_manager* FUNC_4 (struct amdgpu_device*,TYPE_3__*) ;
 int FUNC_5 (int *,struct ta_ras_trigger_error_input*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct amdgpu_device*,struct ras_inject_if*) ;

int FUNC_8(struct amdgpu_device *VAR_1,
  struct ras_inject_if *VAR_2)
{
 struct ras_manager *VAR_3 = FUNC_4(VAR_1, &VAR_2->head);
 struct ta_ras_trigger_error_input VAR_4 = {
  .block_id = FUNC_2(VAR_2->head.block),
  .inject_error_type = FUNC_3(VAR_2->head.type),
  .sub_block_index = VAR_2->head.sub_block_index,
  .address = VAR_2->address,
  .value = VAR_2->value,
 };
 int VAR_5 = 0;

 if (!VAR_3)
  return -VAR_0;

 switch (VAR_2->head.block) {
 case 130:
  if (VAR_1->gfx.funcs->ras_error_inject)
   VAR_5 = VAR_1->gfx.funcs->ras_error_inject(VAR_1, VAR_2);
  else
   VAR_5 = -VAR_0;
  break;
 case 128:
 case 129:
  VAR_5 = FUNC_5(&VAR_1->psp, &VAR_4);
  break;
 default:
  FUNC_1("%s error injection is not supported yet\n",
    FUNC_6(VAR_2->head.block));
  VAR_5 = -VAR_0;
 }

 if (VAR_5)
  FUNC_0("RAS ERROR: inject %s error failed ret %d\n",
    FUNC_6(VAR_2->head.block),
    VAR_5);

 return VAR_5;
}
