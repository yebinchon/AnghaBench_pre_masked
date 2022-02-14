
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resid; } ;
struct rxe_send_wqe {int first_psn; int last_psn; TYPE_1__ dma; } ;
struct TYPE_4__ {int psn; } ;
struct rxe_qp {int mtu; TYPE_2__ req; } ;
struct rxe_pkt_info {int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct rxe_qp *VAR_3,
      struct rxe_send_wqe *VAR_4,
      struct rxe_pkt_info *VAR_5,
      int VAR_6)
{

 int VAR_7 = (VAR_4->dma.resid + VAR_6 + VAR_3->mtu - 1) / VAR_3->mtu;


 if (VAR_7 == 0)
  VAR_7 = 1;

 if (VAR_5->mask & VAR_2) {
  VAR_4->first_psn = VAR_3->req.psn;
  VAR_4->last_psn = (VAR_3->req.psn + VAR_7 - 1) & VAR_0;
 }

 if (VAR_5->mask & VAR_1)
  VAR_3->req.psn = (VAR_4->first_psn + VAR_7) & VAR_0;
 else
  VAR_3->req.psn = (VAR_3->req.psn + 1) & VAR_0;
}
