
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_request {TYPE_1__* ring; } ;
struct TYPE_2__ {int emit; int * vaddr; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct i915_request *VAR_0, u32 *VAR_1)
{
 FUNC_0((VAR_0->ring->vaddr + VAR_0->ring->emit) != VAR_1);
}
