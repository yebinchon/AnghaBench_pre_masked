
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rb_node {struct rb_node* rb_right; struct rb_node* rb_left; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {struct rb_node* rb_node; } ;
struct TYPE_7__ {TYPE_2__ rb_root; } ;
struct i915_priolist {int priority; struct list_head* requests; int used; int node; } ;
struct intel_engine_execlists {int no_priolist; TYPE_3__ queue; struct i915_priolist default_priolist; } ;
struct TYPE_5__ {int lock; } ;
struct intel_engine_cs {TYPE_1__ active; struct intel_engine_execlists execlists; } ;
struct TYPE_8__ {int slab_priorities; } ;


 int FUNC_0 (struct list_head*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct intel_engine_execlists* const) ;
 TYPE_4__ VAR_5 ;
 struct i915_priolist* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_3__*,int) ;
 int FUNC_7 (int *,struct rb_node*,struct rb_node**) ;
 struct i915_priolist* FUNC_8 (struct rb_node*) ;
 scalar_t__ FUNC_9 (int) ;

struct list_head *
FUNC_10(struct intel_engine_cs *VAR_6, int VAR_7)
{
 struct intel_engine_execlists * const VAR_8 = &VAR_6->execlists;
 struct i915_priolist *VAR_9;
 struct rb_node **VAR_10, *VAR_11;
 bool VAR_12 = 1;
 int VAR_13, VAR_14;

 FUNC_5(&VAR_6->active.lock);
 FUNC_3(VAR_8);


 VAR_13 = VAR_1 - (VAR_7 & VAR_2) - 1;
 VAR_7 >>= VAR_4;
 if (FUNC_9(VAR_8->no_priolist))
  VAR_7 = VAR_3;

find_priolist:

 VAR_11 = ((void*)0);
 VAR_10 = &VAR_8->queue.rb_root.rb_node;
 while (*VAR_10) {
  VAR_11 = *VAR_10;
  VAR_9 = FUNC_8(VAR_11);
  if (VAR_7 > VAR_9->priority) {
   VAR_10 = &VAR_11->rb_left;
  } else if (VAR_7 < VAR_9->priority) {
   VAR_10 = &VAR_11->rb_right;
   VAR_12 = 0;
  } else {
   goto out;
  }
 }

 if (VAR_7 == VAR_3) {
  VAR_9 = &VAR_8->default_priolist;
 } else {
  VAR_9 = FUNC_4(VAR_5.slab_priorities, VAR_0);

  if (FUNC_9(!VAR_9)) {
   VAR_7 = VAR_3;
   VAR_8->no_priolist = 1;
   goto find_priolist;
  }
 }

 VAR_9->priority = VAR_7;
 for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_9->requests); VAR_14++)
  FUNC_2(&VAR_9->requests[VAR_14]);
 FUNC_7(&VAR_9->node, VAR_11, VAR_10);
 FUNC_6(&VAR_9->node, &VAR_8->queue, VAR_12);
 VAR_9->used = 0;

out:
 VAR_9->used |= FUNC_1(VAR_13);
 return &VAR_9->requests[VAR_13];
}
