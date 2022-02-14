
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rvt_sge_state {int dummy; } ;
struct TYPE_5__ {int device; } ;
struct rvt_qp {int * s_rdma_mr; int s_wqe; int s_srate; int port_num; TYPE_1__ ibqp; struct qib_qp_priv* priv; } ;
struct TYPE_7__ {int sg_count; int flags; scalar_t__ addr; int callback; } ;
struct qib_verbs_txreq {scalar_t__ dwords; size_t hdr_inx; int hdr_dwords; TYPE_3__ txreq; struct qib_pio_header* align_buf; int * mr; int wqe; struct rvt_qp* qp; struct rvt_sge_state* ss; } ;
struct qib_qp_priv {struct qib_verbs_txreq* s_tx; } ;
struct qib_pportdata {scalar_t__ sdma_descq_cnt; } ;
struct qib_pio_header {int hdr; void** pbc; } ;
struct TYPE_8__ {int n_unaligned; } ;
struct qib_ibport {TYPE_4__ rvp; } ;
struct qib_ibdev {scalar_t__ pio_hdrs_phys; struct qib_pio_header* pio_hdrs; } ;
struct qib_devdata {scalar_t__ (* f_setpbc_control ) (struct qib_pportdata*,scalar_t__,int ,int) ;int flags; scalar_t__ piosize2kmax_dwords; TYPE_2__* pcidev; } ;
struct ib_header {int * lrh; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct qib_verbs_txreq*) ;
 int FUNC_1 (struct qib_verbs_txreq*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (scalar_t__) ;
 struct qib_devdata* FUNC_4 (struct qib_ibdev*) ;
 scalar_t__ FUNC_5 (int *,struct qib_pio_header*,int,int ) ;
 scalar_t__ FUNC_6 (int *,scalar_t__) ;
 struct qib_verbs_txreq* FUNC_7 (struct qib_ibdev*,struct rvt_qp*) ;
 int FUNC_8 (struct qib_pio_header*) ;
 struct qib_pio_header* FUNC_9 (int,int ) ;
 int FUNC_10 (int *,struct ib_header*,scalar_t__) ;
 struct qib_pportdata* FUNC_11 (struct qib_ibport*) ;
 int FUNC_12 (scalar_t__*,struct rvt_sge_state*,scalar_t__) ;
 scalar_t__ FUNC_13 (struct rvt_sge_state*,scalar_t__) ;
 int FUNC_14 (struct qib_verbs_txreq*) ;
 int FUNC_15 (struct qib_pportdata*,struct rvt_sge_state*,scalar_t__,struct qib_verbs_txreq*) ;
 int VAR_8 ;
 scalar_t__ FUNC_16 (struct qib_pportdata*,scalar_t__,int ,int) ;
 struct qib_ibdev* FUNC_17 (int ) ;
 struct qib_ibport* FUNC_18 (int ,int ) ;
 int FUNC_19 (struct qib_ibdev*,struct rvt_qp*) ;

__attribute__((used)) static int FUNC_20(struct rvt_qp *VAR_9, struct ib_header *VAR_10,
         u32 VAR_11, struct rvt_sge_state *VAR_12, u32 VAR_13,
         u32 VAR_14, u32 VAR_15)
{
 struct qib_qp_priv *VAR_16 = VAR_9->priv;
 struct qib_ibdev *VAR_17 = FUNC_17(VAR_9->ibqp.device);
 struct qib_devdata *VAR_18 = FUNC_4(VAR_17);
 struct qib_ibport *VAR_19 = FUNC_18(VAR_9->ibqp.device, VAR_9->port_num);
 struct qib_pportdata *VAR_20 = FUNC_11(VAR_19);
 struct qib_verbs_txreq *VAR_21;
 struct qib_pio_header *VAR_22;
 u32 VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_21 = VAR_16->s_tx;
 if (VAR_21) {
  VAR_16->s_tx = ((void*)0);

  VAR_25 = FUNC_15(VAR_20, VAR_21->ss, VAR_21->dwords, VAR_21);
  goto bail;
 }

 VAR_21 = FUNC_7(VAR_17, VAR_9);
 if (FUNC_0(VAR_21))
  goto bail_tx;

 VAR_23 = VAR_18->f_setpbc_control(VAR_20, VAR_14, VAR_9->s_srate,
           FUNC_2(VAR_10->lrh[0]) >> 12);
 VAR_21->qp = VAR_9;
 VAR_21->wqe = VAR_9->s_wqe;
 VAR_21->mr = VAR_9->s_rdma_mr;
 if (VAR_9->s_rdma_mr)
  VAR_9->s_rdma_mr = ((void*)0);
 VAR_21->txreq.callback = VAR_8;
 if (VAR_18->flags & VAR_2)
  VAR_21->txreq.flags = VAR_5;
 else
  VAR_21->txreq.flags = VAR_6;
 if (VAR_14 + 1 > VAR_18->piosize2kmax_dwords)
  VAR_21->txreq.flags |= VAR_7;

 if (VAR_13) {




  VAR_24 = FUNC_13(VAR_12, VAR_13);
  if (VAR_24 >= VAR_20->sdma_descq_cnt)
   VAR_24 = 0;
 } else
  VAR_24 = 1;
 if (VAR_24) {
  VAR_22 = &VAR_17->pio_hdrs[VAR_21->hdr_inx];
  VAR_22->pbc[0] = FUNC_3(VAR_14);
  VAR_22->pbc[1] = FUNC_3(VAR_23);
  FUNC_10(&VAR_22->hdr, VAR_10, VAR_11 << 2);
  VAR_21->txreq.flags |= VAR_4;
  VAR_21->txreq.sg_count = VAR_24;
  VAR_21->txreq.addr = VAR_17->pio_hdrs_phys +
   VAR_21->hdr_inx * sizeof(struct qib_pio_header);
  VAR_21->hdr_dwords = VAR_11 + 2;
  VAR_25 = FUNC_15(VAR_20, VAR_12, VAR_15, VAR_21);
  goto bail;
 }


 VAR_21->hdr_dwords = VAR_14 + 1;
 VAR_22 = FUNC_9(VAR_21->hdr_dwords << 2, VAR_1);
 if (!VAR_22)
  goto err_tx;
 VAR_22->pbc[0] = FUNC_3(VAR_14);
 VAR_22->pbc[1] = FUNC_3(VAR_23);
 FUNC_10(&VAR_22->hdr, VAR_10, VAR_11 << 2);
 FUNC_12((u32 *) &VAR_22->hdr + VAR_11, VAR_12, VAR_13);

 VAR_21->txreq.addr = FUNC_5(&VAR_18->pcidev->dev, VAR_22,
     VAR_21->hdr_dwords << 2, VAR_0);
 if (FUNC_6(&VAR_18->pcidev->dev, VAR_21->txreq.addr))
  goto map_err;
 VAR_21->align_buf = VAR_22;
 VAR_21->txreq.flags |= VAR_3;
 VAR_21->txreq.sg_count = 1;
 VAR_25 = FUNC_15(VAR_20, ((void*)0), 0, VAR_21);
 goto unaligned;

map_err:
 FUNC_8(VAR_22);
err_tx:
 FUNC_14(VAR_21);
 VAR_25 = FUNC_19(VAR_17, VAR_9);
unaligned:
 VAR_19->rvp.n_unaligned++;
bail:
 return VAR_25;
bail_tx:
 VAR_25 = FUNC_1(VAR_21);
 goto bail;
}
