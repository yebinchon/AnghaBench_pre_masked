
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct qm_aeqe {size_t dw0; } ;
struct TYPE_4__ {int aeq_head; int aeqc_phase; } ;
struct hisi_qm {TYPE_2__ status; struct qm_aeqe* aeqe; TYPE_1__* pdev; scalar_t__ io_base; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 size_t FUNC_0 (size_t*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct qm_aeqe*) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int *,char*,size_t) ;
 int FUNC_3 (struct hisi_qm*,int ,int ,int,int ) ;
 size_t* VAR_6 ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_7, void *VAR_8)
{
 struct hisi_qm *VAR_9 = VAR_8;
 struct qm_aeqe *VAR_10 = VAR_9->aeqe + VAR_9->status.aeq_head;
 u32 VAR_11;

 if (!FUNC_4(VAR_9->io_base + VAR_5))
  return VAR_1;

 while (FUNC_1(VAR_10) == VAR_9->status.aeqc_phase) {
  VAR_11 = VAR_10->dw0 >> VAR_2;
  if (VAR_11 < FUNC_0(VAR_6))
   FUNC_2(&VAR_9->pdev->dev, "%s overflow\n",
    VAR_6[VAR_11]);
  else
   FUNC_2(&VAR_9->pdev->dev, "unknown error type %d\n",
    VAR_11);

  if (VAR_9->status.aeq_head == VAR_4 - 1) {
   VAR_9->status.aeqc_phase = !VAR_9->status.aeqc_phase;
   VAR_10 = VAR_9->aeqe;
   VAR_9->status.aeq_head = 0;
  } else {
   VAR_10++;
   VAR_9->status.aeq_head++;
  }

  FUNC_3(VAR_9, 0, VAR_3, VAR_9->status.aeq_head, 0);
 }

 return VAR_0;
}
