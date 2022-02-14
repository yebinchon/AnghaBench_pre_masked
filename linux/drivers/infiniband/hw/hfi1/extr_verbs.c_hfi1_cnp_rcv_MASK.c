
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_4__ {int qp_type; int qp_num; } ;
struct rvt_qp {TYPE_2__ ibqp; int remote_qpn; int remote_ah_attr; } ;
struct ib_header {int dummy; } ;
struct hfi1_pportdata {int dummy; } ;
struct hfi1_packet {int rhf; struct rvt_qp* qp; struct ib_header* hdr; int rcd; } ;
struct TYPE_3__ {int n_pkt_drops; } ;
struct hfi1_ibport {size_t* sc_to_sl; TYPE_1__ rvp; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;





 size_t FUNC_0 (struct ib_header*,int ) ;
 struct hfi1_pportdata* FUNC_1 (struct hfi1_ibport*) ;
 int FUNC_2 (struct hfi1_pportdata*,size_t,int ,int ,int ,size_t) ;
 struct hfi1_ibport* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct hfi1_packet *VAR_3)
{
 struct hfi1_ibport *VAR_4 = FUNC_3(VAR_3->rcd);
 struct hfi1_pportdata *VAR_5 = FUNC_1(VAR_4);
 struct ib_header *VAR_6 = VAR_3->hdr;
 struct rvt_qp *VAR_7 = VAR_3->qp;
 u32 VAR_8, VAR_9 = 0;
 u16 VAR_10 = 0;
 u8 VAR_11, VAR_12, VAR_13;

 switch (VAR_3->qp->ibqp.qp_type) {
 case 129:
  VAR_10 = FUNC_4(&VAR_7->remote_ah_attr);
  VAR_9 = VAR_7->remote_qpn;
  VAR_13 = VAR_1;
  break;
 case 131:
  VAR_10 = FUNC_4(&VAR_7->remote_ah_attr);
  VAR_9 = VAR_7->remote_qpn;
  VAR_13 = VAR_0;
  break;
 case 130:
 case 132:
 case 128:
  VAR_13 = VAR_2;
  break;
 default:
  VAR_4->rvp.n_pkt_drops++;
  return;
 }

 VAR_12 = FUNC_0(VAR_6, VAR_3->rhf);
 VAR_11 = VAR_4->sc_to_sl[VAR_12];
 VAR_8 = VAR_7->ibqp.qp_num;

 FUNC_2(VAR_5, VAR_11, VAR_10, VAR_8, VAR_9, VAR_13);
}
