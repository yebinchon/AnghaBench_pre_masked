
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rvt_qp {int r_psn; int r_ack_psn; scalar_t__ r_nak_state; } ;
struct hfi1_packet {int ohdr; } ;
struct TYPE_2__ {int n_rc_seqnak; } ;
struct hfi1_ibport {TYPE_1__ rvp; } ;
struct hfi1_ctxtdata {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct hfi1_ibport*,struct hfi1_packet*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct hfi1_ctxtdata*,struct rvt_qp*) ;
 struct hfi1_ibport* FUNC_5 (struct hfi1_ctxtdata*) ;

void FUNC_6(
 struct hfi1_ctxtdata *VAR_2,
 struct hfi1_packet *VAR_3,
 struct rvt_qp *VAR_4)
{
 struct hfi1_ibport *VAR_5 = FUNC_5(VAR_2);
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8;

 if (FUNC_1(VAR_5, VAR_3))
  return;

 VAR_8 = FUNC_3(VAR_3->ohdr);
 VAR_7 = FUNC_2(VAR_3->ohdr);


 if (VAR_7 < VAR_1) {
  VAR_6 = FUNC_0(VAR_8, VAR_4->r_psn);
  if (!VAR_4->r_nak_state && VAR_6 >= 0) {
   VAR_5->rvp.n_rc_seqnak++;
   VAR_4->r_nak_state = VAR_0;

   VAR_4->r_ack_psn = VAR_4->r_psn;
   FUNC_4(VAR_2, VAR_4);
  }
 }
}
