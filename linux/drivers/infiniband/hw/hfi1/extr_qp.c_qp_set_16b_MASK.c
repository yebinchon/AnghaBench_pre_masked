
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct rvt_qp {int remote_ah_attr; int port_num; TYPE_1__ ibqp; struct hfi1_qp_priv* priv; } ;
struct hfi1_qp_priv {int hdr_type; } ;
struct hfi1_pportdata {int lid; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 struct hfi1_pportdata* FUNC_3 (struct hfi1_ibport*) ;
 int FUNC_4 (int *) ;
 struct hfi1_ibport* FUNC_5 (int ,int ) ;

__attribute__((used)) static inline void FUNC_6(struct rvt_qp *VAR_1)
{
 struct hfi1_pportdata *VAR_2;
 struct hfi1_ibport *VAR_3;
 struct hfi1_qp_priv *VAR_4 = VAR_1->priv;


 FUNC_2(VAR_1->ibqp.device, &VAR_1->remote_ah_attr);


 FUNC_1(&VAR_1->remote_ah_attr);

 if (!(FUNC_4(&VAR_1->remote_ah_attr) & VAR_0))
  return;

 VAR_3 = FUNC_5(VAR_1->ibqp.device, VAR_1->port_num);
 VAR_2 = FUNC_3(VAR_3);
 VAR_4->hdr_type = FUNC_0(VAR_2->lid, &VAR_1->remote_ah_attr);
}
