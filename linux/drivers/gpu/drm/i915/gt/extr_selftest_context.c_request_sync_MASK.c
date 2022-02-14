
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_request {TYPE_1__* timeline; } ;
struct TYPE_2__ {int mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_request*) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;
 int FUNC_3 (struct i915_request*) ;
 long FUNC_4 (struct i915_request*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i915_request *VAR_1)
{
 long VAR_2;
 int VAR_3 = 0;

 FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 VAR_2 = FUNC_4(VAR_1, 0, VAR_0 / 10);
 if (VAR_2 < 0) {
  VAR_3 = VAR_2;
 } else {
  FUNC_5(&VAR_1->timeline->mutex);
  FUNC_3(VAR_1);
  FUNC_6(&VAR_1->timeline->mutex);
 }

 FUNC_2(VAR_1);

 return VAR_3;
}
