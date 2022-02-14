
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_6__ {int imm_data; } ;
struct TYPE_7__ {scalar_t__ opcode; int send_flags; TYPE_1__ ex; } ;
struct rvt_swqe {int psn; TYPE_2__ wr; } ;
struct TYPE_10__ {scalar_t__ qp_type; int qp_num; int device; } ;
struct rvt_qp {int qkey; TYPE_5__ ibqp; int s_pkey_index; int port_num; } ;
struct TYPE_8__ {void** deth; int imm_data; } ;
struct TYPE_9__ {TYPE_3__ ud; } ;
struct ib_other_headers {TYPE_4__ u; void** bth; } ;
struct hfi1_ibport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct hfi1_ibport*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rvt_swqe*) ;
 int FUNC_4 (struct rvt_swqe*) ;
 int FUNC_5 (struct rvt_swqe*) ;
 struct hfi1_ibport* FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct rvt_qp *VAR_7, struct rvt_swqe *VAR_8,
          struct ib_other_headers *VAR_9,
          u16 *VAR_10, u32 VAR_11, bool VAR_12)
{
 u32 VAR_13;
 struct hfi1_ibport *VAR_14;

 VAR_14 = FUNC_6(VAR_7->ibqp.device, VAR_7->port_num);
 if (VAR_8->wr.opcode == VAR_6) {
  VAR_9->u.ud.imm_data = VAR_8->wr.ex.imm_data;
  VAR_13 = VAR_2 << 24;
 } else {
  VAR_13 = VAR_1 << 24;
 }

 if (VAR_8->wr.send_flags & VAR_5)
  VAR_13 |= VAR_0;
 VAR_13 |= VAR_11 << 20;
 if (VAR_7->ibqp.qp_type == VAR_3 || VAR_7->ibqp.qp_type == VAR_4)
  *VAR_10 = FUNC_1(VAR_14, FUNC_3(VAR_8));
 else
  *VAR_10 = FUNC_1(VAR_14, VAR_7->s_pkey_index);
 if (!VAR_12)
  VAR_13 |= *VAR_10;
 VAR_9->bth[0] = FUNC_0(VAR_13);
 VAR_9->bth[1] = FUNC_0(FUNC_5(VAR_8));
 VAR_9->bth[2] = FUNC_0(FUNC_2(VAR_8->psn));




 VAR_9->u.ud.deth[0] =
  FUNC_0((int)FUNC_4(VAR_8) < 0 ? VAR_7->qkey :
       FUNC_4(VAR_8));
 VAR_9->u.ud.deth[1] = FUNC_0(VAR_7->ibqp.qp_num);
}
