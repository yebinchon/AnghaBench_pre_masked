
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct hisi_qp_status {int sq_tail; int used; } ;
struct hisi_qp {void* sqe; TYPE_1__* qm; struct hisi_qp_status qp_status; } ;
struct TYPE_2__ {int sqe_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void *FUNC_2(struct hisi_qp *VAR_1)
{
 struct hisi_qp_status *VAR_2 = &VAR_1->qp_status;
 u16 VAR_3 = VAR_2->sq_tail;

 if (FUNC_1(FUNC_0(&VAR_1->qp_status.used) == VAR_0))
  return ((void*)0);

 return VAR_1->sqe + VAR_3 * VAR_1->qm->sqe_size;
}
