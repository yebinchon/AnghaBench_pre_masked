
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct request_wait {int cb; int tsk; } ;
struct i915_request {TYPE_4__* engine; int fence; int i915; } ;
struct TYPE_8__ {TYPE_3__* gt; } ;
struct TYPE_5__ {int dep_map; } ;
struct TYPE_6__ {TYPE_1__ mutex; } ;
struct TYPE_7__ {TYPE_2__ reset; } ;


 scalar_t__ VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct i915_request*,int const,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_4 (int *,int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct i915_request*) ;
 scalar_t__ FUNC_9 (struct i915_request*) ;
 int FUNC_10 (struct i915_request*) ;
 int FUNC_11 (struct i915_request*,int ) ;
 long FUNC_12 (long) ;
 int FUNC_13 () ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *,int ,int ) ;
 int VAR_11 ;
 int FUNC_16 (int const) ;
 scalar_t__ FUNC_17 (int const,int ) ;
 int FUNC_18 (struct i915_request*,unsigned int) ;
 int FUNC_19 (struct i915_request*) ;

long FUNC_20(struct i915_request *VAR_12,
         unsigned int VAR_13,
         long VAR_14)
{
 const int VAR_15 = VAR_13 & VAR_4 ?
  VAR_6 : VAR_8;
 struct request_wait VAR_16;

 FUNC_13();
 FUNC_0(VAR_14 < 0);

 if (FUNC_5(&VAR_12->fence))
  return VAR_14;

 if (!VAR_14)
  return -VAR_2;

 FUNC_18(VAR_12, VAR_13);







 FUNC_14(&VAR_12->engine->gt->reset.mutex.dep_map, 0, 0, VAR_9);
 if (VAR_0 &&
     FUNC_2(VAR_12, VAR_15, VAR_0)) {
  FUNC_7(&VAR_12->fence);
  goto out;
 }
 if (VAR_13 & VAR_5) {
  if (!FUNC_10(VAR_12) && FUNC_1(VAR_12->i915) >= 6)
   FUNC_8(VAR_12);
  FUNC_11(VAR_12, VAR_3);
 }

 VAR_16.tsk = VAR_10;
 if (FUNC_4(&VAR_12->fence, &VAR_16.cb, VAR_11))
  goto out;

 for (;;) {
  FUNC_16(VAR_15);

  if (FUNC_9(VAR_12)) {
   FUNC_7(&VAR_12->fence);
   break;
  }

  if (FUNC_17(VAR_15, VAR_10)) {
   VAR_14 = -VAR_1;
   break;
  }

  if (!VAR_14) {
   VAR_14 = -VAR_2;
   break;
  }

  VAR_14 = FUNC_12(VAR_14);
 }
 FUNC_3(VAR_7);

 FUNC_6(&VAR_12->fence, &VAR_16.cb);

out:
 FUNC_15(&VAR_12->engine->gt->reset.mutex.dep_map, 0, VAR_9);
 FUNC_19(VAR_12);
 return VAR_14;
}
