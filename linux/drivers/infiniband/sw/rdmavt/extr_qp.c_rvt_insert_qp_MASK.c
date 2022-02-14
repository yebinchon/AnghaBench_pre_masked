
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int qp_num; } ;
struct rvt_qp {int port_num; int next; TYPE_1__ ibqp; } ;
struct rvt_ibport {int * qp; } ;
struct rvt_dev_info {TYPE_2__* qp_dev; struct rvt_ibport** ports; } ;
struct TYPE_4__ {int qpt_lock; int * qp_table; int qp_table_bits; } ;


 size_t FUNC_0 (size_t,int ) ;
 int FUNC_1 (int ,struct rvt_qp*) ;
 int FUNC_2 (struct rvt_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct rvt_qp*,size_t) ;

__attribute__((used)) static void FUNC_6(struct rvt_dev_info *VAR_0, struct rvt_qp *VAR_1)
{
 struct rvt_ibport *VAR_2 = VAR_0->ports[VAR_1->port_num - 1];
 unsigned long VAR_3;

 FUNC_2(VAR_1);
 FUNC_3(&VAR_0->qp_dev->qpt_lock, VAR_3);

 if (VAR_1->ibqp.qp_num <= 1) {
  FUNC_1(VAR_2->qp[VAR_1->ibqp.qp_num], VAR_1);
 } else {
  u32 VAR_4 = FUNC_0(VAR_1->ibqp.qp_num, VAR_0->qp_dev->qp_table_bits);

  VAR_1->next = VAR_0->qp_dev->qp_table[VAR_4];
  FUNC_1(VAR_0->qp_dev->qp_table[VAR_4], VAR_1);
  FUNC_5(VAR_1, VAR_4);
 }

 FUNC_4(&VAR_0->qp_dev->qpt_lock, VAR_3);
}
