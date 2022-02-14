
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp {size_t id; } ;
struct ocrdma_dev {int ** qp_tbl; } ;



__attribute__((used)) static void FUNC_0(struct ocrdma_dev *VAR_0, struct ocrdma_qp *VAR_1)
{
 VAR_0->qp_tbl[VAR_1->id] = ((void*)0);
}
