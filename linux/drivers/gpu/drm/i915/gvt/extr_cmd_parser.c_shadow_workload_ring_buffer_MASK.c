
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_vgpu_workload {int ring_id; unsigned long rb_len; unsigned long rb_tail; unsigned long rb_head; unsigned long rb_start; void* shadow_ring_buffer_va; int rb_ctl; struct intel_vgpu* vgpu; } ;
struct intel_vgpu_submission {unsigned long* ring_scan_buffer_size; void** ring_scan_buffer; } ;
struct TYPE_2__ {int ggtt_mm; } ;
struct intel_vgpu {TYPE_1__ gtt; struct intel_vgpu_submission submission; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct intel_vgpu*,int ,unsigned long,unsigned long,void*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (void*,unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct intel_vgpu_workload *VAR_2)
{
 struct intel_vgpu *VAR_3 = VAR_2->vgpu;
 struct intel_vgpu_submission *VAR_4 = &VAR_3->submission;
 unsigned long VAR_5, VAR_6, VAR_7, VAR_8;
 void *VAR_9;
 int VAR_10 = VAR_2->ring_id;
 int VAR_11;

 VAR_8 = FUNC_0(VAR_2->rb_ctl);


 VAR_2->rb_len = (VAR_2->rb_tail + VAR_8 -
   VAR_2->rb_head) % VAR_8;

 VAR_5 = VAR_2->rb_start + VAR_2->rb_head;
 VAR_6 = VAR_2->rb_start + VAR_2->rb_tail;
 VAR_7 = VAR_2->rb_start + VAR_8;

 if (VAR_2->rb_len > VAR_4->ring_scan_buffer_size[VAR_10]) {
  void *VAR_12;


  VAR_12 = FUNC_3(VAR_4->ring_scan_buffer[VAR_10], VAR_2->rb_len,
    VAR_1);
  if (!VAR_12) {
   FUNC_2("fail to re-alloc ring scan buffer\n");
   return -VAR_0;
  }
  VAR_4->ring_scan_buffer[VAR_10] = VAR_12;
  VAR_4->ring_scan_buffer_size[VAR_10] = VAR_2->rb_len;
 }

 VAR_9 = VAR_4->ring_scan_buffer[VAR_10];


 VAR_2->shadow_ring_buffer_va = VAR_9;


 if (VAR_5 > VAR_6) {
  VAR_11 = FUNC_1(VAR_3, VAR_3->gtt.ggtt_mm,
          VAR_5, VAR_7, VAR_9);
  if (VAR_11 < 0) {
   FUNC_2("fail to copy guest ring buffer\n");
   return VAR_11;
  }
  VAR_9 += VAR_11;
  VAR_5 = VAR_2->rb_start;
 }


 VAR_11 = FUNC_1(VAR_3, VAR_3->gtt.ggtt_mm, VAR_5, VAR_6,
    VAR_9);
 if (VAR_11 < 0) {
  FUNC_2("fail to copy guest ring buffer\n");
  return VAR_11;
 }
 return 0;
}
