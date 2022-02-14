
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct intel_context {int flags; } ;
struct TYPE_8__ {int tasklet; int queue_priority_hint; } ;
struct TYPE_12__ {int id; scalar_t__ class; int mask; int flags; int emit_fini_breadcrumb_dw; int emit_fini_breadcrumb; int emit_init_breadcrumb; int emit_flush; int emit_bb_start; int context_size; int name; int uabi_class; TYPE_1__ execlists; int bond_execute; int submit_request; int schedule; int request_alloc; int * cops; int saturated; int instance; int gt; int i915; } ;
struct virtual_engine {struct intel_context context; TYPE_5__ base; int num_siblings; struct intel_engine_cs** siblings; TYPE_4__* nodes; } ;
struct TYPE_9__ {scalar_t__ func; } ;
struct TYPE_10__ {TYPE_2__ tasklet; } ;
struct intel_engine_cs {int mask; size_t id; scalar_t__ class; int flags; int emit_fini_breadcrumb_dw; int emit_fini_breadcrumb; int emit_init_breadcrumb; int emit_flush; int emit_bb_start; int context_size; int uabi_class; TYPE_3__ execlists; int name; int gt; } ;
struct i915_gem_context {int i915; } ;
struct TYPE_11__ {int rb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct intel_context* FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct intel_context*,struct intel_engine_cs*) ;
 int FUNC_7 (int ,int *) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 struct intel_context* FUNC_8 (struct i915_gem_context*,struct intel_engine_cs*) ;
 int FUNC_9 (struct intel_context*,struct i915_gem_context*,TYPE_5__*) ;
 int FUNC_10 (struct intel_context*) ;
 int FUNC_11 (TYPE_5__*,int ) ;
 int FUNC_12 (TYPE_5__*) ;
 int FUNC_13 (int) ;
 struct virtual_engine* FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,int,char*,...) ;
 int FUNC_16 (struct virtual_engine*,struct intel_engine_cs**,unsigned int) ;
 int FUNC_17 (int *,int ,unsigned long) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_18 (struct virtual_engine*) ;
 int VAR_17 ;
 int VAR_18 ;

struct intel_context *
FUNC_19(struct i915_gem_context *VAR_19,
          struct intel_engine_cs **VAR_20,
          unsigned int VAR_21)
{
 struct virtual_engine *VAR_22;
 unsigned int VAR_23;
 int VAR_24;

 if (VAR_21 == 0)
  return FUNC_1(-VAR_2);

 if (VAR_21 == 1)
  return FUNC_8(VAR_19, VAR_20[0]);

 VAR_22 = FUNC_14(FUNC_16(VAR_22, VAR_20, VAR_21), VAR_6);
 if (!VAR_22)
  return FUNC_1(-VAR_5);

 VAR_22->base.i915 = VAR_19->i915;
 VAR_22->base.gt = VAR_20[0]->gt;
 VAR_22->base.id = -1;
 VAR_22->base.class = VAR_11;
 VAR_22->base.uabi_class = VAR_7;
 VAR_22->base.instance = VAR_8;
 VAR_22->base.saturated = VAR_0;

 FUNC_15(VAR_22->base.name, sizeof(VAR_22->base.name), "virtual");

 FUNC_11(&VAR_22->base, VAR_3);

 FUNC_12(&VAR_22->base);

 VAR_22->base.cops = &VAR_16;
 VAR_22->base.request_alloc = VAR_12;

 VAR_22->base.schedule = VAR_14;
 VAR_22->base.submit_request = VAR_18;
 VAR_22->base.bond_execute = VAR_15;

 FUNC_3(FUNC_18(VAR_22));
 VAR_22->base.execlists.queue_priority_hint = VAR_10;
 FUNC_17(&VAR_22->base.execlists.tasklet,
       VAR_17,
       (unsigned long)VAR_22);

 FUNC_9(&VAR_22->context, VAR_19, &VAR_22->base);

 for (VAR_23 = 0; VAR_23 < VAR_21; VAR_23++) {
  struct intel_engine_cs *VAR_25 = VAR_20[VAR_23];

  FUNC_2(!FUNC_13(VAR_25->mask));
  if (VAR_25->mask & VAR_22->base.mask) {
   FUNC_0("duplicate %s entry in load balancer\n",
      VAR_25->name);
   VAR_24 = -VAR_2;
   goto err_put;
  }
  if (VAR_25->execlists.tasklet.func !=
      VAR_13) {
   VAR_24 = -VAR_4;
   goto err_put;
  }

  FUNC_2(FUNC_5(&VAR_22->nodes[VAR_25->id].rb));
  FUNC_4(&VAR_22->nodes[VAR_25->id].rb);

  VAR_22->siblings[VAR_22->num_siblings++] = VAR_25;
  VAR_22->base.mask |= VAR_25->mask;
  if (VAR_22->base.class != VAR_11) {
   if (VAR_22->base.class != VAR_25->class) {
    FUNC_0("invalid mixing of engine class, sibling %d, already %d\n",
       VAR_25->class, VAR_22->base.class);
    VAR_24 = -VAR_2;
    goto err_put;
   }
   continue;
  }

  VAR_22->base.class = VAR_25->class;
  VAR_22->base.uabi_class = VAR_25->uabi_class;
  FUNC_15(VAR_22->base.name, sizeof(VAR_22->base.name),
    "v%dx%d", VAR_22->base.class, VAR_21);
  VAR_22->base.context_size = VAR_25->context_size;

  VAR_22->base.emit_bb_start = VAR_25->emit_bb_start;
  VAR_22->base.emit_flush = VAR_25->emit_flush;
  VAR_22->base.emit_init_breadcrumb = VAR_25->emit_init_breadcrumb;
  VAR_22->base.emit_fini_breadcrumb = VAR_25->emit_fini_breadcrumb;
  VAR_22->base.emit_fini_breadcrumb_dw =
   VAR_25->emit_fini_breadcrumb_dw;

  VAR_22->base.flags = VAR_25->flags;
 }

 VAR_22->base.flags |= VAR_9;

 VAR_24 = FUNC_6(&VAR_22->context, VAR_20[0]);
 if (VAR_24)
  goto err_put;

 FUNC_7(VAR_1, &VAR_22->context.flags);

 return &VAR_22->context;

err_put:
 FUNC_10(&VAR_22->context);
 return FUNC_1(VAR_24);
}
