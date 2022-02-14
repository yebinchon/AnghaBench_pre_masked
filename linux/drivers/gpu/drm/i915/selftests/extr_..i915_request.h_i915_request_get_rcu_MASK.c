
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {int fence; } ;


 int FUNC_0 (int *) ;
 struct i915_request* FUNC_1 (int ) ;

__attribute__((used)) static inline struct i915_request *
FUNC_2(struct i915_request *VAR_0)
{
 return FUNC_1(FUNC_0(&VAR_0->fence));
}
