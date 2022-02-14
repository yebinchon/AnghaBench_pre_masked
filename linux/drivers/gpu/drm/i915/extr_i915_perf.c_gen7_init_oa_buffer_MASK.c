
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int head; int vaddr; int ptr_lock; TYPE_1__* tails; int vma; } ;
struct i915_perf_stream {int pollin; TYPE_3__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct TYPE_5__ {scalar_t__ gen7_latched_oastatus1; } ;
struct drm_i915_private {TYPE_2__ perf; } ;
struct TYPE_4__ {void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct i915_perf_stream *VAR_7)
{
 struct drm_i915_private *VAR_8 = VAR_7->dev_priv;
 u32 VAR_9 = FUNC_1(VAR_7->oa_buffer.vma);
 unsigned long VAR_10;

 FUNC_3(&VAR_7->oa_buffer.ptr_lock, VAR_10);




 FUNC_0(VAR_2,
     VAR_9 | VAR_3);
 VAR_7->oa_buffer.head = VAR_9;

 FUNC_0(VAR_0, VAR_9);

 FUNC_0(VAR_1, VAR_9 | VAR_5);


 VAR_7->oa_buffer.tails[0].offset = VAR_4;
 VAR_7->oa_buffer.tails[1].offset = VAR_4;

 FUNC_4(&VAR_7->oa_buffer.ptr_lock, VAR_10);





 VAR_8->perf.gen7_latched_oastatus1 = 0;
 FUNC_2(VAR_7->oa_buffer.vaddr, 0, VAR_6);




 VAR_7->pollin = 0;
}
