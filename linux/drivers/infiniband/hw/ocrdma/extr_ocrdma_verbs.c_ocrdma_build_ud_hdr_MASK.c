
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocrdma_qp {scalar_t__ qp_type; int qkey; } ;
struct ocrdma_hdr_wqe {int cw; } ;
struct ocrdma_ewqe_ud_hdr {int hdr_type; int rsvd_ahid; int qkey; int rsvd_dest_qpn; } ;
struct ocrdma_ah {TYPE_1__* av; int hdr_type; int id; } ;
struct ib_send_wr {int dummy; } ;
struct TYPE_4__ {int remote_qkey; int remote_qpn; int ah; } ;
struct TYPE_3__ {int valid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ocrdma_ah* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct ib_send_wr const*) ;

__attribute__((used)) static void FUNC_2(struct ocrdma_qp *VAR_4,
    struct ocrdma_hdr_wqe *VAR_5,
    const struct ib_send_wr *VAR_6)
{
 struct ocrdma_ewqe_ud_hdr *VAR_7 =
  (struct ocrdma_ewqe_ud_hdr *)(VAR_5 + 1);
 struct ocrdma_ah *VAR_8 = FUNC_0(FUNC_1(VAR_6)->ah);

 VAR_7->rsvd_dest_qpn = FUNC_1(VAR_6)->remote_qpn;
 if (VAR_4->qp_type == VAR_0)
  VAR_7->qkey = VAR_4->qkey;
 else
  VAR_7->qkey = FUNC_1(VAR_6)->remote_qkey;
 VAR_7->rsvd_ahid = VAR_8->id;
 VAR_7->hdr_type = VAR_8->hdr_type;
 if (VAR_8->av->valid & VAR_1)
  VAR_5->cw |= (VAR_2 << VAR_3);
}
