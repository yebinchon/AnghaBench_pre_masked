
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct i915_sw_fence {int dummy; } ;
struct TYPE_6__ {int fence; } ;
struct i915_sw_dma_fence_cb_timer {TYPE_3__* dma; TYPE_2__ base; } ;
struct TYPE_7__ {int seqno; TYPE_1__* ops; } ;
struct TYPE_5__ {int (* get_timeline_name ) (TYPE_3__*) ;int (* get_driver_name ) (TYPE_3__*) ;} ;


 int VAR_0 ;
 struct i915_sw_dma_fence_cb_timer* VAR_1 ;
 struct i915_sw_dma_fence_cb_timer* FUNC_0 (int ,struct timer_list*,int ) ;
 int FUNC_1 (struct i915_sw_fence*) ;
 int FUNC_2 (struct i915_sw_fence*) ;
 int FUNC_3 (struct i915_sw_fence*,int ) ;
 int FUNC_4 (char*,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int VAR_2 ;
 struct i915_sw_fence* FUNC_7 (int *,int *) ;

__attribute__((used)) static void FUNC_8(struct timer_list *VAR_3)
{
 struct i915_sw_dma_fence_cb_timer *VAR_4 = FUNC_0(VAR_4, VAR_3, VAR_2);
 struct i915_sw_fence *VAR_5;

 VAR_5 = FUNC_7(&VAR_4->base.fence, ((void*)0));
 if (!VAR_5)
  return;

 FUNC_4("Asynchronous wait on fence %s:%s:%llx timed out (hint:%pS)\n",
    VAR_4->dma->ops->get_driver_name(VAR_4->dma),
    VAR_4->dma->ops->get_timeline_name(VAR_4->dma),
    VAR_4->dma->seqno,
    FUNC_2(VAR_5));

 FUNC_3(VAR_5, -VAR_0);
 FUNC_1(VAR_5);
}
