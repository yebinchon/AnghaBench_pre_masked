
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_timeline_hwsp {TYPE_1__* gt; TYPE_2__* vma; } ;
struct intel_timeline_cacheline {int active; int vaddr; struct intel_timeline_hwsp* hwsp; } ;
struct TYPE_4__ {int obj; } ;
struct TYPE_3__ {int i915; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct intel_timeline_cacheline* FUNC_1 (void*) ;
 struct intel_timeline_cacheline* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (void*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int ,int *,int ,int ) ;
 void* FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (struct intel_timeline_cacheline*) ;
 struct intel_timeline_cacheline* FUNC_9 (int,int ) ;
 int FUNC_10 (void*,unsigned int) ;

__attribute__((used)) static struct intel_timeline_cacheline *
FUNC_11(struct intel_timeline_hwsp *VAR_6, unsigned int VAR_7)
{
 struct intel_timeline_cacheline *VAR_8;
 void *VAR_9;

 FUNC_3(VAR_7 >= FUNC_0(VAR_0));

 VAR_8 = FUNC_9(sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return FUNC_2(-VAR_1);

 VAR_9 = FUNC_6(VAR_6->vma->obj, VAR_3);
 if (FUNC_4(VAR_9)) {
  FUNC_8(VAR_8);
  return FUNC_1(VAR_9);
 }

 FUNC_7(VAR_6->vma);
 VAR_8->hwsp = VAR_6;
 VAR_8->vaddr = FUNC_10(VAR_9, VAR_7);

 FUNC_5(VAR_6->gt->i915, &VAR_8->active,
    VAR_4, VAR_5);

 return VAR_8;
}
