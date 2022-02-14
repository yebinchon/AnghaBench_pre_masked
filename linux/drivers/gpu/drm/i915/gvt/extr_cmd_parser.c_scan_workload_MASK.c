
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser_exec_state {int ring_id; void* ring_start; unsigned long ring_head; unsigned long ring_tail; int is_ctx_wa; struct intel_vgpu_workload* workload; int rb_va; void* ring_size; int vgpu; int buf_addr_type; int buf_type; } ;
struct intel_vgpu_workload {unsigned long rb_start; unsigned long rb_head; unsigned long rb_tail; int ring_id; int rb_ctl; int shadow_ring_buffer_va; int vgpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned long,int ) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (struct parser_exec_state*,unsigned long,unsigned long,void*,void*) ;
 int FUNC_4 (struct parser_exec_state*,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct intel_vgpu_workload *VAR_5)
{
 unsigned long VAR_6, VAR_7, VAR_8;
 struct parser_exec_state VAR_9;
 int VAR_10 = 0;


 if (FUNC_1(!FUNC_0(VAR_5->rb_start, VAR_2)))
  return -VAR_0;

 VAR_6 = VAR_5->rb_start + VAR_5->rb_head;
 VAR_7 = VAR_5->rb_start + VAR_5->rb_tail;
 VAR_8 = VAR_5->rb_start + FUNC_2(VAR_5->rb_ctl);

 VAR_9.buf_type = VAR_3;
 VAR_9.buf_addr_type = VAR_1;
 VAR_9.vgpu = VAR_5->vgpu;
 VAR_9.ring_id = VAR_5->ring_id;
 VAR_9.ring_start = VAR_5->rb_start;
 VAR_9.ring_size = FUNC_2(VAR_5->rb_ctl);
 VAR_9.ring_head = VAR_6;
 VAR_9.ring_tail = VAR_7;
 VAR_9.rb_va = VAR_5->shadow_ring_buffer_va;
 VAR_9.workload = VAR_5;
 VAR_9.is_ctx_wa = 0;

 if ((VAR_4 & (1 << VAR_5->ring_id)) ||
  VAR_6 == VAR_7)
  return 0;

 VAR_10 = FUNC_4(&VAR_9, VAR_6);
 if (VAR_10)
  goto out;

 VAR_10 = FUNC_3(&VAR_9, VAR_5->rb_head, VAR_5->rb_tail,
  VAR_5->rb_start, FUNC_2(VAR_5->rb_ctl));

out:
 return VAR_10;
}
