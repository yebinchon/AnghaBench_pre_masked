
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; struct i915_sw_fence* private; int (* func ) (TYPE_1__*,int ,int ,int *) ;int entry; } ;
typedef TYPE_1__ wait_queue_entry_t ;
struct TYPE_8__ {int lock; } ;
struct i915_sw_fence {TYPE_5__ wait; int error; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*,TYPE_1__*) ;
 int FUNC_2 (struct i915_sw_fence*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct i915_sw_fence*) ;
 int FUNC_5 (struct i915_sw_fence*,struct i915_sw_fence*) ;
 scalar_t__ FUNC_6 (struct i915_sw_fence*) ;
 int FUNC_7 (struct i915_sw_fence*,int ) ;
 int FUNC_8 (struct i915_sw_fence*) ;
 int FUNC_9 (TYPE_1__*,int ,int ,int *) ;
 TYPE_1__* FUNC_10 (int,int ) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *,unsigned long) ;
 int FUNC_14 (int *,unsigned long) ;
 scalar_t__ FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct i915_sw_fence *VAR_3,
       struct i915_sw_fence *VAR_4,
       wait_queue_entry_t *VAR_5, gfp_t VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_2(VAR_3);
 FUNC_12(FUNC_3(VAR_6));

 if (FUNC_6(VAR_4)) {
  FUNC_7(VAR_3, VAR_4->error);
  return 0;
 }

 FUNC_2(VAR_4);


 if (FUNC_15(FUNC_5(VAR_3, VAR_4)))
  return -VAR_0;

 VAR_8 = 0;
 if (!VAR_5) {
  VAR_5 = FUNC_10(sizeof(*VAR_5), VAR_6);
  if (!VAR_5) {
   if (!FUNC_3(VAR_6))
    return -VAR_1;

   FUNC_8(VAR_4);
   FUNC_7(VAR_3, VAR_4->error);
   return 0;
  }

  VAR_8 |= VAR_2;
 }

 FUNC_0(&VAR_5->entry);
 VAR_5->flags = VAR_8;
 VAR_5->func = FUNC_9;
 VAR_5->private = VAR_3;

 FUNC_4(VAR_3);

 FUNC_13(&VAR_4->wait.lock, VAR_7);
 if (FUNC_11(!FUNC_6(VAR_4))) {
  FUNC_1(&VAR_4->wait, VAR_5);
  VAR_8 = 1;
 } else {
  FUNC_9(VAR_5, 0, VAR_4->error, ((void*)0));
  VAR_8 = 0;
 }
 FUNC_14(&VAR_4->wait.lock, VAR_7);

 return VAR_8;
}
