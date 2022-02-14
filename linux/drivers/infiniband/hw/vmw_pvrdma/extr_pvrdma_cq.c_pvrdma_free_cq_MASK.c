
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_dev {int dummy; } ;
struct pvrdma_cq {int pdir; int umem; int free; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pvrdma_dev*,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct pvrdma_dev *VAR_0, struct pvrdma_cq *VAR_1)
{
 if (FUNC_3(&VAR_1->refcnt))
  FUNC_0(&VAR_1->free);
 FUNC_4(&VAR_1->free);

 FUNC_1(VAR_1->umem);

 FUNC_2(VAR_0, &VAR_1->pdir);
}
