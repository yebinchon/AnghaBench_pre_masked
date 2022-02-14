
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int finish; int reset; int prepare; } ;
struct TYPE_3__ {void* addr; } ;
struct intel_engine_cs {int id; int instance; int cancel_requests; TYPE_2__ reset; int submit_request; int emit_fini_breadcrumb; int emit_flush; int request_alloc; int * cops; TYPE_1__ status_page; int mask; int name; int * gt; struct drm_i915_private* i915; } ;
struct mock_engine {struct intel_engine_cs base; int hw_queue; int hw_delay; int hw_lock; } ;
struct drm_i915_private {int gt; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct intel_engine_cs*) ;
 struct mock_engine* FUNC_4 (scalar_t__,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (int ,int,char*,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int ) ;

struct intel_engine_cs *FUNC_8(struct drm_i915_private *VAR_13,
        const char *VAR_14,
        int VAR_15)
{
 struct mock_engine *VAR_16;

 FUNC_1(VAR_15 >= VAR_1);

 VAR_16 = FUNC_4(sizeof(*VAR_16) + VAR_2, VAR_0);
 if (!VAR_16)
  return ((void*)0);


 VAR_16->base.i915 = VAR_13;
 VAR_16->base.gt = &VAR_13->gt;
 FUNC_5(VAR_16->base.name, sizeof(VAR_16->base.name), "%s", VAR_14);
 VAR_16->base.id = VAR_15;
 VAR_16->base.mask = FUNC_0(VAR_15);
 VAR_16->base.instance = VAR_15;
 VAR_16->base.status_page.addr = (void *)(VAR_16 + 1);

 VAR_16->base.cops = &VAR_5;
 VAR_16->base.request_alloc = VAR_8;
 VAR_16->base.emit_flush = VAR_7;
 VAR_16->base.emit_fini_breadcrumb = VAR_6;
 VAR_16->base.submit_request = VAR_12;

 VAR_16->base.reset.prepare = VAR_11;
 VAR_16->base.reset.reset = VAR_9;
 VAR_16->base.reset.finish = VAR_10;
 VAR_16->base.cancel_requests = VAR_4;


 FUNC_6(&VAR_16->hw_lock);
 FUNC_7(&VAR_16->hw_delay, VAR_3, 0);
 FUNC_2(&VAR_16->hw_queue);

 FUNC_3(&VAR_16->base);

 return &VAR_16->base;
}
