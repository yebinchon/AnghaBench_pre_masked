
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_request {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i915_request const*) ;
 scalar_t__ FUNC_2 (struct i915_request const*) ;
 int FUNC_3 (struct i915_request const*) ;

__attribute__((used)) static int FUNC_4(const struct i915_request *VAR_4)
{
 int VAR_5 = FUNC_3(VAR_4);
 if (FUNC_2(VAR_4))
  VAR_5 = VAR_2;







 if (FUNC_1(VAR_4))
  VAR_5 |= VAR_1;


 FUNC_0(VAR_3 & ~VAR_0);
 return VAR_5 | VAR_3;
}
