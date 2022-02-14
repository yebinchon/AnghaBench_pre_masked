
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {scalar_t__ seqno; } ;
struct i915_request {int tail; int ring; TYPE_3__ fence; TYPE_4__* timeline; TYPE_2__* engine; } ;
struct TYPE_8__ {scalar_t__ hwsp_ggtt; int hwsp_offset; } ;
struct TYPE_5__ {scalar_t__ vma; } ;
struct TYPE_6__ {TYPE_1__ status_page; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct i915_request*,int *) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static u32 *FUNC_4(struct i915_request *VAR_5, u32 *VAR_6)
{
 FUNC_0(VAR_5->timeline->hwsp_ggtt != VAR_5->engine->status_page.vma);
 FUNC_0(FUNC_3(VAR_5->timeline->hwsp_offset) != VAR_0);

 *VAR_6++ = VAR_1;

 *VAR_6++ = VAR_3;
 *VAR_6++ = VAR_0;
 *VAR_6++ = VAR_5->fence.seqno;

 *VAR_6++ = VAR_4;
 *VAR_6++ = VAR_2;

 VAR_5->tail = FUNC_2(VAR_5, VAR_6);
 FUNC_1(VAR_5->ring, VAR_5->tail);

 return VAR_6;
}
