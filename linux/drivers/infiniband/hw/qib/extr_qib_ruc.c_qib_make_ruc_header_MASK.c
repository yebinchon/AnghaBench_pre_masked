
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_7__ {int device; } ;
struct rvt_qp {int s_cur_size; int s_hdrwords; scalar_t__ s_mig_state; int remote_qpn; int s_pkey_index; int remote_ah_attr; int port_num; TYPE_1__ ibqp; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {TYPE_4__* s_hdr; } ;
struct qib_ibport {int* sl_to_vl; TYPE_5__* pmastats; } ;
struct ib_other_headers {void** bth; } ;
struct TYPE_12__ {int lid; } ;
struct TYPE_11__ {int n_unicast_xmit; } ;
struct TYPE_8__ {int grh; } ;
struct TYPE_9__ {TYPE_2__ l; } ;
struct TYPE_10__ {void** lrh; TYPE_3__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 void* FUNC_1 (int) ;
 TYPE_6__* FUNC_2 (struct qib_ibport*) ;
 int FUNC_3 (struct qib_ibport*,int ) ;
 scalar_t__ FUNC_4 (struct qib_ibport*,int *,int ,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 struct qib_ibport* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (int) ;

void FUNC_13(struct rvt_qp *VAR_6, struct ib_other_headers *VAR_7,
    u32 VAR_8, u32 VAR_9)
{
 struct qib_qp_priv *VAR_10 = VAR_6->priv;
 struct qib_ibport *VAR_11 = FUNC_11(VAR_6->ibqp.device, VAR_6->port_num);
 u16 VAR_12;
 u32 VAR_13;
 u32 VAR_14;


 VAR_14 = -VAR_6->s_cur_size & 3;
 VAR_13 = (VAR_6->s_cur_size + VAR_14) >> 2;
 VAR_12 = VAR_3;
 if (FUNC_12(FUNC_5(&VAR_6->remote_ah_attr) & VAR_0)) {
  VAR_6->s_hdrwords +=
   FUNC_4(VAR_11, &VAR_10->s_hdr->u.l.grh,
         FUNC_9(&VAR_6->remote_ah_attr),
         VAR_6->s_hdrwords, VAR_13);
  VAR_12 = VAR_4;
 }
 VAR_12 |= VAR_11->sl_to_vl[FUNC_8(&VAR_6->remote_ah_attr)] << 12 |
  FUNC_8(&VAR_6->remote_ah_attr) << 4;
 VAR_10->s_hdr->lrh[0] = FUNC_0(VAR_12);
 VAR_10->s_hdr->lrh[1] =
   FUNC_0(FUNC_6(&VAR_6->remote_ah_attr));
 VAR_10->s_hdr->lrh[2] =
   FUNC_0(VAR_6->s_hdrwords + VAR_13 + VAR_5);
 VAR_10->s_hdr->lrh[3] =
  FUNC_0(FUNC_2(VAR_11)->lid |
       FUNC_7(&VAR_6->remote_ah_attr));
 VAR_8 |= FUNC_3(VAR_11, VAR_6->s_pkey_index);
 VAR_8 |= VAR_14 << 20;
 if (VAR_6->s_mig_state == VAR_2)
  VAR_8 |= VAR_1;
 VAR_7->bth[0] = FUNC_1(VAR_8);
 VAR_7->bth[1] = FUNC_1(VAR_6->remote_qpn);
 VAR_7->bth[2] = FUNC_1(VAR_9);
 FUNC_10(VAR_11->pmastats->n_unicast_xmit);
}
