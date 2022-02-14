
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct qm_eqe {size_t dw0; } ;
struct hisi_qp {int dummy; } ;
struct hisi_qm {struct hisi_qp** qp_array; } ;


 size_t VAR_0 ;

__attribute__((used)) static struct hisi_qp *FUNC_0(struct hisi_qm *VAR_1, struct qm_eqe *VAR_2)
{
 u16 VAR_3 = VAR_2->dw0 & VAR_0;

 return VAR_1->qp_array[VAR_3];
}
