
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct msm_gpu {TYPE_3__* aspace; int memptrs_bo; int ** rb; int active_list; int name; } ;
struct TYPE_8__ {TYPE_2__* mmu; } ;
struct TYPE_7__ {TYPE_1__* funcs; } ;
struct TYPE_6__ {int (* detach ) (TYPE_2__*,int *,int ) ;} ;


 int FUNC_0 (int **) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *,int ) ;

void FUNC_9(struct msm_gpu *VAR_0)
{
 int VAR_1;

 FUNC_1("%s", VAR_0->name);

 FUNC_3(!FUNC_4(&VAR_0->active_list));

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0->rb); VAR_1++) {
  FUNC_7(VAR_0->rb[VAR_1]);
  VAR_0->rb[VAR_1] = ((void*)0);
 }

 FUNC_6(VAR_0->memptrs_bo, VAR_0->aspace, 0);

 if (!FUNC_2(VAR_0->aspace)) {
  VAR_0->aspace->mmu->funcs->detach(VAR_0->aspace->mmu,
   ((void*)0), 0);
  FUNC_5(VAR_0->aspace);
 }
}
