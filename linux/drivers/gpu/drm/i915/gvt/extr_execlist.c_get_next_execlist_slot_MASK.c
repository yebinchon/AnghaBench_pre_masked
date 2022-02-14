
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_vgpu_execlist_slot {int dummy; } ;
struct intel_vgpu_execlist {int ring_id; struct intel_vgpu_execlist_slot* slot; struct intel_vgpu* vgpu; } ;
struct intel_vgpu {int gvt; } ;
struct execlist_status_format {size_t execlist_write_pointer; scalar_t__ execlist_queue_full; void* udw; void* ldw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int,int ) ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (struct intel_vgpu*,scalar_t__) ;

__attribute__((used)) static struct intel_vgpu_execlist_slot *FUNC_3(
  struct intel_vgpu_execlist *VAR_1)
{
 struct intel_vgpu *VAR_2 = VAR_1->vgpu;
 int VAR_3 = VAR_1->ring_id;
 u32 VAR_4 = FUNC_0(VAR_2->gvt, VAR_3,
   VAR_0);
 struct execlist_status_format VAR_5;

 VAR_5.ldw = FUNC_2(VAR_2, VAR_4);
 VAR_5.udw = FUNC_2(VAR_2, VAR_4 + 4);

 if (VAR_5.execlist_queue_full) {
  FUNC_1("virtual execlist slots are full\n");
  return ((void*)0);
 }

 return &VAR_1->slot[VAR_5.execlist_write_pointer];
}
