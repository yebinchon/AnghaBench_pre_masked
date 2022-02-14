
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {int fence; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct i915_request*) ;
 int FUNC_2 (struct i915_request*) ;

__attribute__((used)) static void FUNC_3(struct i915_request *VAR_1)
{
 if (!FUNC_2(VAR_1))
  FUNC_0(&VAR_1->fence, -VAR_0);
 FUNC_1(VAR_1);
}
