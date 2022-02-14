
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct parser_exec_state {scalar_t__ buf_type; scalar_t__ buf_addr_type; int * ip_va; int ring_id; int ip_gma; int ring_tail; int ring_head; scalar_t__ ring_size; scalar_t__ ring_start; TYPE_1__* vgpu; } ;
struct TYPE_2__ {int id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct parser_exec_state*,int) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct parser_exec_state *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;

 FUNC_1("  vgpu%d RING%d: ring_start(%08lx) ring_end(%08lx)"
   " ring_head(%08lx) ring_tail(%08lx)\n", VAR_2->vgpu->id,
   VAR_2->ring_id, VAR_2->ring_start, VAR_2->ring_start + VAR_2->ring_size,
   VAR_2->ring_head, VAR_2->ring_tail);

 FUNC_1("  %s %s ip_gma(%08lx) ",
   VAR_2->buf_type == VAR_1 ?
   "RING_BUFFER" : "BATCH_BUFFER",
   VAR_2->buf_addr_type == VAR_0 ?
   "GTT" : "PPGTT", VAR_2->ip_gma);

 if (VAR_2->ip_va == ((void*)0)) {
  FUNC_1(" ip_va(NULL)");
  return;
 }

 FUNC_1("  ip_va=%p: %08x %08x %08x %08x\n",
   VAR_2->ip_va, FUNC_0(VAR_2, 0), FUNC_0(VAR_2, 1),
   FUNC_0(VAR_2, 2), FUNC_0(VAR_2, 3));

 FUNC_2(FUNC_0(VAR_2, 0), VAR_2->ring_id);

 VAR_2->ip_va = (u32 *)((((u64)VAR_2->ip_va) >> 12) << 12);

 while (VAR_3 < 1024) {
  FUNC_1("ip_va=%p: ", VAR_2->ip_va);
  for (VAR_4 = 0; VAR_4 < 8; VAR_4++)
   FUNC_1("%08x ", FUNC_0(VAR_2, VAR_4));
  FUNC_1("\n");

  VAR_2->ip_va += 8 * sizeof(u32);
  VAR_3 += 8;
 }
}
