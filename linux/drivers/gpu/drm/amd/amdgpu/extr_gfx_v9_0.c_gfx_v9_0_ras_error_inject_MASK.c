
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ta_ras_trigger_error_input {int value; int address; int inject_error_type; int sub_block_index; int block_id; int member_0; } ;
struct TYPE_4__ {size_t sub_block_index; int type; int block; } ;
struct ras_inject_if {int value; int address; TYPE_1__ head; } ;
struct amdgpu_device {scalar_t__ asic_type; int grbm_idx_mutex; int psp; } ;
struct TYPE_5__ {int hw_supported_error_type; int sw_supported_error_type; int ta_subblock; int name; } ;


 size_t FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct ta_ras_trigger_error_input*) ;
 TYPE_2__* VAR_3 ;

__attribute__((used)) static int FUNC_7(struct amdgpu_device *VAR_4,
         void *VAR_5)
{
 struct ras_inject_if *VAR_6 = (struct ras_inject_if *)VAR_5;
 int VAR_7;
 struct ta_ras_trigger_error_input VAR_8 = { 0 };

 if (VAR_4->asic_type != VAR_0)
  return -VAR_1;

 if (VAR_6->head.sub_block_index >= FUNC_0(VAR_3))
  return -VAR_1;

 if (!VAR_3[VAR_6->head.sub_block_index].name)
  return -VAR_2;

 if (!(VAR_3[VAR_6->head.sub_block_index].hw_supported_error_type &
       VAR_6->head.type)) {
  FUNC_1("GFX Subblock %s, hardware do not support type 0x%x\n",
   VAR_3[VAR_6->head.sub_block_index].name,
   VAR_6->head.type);
  return -VAR_2;
 }

 if (!(VAR_3[VAR_6->head.sub_block_index].sw_supported_error_type &
       VAR_6->head.type)) {
  FUNC_1("GFX Subblock %s, driver do not support type 0x%x\n",
   VAR_3[VAR_6->head.sub_block_index].name,
   VAR_6->head.type);
  return -VAR_2;
 }

 VAR_8.block_id = FUNC_2(VAR_6->head.block);
 VAR_8.sub_block_index =
  VAR_3[VAR_6->head.sub_block_index].ta_subblock;
 VAR_8.inject_error_type = FUNC_3(VAR_6->head.type);
 VAR_8.address = VAR_6->address;
 VAR_8.value = VAR_6->value;

 FUNC_4(&VAR_4->grbm_idx_mutex);
 VAR_7 = FUNC_6(&VAR_4->psp, &VAR_8);
 FUNC_5(&VAR_4->grbm_idx_mutex);

 return VAR_7;
}
