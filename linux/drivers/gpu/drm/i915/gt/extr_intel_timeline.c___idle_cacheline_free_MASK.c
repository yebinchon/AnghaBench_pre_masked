
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_timeline_cacheline {int active; int vaddr; TYPE_2__* hwsp; } ;
struct TYPE_4__ {TYPE_1__* vma; } ;
struct TYPE_3__ {int obj; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct intel_timeline_cacheline*) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static void FUNC_8(struct intel_timeline_cacheline *VAR_1)
{
 FUNC_0(!FUNC_3(&VAR_1->active));

 FUNC_4(VAR_1->hwsp->vma->obj);
 FUNC_5(VAR_1->hwsp->vma);
 FUNC_1(VAR_1->hwsp, FUNC_7(VAR_1->vaddr, VAR_0));

 FUNC_2(&VAR_1->active);
 FUNC_6(VAR_1);
}
