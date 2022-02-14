
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * timeline; TYPE_4__* ring; struct intel_engine_cs* engine; int i915; } ;
struct TYPE_8__ {int vaddr; int size; int effective_size; } ;
struct measure_breadcrumb {int cs; int timeline; TYPE_2__ rq; TYPE_4__ ring; } ;
struct TYPE_5__ {int vma; } ;
struct intel_engine_cs {int (* emit_fini_breadcrumb ) (TYPE_2__*,int) ;int i915; TYPE_1__ status_page; TYPE_3__* gt; } ;
struct TYPE_7__ {int scratch; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,TYPE_3__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct measure_breadcrumb*) ;
 struct measure_breadcrumb* FUNC_7 (int,int ) ;
 int FUNC_8 (TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_9(struct intel_engine_cs *VAR_2)
{
 struct measure_breadcrumb *VAR_3;
 int VAR_4 = -VAR_0;

 FUNC_0(!VAR_2->gt->scratch);

 VAR_3 = FUNC_7(sizeof(*VAR_3), VAR_1);
 if (!VAR_3)
  return -VAR_0;

 if (FUNC_3(&VAR_3->timeline,
    VAR_2->gt,
    VAR_2->status_page.vma))
  goto out_frame;

 VAR_3->ring.vaddr = VAR_3->cs;
 VAR_3->ring.size = sizeof(VAR_3->cs);
 VAR_3->ring.effective_size = VAR_3->ring.size;
 FUNC_1(&VAR_3->ring);

 VAR_3->rq.i915 = VAR_2->i915;
 VAR_3->rq.engine = VAR_2;
 VAR_3->rq.ring = &VAR_3->ring;
 VAR_3->rq.timeline = &VAR_3->timeline;

 VAR_4 = FUNC_4(&VAR_3->timeline);
 if (VAR_4 < 0)
  goto out_timeline;

 VAR_4 = VAR_2->emit_fini_breadcrumb(&VAR_3->rq, VAR_3->cs) - VAR_3->cs;
 FUNC_0(VAR_4 & 1);

 FUNC_5(&VAR_3->timeline);

out_timeline:
 FUNC_2(&VAR_3->timeline);
out_frame:
 FUNC_6(VAR_3);
 return VAR_4;
}
