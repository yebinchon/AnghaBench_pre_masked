
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_request {int engine; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 *FUNC_1(struct i915_request *VAR_4, u32 *VAR_5)
{
 *VAR_5++ = VAR_3 |
  VAR_0 |
  VAR_1 |
  VAR_2;
 *VAR_5++ = 0;
 *VAR_5++ = FUNC_0(VAR_4->engine);
 *VAR_5++ = 0;

 return VAR_5;
}
