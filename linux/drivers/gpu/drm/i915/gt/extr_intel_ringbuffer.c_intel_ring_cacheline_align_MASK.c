
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct i915_request {TYPE_1__* ring; } ;
struct TYPE_2__ {int emit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void*) ;
 int VAR_2 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct i915_request*,void*) ;
 void* FUNC_4 (struct i915_request*,int) ;
 int FUNC_5 (void*,int,int) ;

int FUNC_6(struct i915_request *VAR_3)
{
 int VAR_4;
 void *VAR_5;

 VAR_4 = (VAR_3->ring->emit & (VAR_0 - 1)) / sizeof(u32);
 if (VAR_4 == 0)
  return 0;

 VAR_4 = VAR_1 - VAR_4;
 FUNC_0(VAR_4 & 1);

 VAR_5 = FUNC_4(VAR_3, VAR_4);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 FUNC_5(VAR_5, (u64)VAR_2 << 32 | VAR_2, VAR_4 / 2);
 FUNC_3(VAR_3, VAR_5);

 FUNC_0(VAR_3->ring->emit & (VAR_0 - 1));
 return 0;
}
