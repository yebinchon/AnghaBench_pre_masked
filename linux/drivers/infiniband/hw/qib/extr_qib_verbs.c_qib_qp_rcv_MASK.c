
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int qp_type; } ;
struct rvt_qp {size_t state; int r_lock; TYPE_2__ ibqp; } ;
struct TYPE_4__ {int n_pkt_drops; } ;
struct qib_ibport {TYPE_1__ rvp; } ;
struct qib_ctxtdata {TYPE_3__* ppd; } ;
struct ib_header {int dummy; } ;
struct TYPE_6__ {struct qib_ibport ibport_data; } ;







 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (struct qib_ctxtdata*,struct ib_header*,int,void*,int ,struct rvt_qp*) ;
 int FUNC_1 (struct qib_ibport*,struct ib_header*,int,void*,int ,struct rvt_qp*) ;
 int FUNC_2 (struct qib_ibport*,struct ib_header*,int,void*,int ,struct rvt_qp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct qib_ctxtdata *VAR_3, struct ib_header *VAR_4,
         int VAR_5, void *VAR_6, u32 VAR_7, struct rvt_qp *VAR_8)
{
 struct qib_ibport *VAR_9 = &VAR_3->ppd->ibport_data;

 FUNC_3(&VAR_8->r_lock);


 if (!(VAR_2[VAR_8->state] & VAR_0)) {
  VAR_9->rvp.n_pkt_drops++;
  goto unlock;
 }

 switch (VAR_8->ibqp.qp_type) {
 case 130:
 case 132:
  if (VAR_1)
   break;

 case 128:
  FUNC_2(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 case 131:
  FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 case 129:
  FUNC_1(VAR_9, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
  break;

 default:
  break;
 }

unlock:
 FUNC_4(&VAR_8->r_lock);
}
