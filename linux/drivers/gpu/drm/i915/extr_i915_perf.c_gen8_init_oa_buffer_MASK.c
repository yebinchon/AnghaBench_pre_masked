
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int head; int vaddr; int ptr_lock; int last_ctx_id; TYPE_1__* tails; int vma; } ;
struct i915_perf_stream {int pollin; TYPE_2__ oa_buffer; struct drm_i915_private* dev_priv; } ;
struct drm_i915_private {int dummy; } ;
struct TYPE_3__ {void* offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct i915_perf_stream *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_11->dev_priv;
 u32 VAR_13 = FUNC_1(VAR_11->oa_buffer.vma);
 unsigned long VAR_14;

 FUNC_3(&VAR_11->oa_buffer.ptr_lock, VAR_14);

 FUNC_0(VAR_4, 0);
 FUNC_0(VAR_3, VAR_13);
 VAR_11->oa_buffer.head = VAR_13;

 FUNC_0(VAR_2, 0);
 FUNC_0(VAR_0, VAR_13 |
     VAR_9 | VAR_1);
 FUNC_0(VAR_5, VAR_13 & VAR_6);


 VAR_11->oa_buffer.tails[0].offset = VAR_8;
 VAR_11->oa_buffer.tails[1].offset = VAR_8;






 VAR_11->oa_buffer.last_ctx_id = VAR_7;

 FUNC_4(&VAR_11->oa_buffer.ptr_lock, VAR_14);
 FUNC_2(VAR_11->oa_buffer.vaddr, 0, VAR_10);





 VAR_11->pollin = 0;
}
