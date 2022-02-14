
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_vgpu_execlist {TYPE_2__* pending_slot; TYPE_1__* running_context; TYPE_2__* running_slot; } ;
struct TYPE_4__ {int index; TYPE_1__* ctx; } ;
struct TYPE_3__ {int context_id; } ;


 int FUNC_0 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_1(struct intel_vgpu_execlist *VAR_0)
{
 FUNC_0("[before] running slot %d/context %x pending slot %d\n",
   VAR_0->running_slot ?
   VAR_0->running_slot->index : -1,
   VAR_0->running_context ?
   VAR_0->running_context->context_id : 0,
   VAR_0->pending_slot ?
   VAR_0->pending_slot->index : -1);

 VAR_0->running_slot = VAR_0->pending_slot;
 VAR_0->pending_slot = ((void*)0);
 VAR_0->running_context = VAR_0->running_context ?
  &VAR_0->running_slot->ctx[0] : ((void*)0);

 FUNC_0("[after] running slot %d/context %x pending slot %d\n",
   VAR_0->running_slot ?
   VAR_0->running_slot->index : -1,
   VAR_0->running_context ?
   VAR_0->running_context->context_id : 0,
   VAR_0->pending_slot ?
   VAR_0->pending_slot->index : -1);
}
