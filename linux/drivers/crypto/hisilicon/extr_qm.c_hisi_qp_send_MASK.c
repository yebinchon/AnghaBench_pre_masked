
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct hisi_qp_status {int sq_tail; int used; int flags; } ;
struct hisi_qp {struct hisi_qp_status qp_status; int qp_id; TYPE_2__* qm; } ;
struct TYPE_4__ {int sqe_size; TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (void*,void const*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int,int ) ;
 void* FUNC_4 (struct hisi_qp*) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct hisi_qp *VAR_5, const void *VAR_6)
{
 struct hisi_qp_status *VAR_7 = &VAR_5->qp_status;
 u16 VAR_8 = VAR_7->sq_tail;
 u16 VAR_9 = (VAR_8 + 1) % VAR_3;
 void *VAR_10 = FUNC_4(VAR_5);

 if (FUNC_6(FUNC_5(VAR_4, &VAR_5->qp_status.flags))) {
  FUNC_1(&VAR_5->qm->pdev->dev, "QP is stopped or resetting\n");
  return -VAR_0;
 }

 if (!VAR_10)
  return -VAR_1;

 FUNC_2(VAR_10, VAR_6, VAR_5->qm->sqe_size);

 FUNC_3(VAR_5->qm, VAR_5->qp_id, VAR_2, VAR_9, 0);
 FUNC_0(&VAR_5->qp_status.used);
 VAR_7->sq_tail = VAR_9;

 return 0;
}
