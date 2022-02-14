
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_19__ {int access; int key; int mr; } ;
struct TYPE_16__ {int rkey; int swap; int compare_add; int remote_addr; } ;
struct TYPE_15__ {int rkey; int remote_addr; } ;
struct TYPE_14__ {int pkey_index; int remote_qkey; int remote_qpn; } ;
struct TYPE_20__ {TYPE_6__ reg; TYPE_3__ atomic; TYPE_2__ rdma; TYPE_1__ ud; } ;
struct TYPE_17__ {int invalidate_rkey; int imm_data; } ;
struct rxe_send_wr {int opcode; TYPE_7__ wr; TYPE_4__ ex; int send_flags; int num_sge; int wr_id; } ;
struct rxe_qp {int dummy; } ;
struct TYPE_18__ {int invalidate_rkey; int imm_data; } ;
struct ib_send_wr {int opcode; TYPE_5__ ex; int send_flags; int num_sge; int wr_id; } ;
struct TYPE_22__ {int access; int key; int mr; } ;
struct TYPE_21__ {int pkey_index; int remote_qkey; int remote_qpn; } ;
struct TYPE_13__ {int rkey; int swap; int compare_add; int remote_addr; } ;
struct TYPE_12__ {int rkey; int remote_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_11__* FUNC_0 (struct ib_send_wr const*) ;
 scalar_t__ FUNC_1 (struct rxe_qp*) ;
 TYPE_10__* FUNC_2 (struct ib_send_wr const*) ;
 TYPE_9__* FUNC_3 (struct ib_send_wr const*) ;
 TYPE_8__* FUNC_4 (struct ib_send_wr const*) ;

__attribute__((used)) static void FUNC_5(struct rxe_qp *VAR_3, struct rxe_send_wr *VAR_4,
    const struct ib_send_wr *VAR_5)
{
 VAR_4->wr_id = VAR_5->wr_id;
 VAR_4->num_sge = VAR_5->num_sge;
 VAR_4->opcode = VAR_5->opcode;
 VAR_4->send_flags = VAR_5->send_flags;

 if (FUNC_1(VAR_3) == VAR_2 ||
     FUNC_1(VAR_3) == VAR_1 ||
     FUNC_1(VAR_3) == VAR_0) {
  VAR_4->wr.ud.remote_qpn = FUNC_4(VAR_5)->remote_qpn;
  VAR_4->wr.ud.remote_qkey = FUNC_4(VAR_5)->remote_qkey;
  if (FUNC_1(VAR_3) == VAR_0)
   VAR_4->wr.ud.pkey_index = FUNC_4(VAR_5)->pkey_index;
  if (VAR_4->opcode == 129)
   VAR_4->ex.imm_data = VAR_5->ex.imm_data;
 } else {
  switch (VAR_4->opcode) {
  case 131:
   VAR_4->ex.imm_data = VAR_5->ex.imm_data;

  case 133:
  case 132:
   VAR_4->wr.rdma.remote_addr = FUNC_2(VAR_5)->remote_addr;
   VAR_4->wr.rdma.rkey = FUNC_2(VAR_5)->rkey;
   break;
  case 129:
   VAR_4->ex.imm_data = VAR_5->ex.imm_data;
   break;
  case 128:
   VAR_4->ex.invalidate_rkey = VAR_5->ex.invalidate_rkey;
   break;
  case 136:
  case 135:
   VAR_4->wr.atomic.remote_addr =
    FUNC_0(VAR_5)->remote_addr;
   VAR_4->wr.atomic.compare_add =
    FUNC_0(VAR_5)->compare_add;
   VAR_4->wr.atomic.swap = FUNC_0(VAR_5)->swap;
   VAR_4->wr.atomic.rkey = FUNC_0(VAR_5)->rkey;
   break;
  case 134:
   VAR_4->ex.invalidate_rkey = VAR_5->ex.invalidate_rkey;
  break;
  case 130:
   VAR_4->wr.reg.mr = FUNC_3(VAR_5)->mr;
   VAR_4->wr.reg.key = FUNC_3(VAR_5)->key;
   VAR_4->wr.reg.access = FUNC_3(VAR_5)->access;
  break;
  default:
   break;
  }
 }
}
