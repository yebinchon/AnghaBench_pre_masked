
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int seqno; } ;
struct i915_request {int infix; TYPE_1__ fence; TYPE_2__* timeline; } ;
struct TYPE_4__ {int hwsp_offset; int has_initial_breadcrumb; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_request*,int *) ;
 int * FUNC_4 (struct i915_request*,int) ;
 int FUNC_5 (struct i915_request*,int *) ;

__attribute__((used)) static int FUNC_6(struct i915_request *VAR_4)
{
 u32 *VAR_5;

 FUNC_0(!VAR_4->timeline->has_initial_breadcrumb);

 VAR_5 = FUNC_4(VAR_4, 6);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);







 *VAR_5++ = VAR_0;
 *VAR_5++ = VAR_1;

 *VAR_5++ = VAR_2 | VAR_3;
 *VAR_5++ = VAR_4->timeline->hwsp_offset;
 *VAR_5++ = 0;
 *VAR_5++ = VAR_4->fence.seqno - 1;

 FUNC_3(VAR_4, VAR_5);


 VAR_4->infix = FUNC_5(VAR_4, VAR_5);

 return 0;
}
