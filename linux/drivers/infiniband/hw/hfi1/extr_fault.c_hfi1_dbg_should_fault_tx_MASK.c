
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {TYPE_1__ ibqp; } ;
struct hfi1_ibdev {TYPE_2__* fault; } ;
struct TYPE_4__ {int * n_txfaults; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hfi1_ibdev*,size_t,int ) ;
 struct hfi1_ibdev* FUNC_1 (int ) ;
 int FUNC_2 (struct rvt_qp*,size_t) ;

bool FUNC_3(struct rvt_qp *VAR_1, u32 VAR_2)
{
 struct hfi1_ibdev *VAR_3 = FUNC_1(VAR_1->ibqp.device);

 if (FUNC_0(VAR_3, VAR_2, VAR_0)) {
  FUNC_2(VAR_1, VAR_2);
  VAR_3->fault->n_txfaults[VAR_2]++;
  return 1;
 }
 return 0;
}
