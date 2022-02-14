
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siw_cm_work {TYPE_1__* cep; int list; } ;
struct TYPE_2__ {int lock; int work_freelist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct siw_cm_work *VAR_0)
{
 FUNC_0(&VAR_0->list);
 FUNC_2(&VAR_0->cep->lock);
 FUNC_1(&VAR_0->list, &VAR_0->cep->work_freelist);
 FUNC_3(&VAR_0->cep->lock);
}
