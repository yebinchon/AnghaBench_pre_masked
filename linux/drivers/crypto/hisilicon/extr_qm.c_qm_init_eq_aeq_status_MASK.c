
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_qm_status {int eqc_phase; int aeqc_phase; scalar_t__ aeq_head; scalar_t__ eq_head; } ;
struct hisi_qm {struct hisi_qm_status status; } ;



__attribute__((used)) static void FUNC_0(struct hisi_qm *VAR_0)
{
 struct hisi_qm_status *VAR_1 = &VAR_0->status;

 VAR_1->eq_head = 0;
 VAR_1->aeq_head = 0;
 VAR_1->eqc_phase = 1;
 VAR_1->aeqc_phase = 1;
}
