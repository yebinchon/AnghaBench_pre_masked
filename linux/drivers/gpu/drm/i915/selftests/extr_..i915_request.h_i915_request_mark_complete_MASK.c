
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int seqno; } ;
struct i915_request {TYPE_1__ fence; int * hwsp_seqno; } ;



__attribute__((used)) static inline void FUNC_0(struct i915_request *VAR_0)
{
 VAR_0->hwsp_seqno = (u32 *)&VAR_0->fence.seqno;
}
