
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct i915_vma {int dummy; } ;
struct TYPE_8__ {int format_size; int head; unsigned int aged_tail_idx; scalar_t__ aging_timestamp; int ptr_lock; TYPE_3__* tails; struct i915_vma* vma; } ;
struct i915_perf_stream {TYPE_4__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct TYPE_5__ {int (* oa_hw_tail_read ) (struct i915_perf_stream*) ;} ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct drm_i915_private {TYPE_2__ perf; } ;
struct TYPE_7__ {int offset; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct i915_vma*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct i915_perf_stream*) ;

__attribute__((used)) static bool FUNC_7(struct i915_perf_stream *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->dev_priv;
 int VAR_5 = VAR_3->oa_buffer.format_size;
 unsigned long VAR_6;
 unsigned int VAR_7;
 u32 VAR_8, VAR_9, VAR_10, VAR_11;
 u64 VAR_12;





 FUNC_4(&VAR_3->oa_buffer.ptr_lock, VAR_6);





 VAR_8 = VAR_3->oa_buffer.head;

 VAR_7 = VAR_3->oa_buffer.aged_tail_idx;
 VAR_10 = VAR_3->oa_buffer.tails[VAR_7].offset;
 VAR_11 = VAR_3->oa_buffer.tails[!VAR_7].offset;

 VAR_9 = VAR_4->perf.ops.oa_hw_tail_read(VAR_3);




 VAR_9 &= ~(VAR_5 - 1);

 VAR_12 = FUNC_3();
 if (VAR_11 != VAR_0 &&
     ((VAR_12 - VAR_3->oa_buffer.aging_timestamp) >
      VAR_2)) {

  VAR_7 ^= 1;
  VAR_3->oa_buffer.aged_tail_idx = VAR_7;

  VAR_10 = VAR_11;


  VAR_3->oa_buffer.tails[!VAR_7].offset = VAR_0;
  VAR_11 = VAR_0;
 }
 if (VAR_11 == VAR_0 &&
     (VAR_10 == VAR_0 ||
      FUNC_1(VAR_9, VAR_10) >= VAR_5)) {
  struct i915_vma *VAR_13 = VAR_3->oa_buffer.vma;
  u32 VAR_14 = FUNC_2(VAR_13);





  if (VAR_9 >= VAR_14 &&
      VAR_9 < (VAR_14 + VAR_1)) {
   VAR_3->oa_buffer.tails[!VAR_7].offset =
    VAR_11 = VAR_9;
   VAR_3->oa_buffer.aging_timestamp = VAR_12;
  } else {
   FUNC_0("Ignoring spurious out of range OA buffer tail pointer = %u\n",
      VAR_9);
  }
 }

 FUNC_5(&VAR_3->oa_buffer.ptr_lock, VAR_6);

 return VAR_10 == VAR_0 ?
  0 : FUNC_1(VAR_10, VAR_8) >= VAR_5;
}
