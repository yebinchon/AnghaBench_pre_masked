
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i915_request {TYPE_1__* ring; } ;
struct TYPE_2__ {int vaddr; scalar_t__ size; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_2(const struct i915_request *VAR_0, void *VAR_1)
{

 u32 VAR_2 = VAR_1 - VAR_0->ring->vaddr;
 FUNC_0(VAR_2 > VAR_0->ring->size);
 return FUNC_1(VAR_0->ring, VAR_2);
}
