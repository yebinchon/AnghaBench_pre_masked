
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocrdma_qp_hwq_info {int max_wqe_idx; int head; int tail; int max_cnt; } ;



__attribute__((used)) static int FUNC_0(struct ocrdma_qp_hwq_info *VAR_0)
{
 return ((VAR_0->max_wqe_idx - VAR_0->head) + VAR_0->tail) % VAR_0->max_cnt;
}
