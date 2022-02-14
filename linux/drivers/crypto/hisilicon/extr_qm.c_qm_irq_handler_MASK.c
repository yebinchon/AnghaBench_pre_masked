
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qm_eqe {int dummy; } ;
struct hisi_qp {int work; int wq; } ;
struct TYPE_2__ {int eq_head; int eqc_phase; } ;
struct hisi_qm {TYPE_1__ status; struct qm_eqe* eqe; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qm_eqe*) ;
 int VAR_2 ;
 int FUNC_1 (struct hisi_qm*,int ,int ,int,int ) ;
 struct hisi_qp* FUNC_2 (struct hisi_qm*,struct qm_eqe*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct hisi_qm *VAR_5 = VAR_4;
 struct qm_eqe *VAR_6 = VAR_5->eqe + VAR_5->status.eq_head;
 struct hisi_qp *VAR_7;
 int VAR_8 = 0;

 while (FUNC_0(VAR_6) == VAR_5->status.eqc_phase) {
  VAR_8++;
  VAR_7 = FUNC_2(VAR_5, VAR_6);
  if (VAR_7)
   FUNC_3(VAR_7->wq, &VAR_7->work);

  if (VAR_5->status.eq_head == VAR_2 - 1) {
   VAR_5->status.eqc_phase = !VAR_5->status.eqc_phase;
   VAR_6 = VAR_5->eqe;
   VAR_5->status.eq_head = 0;
  } else {
   VAR_6++;
   VAR_5->status.eq_head++;
  }

  if (VAR_8 == VAR_2 / 2 - 1) {
   VAR_8 = 0;
   FUNC_1(VAR_5, 0, VAR_1, VAR_5->status.eq_head, 0);
  }
 }

 FUNC_1(VAR_5, 0, VAR_1, VAR_5->status.eq_head, 0);

 return VAR_0;
}
