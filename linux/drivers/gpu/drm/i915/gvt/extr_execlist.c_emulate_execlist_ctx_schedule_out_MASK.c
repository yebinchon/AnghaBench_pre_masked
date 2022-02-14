
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_vgpu_execlist_slot {struct execlist_ctx_descriptor_format* ctx; } ;
struct intel_vgpu_execlist {struct execlist_ctx_descriptor_format* running_context; struct intel_vgpu_execlist_slot* pending_slot; struct intel_vgpu_execlist_slot* running_slot; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int dummy; } ;
struct execlist_ctx_descriptor_format {scalar_t__ context_id; } ;
struct execlist_context_status_format {int context_complete; int element_switch; int active_to_idle; int idle_to_active; scalar_t__ context_id; } ;
typedef int status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct intel_vgpu_execlist*,struct execlist_context_status_format*,int) ;
 int FUNC_2 (struct intel_vgpu_execlist*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct execlist_context_status_format*,int ,int) ;
 scalar_t__ FUNC_6 (struct execlist_ctx_descriptor_format*,struct execlist_ctx_descriptor_format*) ;
 int FUNC_7 (struct intel_vgpu_execlist*) ;
 scalar_t__ FUNC_8 (struct execlist_ctx_descriptor_format*) ;

__attribute__((used)) static int FUNC_9(
  struct intel_vgpu_execlist *VAR_1,
  struct execlist_ctx_descriptor_format *VAR_2)
{
 struct intel_vgpu *VAR_3 = VAR_1->vgpu;
 struct intel_vgpu_execlist_slot *VAR_4 = VAR_1->running_slot;
 struct intel_vgpu_execlist_slot *VAR_5 = VAR_1->pending_slot;
 struct execlist_ctx_descriptor_format *VAR_6 = &VAR_4->ctx[0];
 struct execlist_ctx_descriptor_format *VAR_7 = &VAR_4->ctx[1];
 struct execlist_context_status_format VAR_8;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));

 FUNC_3("schedule out context id %x\n", VAR_2->context_id);

 if (FUNC_0(!FUNC_6(VAR_2, VAR_1->running_context))) {
  FUNC_4("schedule out context is not running context,"
    "ctx id %x running ctx id %x\n",
    VAR_2->context_id,
    VAR_1->running_context->context_id);
  return -VAR_0;
 }


 if (FUNC_8(VAR_7) && FUNC_6(VAR_6, VAR_2)) {
  FUNC_3("ctx 1 valid, ctx/ctx 0 is scheduled-out\n");

  VAR_1->running_context = VAR_7;

  FUNC_2(VAR_1);

  VAR_8.context_complete = VAR_8.element_switch = 1;
  VAR_8.context_id = VAR_2->context_id;

  FUNC_1(VAR_1, &VAR_8, 0);
 } else if ((!FUNC_8(VAR_7) && FUNC_6(VAR_6, VAR_2))
   || (FUNC_8(VAR_7) && FUNC_6(VAR_7, VAR_2))) {
  FUNC_3("need to switch virtual execlist slot\n");

  FUNC_7(VAR_1);

  FUNC_2(VAR_1);

  VAR_8.context_complete = VAR_8.active_to_idle = 1;
  VAR_8.context_id = VAR_2->context_id;

  if (!VAR_5) {
   FUNC_1(VAR_1, &VAR_8, 0);
  } else {
   FUNC_1(VAR_1, &VAR_8, 1);

   FUNC_5(&VAR_8, 0, sizeof(VAR_8));

   VAR_8.idle_to_active = 1;
   VAR_8.context_id = 0;

   FUNC_1(VAR_1, &VAR_8, 0);
  }
 } else {
  FUNC_0(1);
  return -VAR_0;
 }

 return 0;
}
