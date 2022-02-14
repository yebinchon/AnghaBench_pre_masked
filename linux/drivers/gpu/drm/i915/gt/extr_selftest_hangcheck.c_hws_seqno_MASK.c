
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int context; } ;
struct i915_request {TYPE_1__ fence; } ;
struct hang {int * seqno; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u32 FUNC_1(const struct hang *VAR_1, const struct i915_request *VAR_2)
{
 return FUNC_0(VAR_1->seqno[VAR_2->fence.context % (VAR_0/sizeof(u32))]);
}
