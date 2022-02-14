
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int seqno; } ;
struct i915_request {int tail; int ring; TYPE_2__ fence; TYPE_1__* timeline; } ;
struct TYPE_3__ {int hwsp_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i915_request*,int *) ;

__attribute__((used)) static u32 *FUNC_3(struct i915_request *VAR_9, u32 *VAR_10)
{
 *VAR_10++ = FUNC_0(4);
 *VAR_10++ = (VAR_8 |
   VAR_4 |
   VAR_3 |
   VAR_5 |
   VAR_7 |
   VAR_6 |
   VAR_2);
 *VAR_10++ = VAR_9->timeline->hwsp_offset;
 *VAR_10++ = VAR_9->fence.seqno;

 *VAR_10++ = VAR_1;
 *VAR_10++ = VAR_0;

 VAR_9->tail = FUNC_2(VAR_9, VAR_10);
 FUNC_1(VAR_9->ring, VAR_9->tail);

 return VAR_10;
}
