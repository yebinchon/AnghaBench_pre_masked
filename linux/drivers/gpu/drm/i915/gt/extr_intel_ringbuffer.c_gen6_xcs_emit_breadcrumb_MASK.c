
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int seqno; } ;
struct i915_request {int tail; int ring; TYPE_1__ fence; TYPE_2__* timeline; TYPE_4__* engine; } ;
struct TYPE_7__ {scalar_t__ vma; } ;
struct TYPE_8__ {TYPE_3__ status_page; } ;
struct TYPE_6__ {scalar_t__ hwsp_ggtt; int hwsp_offset; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i915_request*,int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 *FUNC_4(struct i915_request *VAR_6, u32 *VAR_7)
{
 FUNC_0(VAR_6->timeline->hwsp_ggtt != VAR_6->engine->status_page.vma);
 FUNC_0(FUNC_3(VAR_6->timeline->hwsp_offset) != VAR_0);

 *VAR_7++ = VAR_1 | VAR_2 | VAR_3;
 *VAR_7++ = VAR_0 | VAR_4;
 *VAR_7++ = VAR_6->fence.seqno;

 *VAR_7++ = VAR_5;

 VAR_6->tail = FUNC_2(VAR_6, VAR_7);
 FUNC_1(VAR_6->ring, VAR_6->tail);

 return VAR_7;
}
