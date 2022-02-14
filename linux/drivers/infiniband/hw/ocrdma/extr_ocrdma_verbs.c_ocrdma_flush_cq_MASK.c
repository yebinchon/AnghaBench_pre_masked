
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_dev {int dummy; } ;
struct ocrdma_cqe {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct ocrdma_cq {int cqe_cnt; int cq_lock; int id; struct ocrdma_cqe* va; TYPE_1__ ibcq; } ;


 struct ocrdma_dev* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ocrdma_cq*,struct ocrdma_cqe*) ;
 int FUNC_2 (struct ocrdma_dev*,int ,int,int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct ocrdma_cq *VAR_0)
{
 int VAR_1;
 int VAR_2 = 0;
 unsigned long VAR_3;

 struct ocrdma_dev *VAR_4 = FUNC_0(VAR_0->ibcq.device);
 struct ocrdma_cqe *VAR_5 = ((void*)0);

 VAR_5 = VAR_0->va;
 VAR_1 = VAR_0->cqe_cnt;




 FUNC_3(&VAR_0->cq_lock, VAR_3);
 while (VAR_1) {
  if (FUNC_1(VAR_0, VAR_5))
   VAR_2++;
  VAR_5++;
  VAR_1--;
 }
 FUNC_2(VAR_4, VAR_0->id, 0, 0, VAR_2);
 FUNC_4(&VAR_0->cq_lock, VAR_3);
}
