
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct i915_request {TYPE_1__* ring; int engine; } ;
struct TYPE_2__ {int vma; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static bool FUNC_2(struct i915_request *VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_1->engine, VAR_0);

 return VAR_2 == FUNC_1(VAR_1->ring->vma);
}
