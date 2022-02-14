
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {scalar_t__ class; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct i915_request*,int*) ;
 int* FUNC_3 (struct i915_request*,int) ;

__attribute__((used)) static int FUNC_4(struct i915_request *VAR_9, u32 VAR_10)
{
 u32 VAR_11, *VAR_12;

 VAR_12 = FUNC_3(VAR_9, 4);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 VAR_11 = VAR_2 + 1;






 VAR_11 |= VAR_4 | VAR_3;

 if (VAR_10 & VAR_0) {
  VAR_11 |= VAR_7;
  if (VAR_9->engine->class == VAR_8)
   VAR_11 |= VAR_6;
 }

 *VAR_12++ = VAR_11;
 *VAR_12++ = VAR_1 | VAR_5;
 *VAR_12++ = 0;
 *VAR_12++ = 0;
 FUNC_2(VAR_9, VAR_12);

 return 0;
}
