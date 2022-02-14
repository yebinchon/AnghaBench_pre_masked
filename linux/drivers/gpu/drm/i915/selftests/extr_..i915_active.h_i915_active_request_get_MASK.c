
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mutex {int dummy; } ;
struct i915_request {int dummy; } ;
struct i915_active_request {int dummy; } ;


 int FUNC_0 (struct i915_active_request const*,struct mutex*) ;
 struct i915_request* FUNC_1 (int ) ;

__attribute__((used)) static inline struct i915_request *
FUNC_2(const struct i915_active_request *VAR_0,
   struct mutex *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1));
}
