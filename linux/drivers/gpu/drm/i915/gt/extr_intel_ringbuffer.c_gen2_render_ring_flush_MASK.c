
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_1__* engine; } ;
struct TYPE_2__ {int gt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct i915_request*,int*) ;
 int* FUNC_4 (struct i915_request*,int) ;

__attribute__((used)) static int
FUNC_5(struct i915_request *VAR_8, u32 VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11, *VAR_12;

 VAR_11 = VAR_3;
 VAR_10 = 0;
 if (VAR_9 & VAR_1)
  VAR_11 |= VAR_6;
 if (VAR_9 & VAR_0)
  VAR_10 = 4;

 VAR_12 = FUNC_4(VAR_8, 2 + 3 * VAR_10);
 if (FUNC_0(VAR_12))
  return FUNC_1(VAR_12);

 *VAR_12++ = VAR_11;
 while (VAR_10--) {
  *VAR_12++ = VAR_7 | VAR_4;
  *VAR_12++ = FUNC_2(VAR_8->engine->gt,
      VAR_2);
  *VAR_12++ = 0;
 }
 *VAR_12++ = VAR_3 | VAR_5;

 FUNC_3(VAR_8, VAR_12);

 return 0;
}
