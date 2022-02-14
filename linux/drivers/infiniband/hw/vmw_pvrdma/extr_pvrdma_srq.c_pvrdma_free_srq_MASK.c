
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pvrdma_srq {size_t srq_handle; int pdir; int umem; int free; int refcnt; } ;
struct pvrdma_dev {int num_srqs; int srq_tbl_lock; int ** srq_tbl; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pvrdma_dev*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct pvrdma_dev *VAR_0, struct pvrdma_srq *VAR_1)
{
 unsigned long VAR_2;

 FUNC_5(&VAR_0->srq_tbl_lock, VAR_2);
 VAR_0->srq_tbl[VAR_1->srq_handle] = ((void*)0);
 FUNC_6(&VAR_0->srq_tbl_lock, VAR_2);

 if (FUNC_4(&VAR_1->refcnt))
  FUNC_1(&VAR_1->free);
 FUNC_7(&VAR_1->free);


 FUNC_2(VAR_1->umem);

 FUNC_3(VAR_0, &VAR_1->pdir);

 FUNC_0(&VAR_0->num_srqs);
}
