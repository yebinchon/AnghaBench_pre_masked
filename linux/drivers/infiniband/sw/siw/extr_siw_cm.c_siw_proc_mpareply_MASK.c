
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u16 ;
struct siw_qp_attrs {int irq_size; int orq_size; int state; int sk; int flags; } ;
struct TYPE_14__ {scalar_t__ state; } ;
struct TYPE_8__ {scalar_t__ gso_seg_limit; } ;
struct siw_qp {int state_lock; TYPE_7__ attrs; TYPE_1__ tx_ctx; } ;
struct TYPE_11__ {int ird; int ord; } ;
struct TYPE_13__ {int bits; } ;
struct mpa_rr {TYPE_6__ params; int key; } ;
struct TYPE_12__ {TYPE_4__ v2_ctrl_req; scalar_t__ pdata; struct mpa_rr hdr; } ;
struct siw_cep {int ird; int ord; int state; int sock; TYPE_5__ mpa; TYPE_3__* sdev; scalar_t__ enhanced_rdma_conn_est; struct siw_qp* qp; } ;
struct mpa_v2_data {int ird; int ord; } ;
typedef int qp_attrs ;
typedef enum siw_qp_attr_mask { ____Placeholder_siw_qp_attr_mask } siw_qp_attr_mask ;
typedef enum mpa_v2_ctrl { ____Placeholder_mpa_v2_ctrl } mpa_v2_ctrl ;
struct TYPE_9__ {int max_ird; int max_ord; } ;
struct TYPE_10__ {TYPE_2__ attrs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct siw_qp_attrs*,int ,int) ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_4 (int) ;
 int VAR_35 ;
 int FUNC_5 (struct siw_cep*) ;
 int FUNC_6 (struct siw_cep*,int ,int) ;
 int FUNC_7 (struct siw_cep*,char*,...) ;
 int FUNC_8 (struct siw_qp*,int ,int ,int ,int ) ;
 int FUNC_9 (struct siw_qp*,struct siw_qp_attrs*,int) ;
 int FUNC_10 (struct siw_qp*,int) ;
 int FUNC_11 (struct siw_cep*,struct siw_qp*) ;
 int FUNC_12 (struct siw_cep*) ;
 int FUNC_13 (struct siw_qp*) ;
 scalar_t__ VAR_36 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct siw_cep *VAR_37)
{
 struct siw_qp_attrs VAR_38;
 enum siw_qp_attr_mask VAR_39;
 struct siw_qp *VAR_40 = VAR_37->qp;
 struct mpa_rr *VAR_41;
 int VAR_42;
 u16 VAR_43;
 u16 VAR_44;
 bool VAR_45 = 0;
 enum mpa_v2_ctrl VAR_46 = VAR_20;

 VAR_42 = FUNC_12(VAR_37);
 if (VAR_42 != -VAR_0)
  FUNC_5(VAR_37);
 if (VAR_42)
  goto out_err;

 VAR_41 = &VAR_37->mpa.hdr;

 if (FUNC_0(VAR_41->params.bits) > VAR_13) {

  VAR_42 = -VAR_5;
  goto out_err;
 }
 if (FUNC_2(VAR_41->key, VAR_12, 16)) {
  FUNC_8(VAR_40, VAR_32, VAR_10,
       VAR_8, 0);
  FUNC_13(VAR_40);
  VAR_42 = -VAR_5;
  goto out_err;
 }
 if (VAR_41->params.bits & VAR_18) {
  FUNC_7(VAR_37, "got mpa reject\n");
  FUNC_6(VAR_37, VAR_6, -VAR_2);

  return -VAR_2;
 }
 if (VAR_36 && VAR_41->params.bits & VAR_16) {
  FUNC_7(VAR_37, "peer allows GSO on TX\n");
  VAR_40->tx_ctx.gso_seg_limit = 0;
 }
 if ((VAR_41->params.bits & VAR_17) ||
     (VAR_33 && !(VAR_41->params.bits & VAR_14)) ||
     (VAR_34 && !VAR_33 &&
      (VAR_41->params.bits & VAR_14))) {
  FUNC_7(VAR_37, "reply unsupp: crc %d:%d:%d, m %d:%d\n",
       VAR_41->params.bits & VAR_14 ? 1 : 0,
       VAR_33, VAR_34,
       VAR_41->params.bits & VAR_17 ? 1 : 0, 0);

  FUNC_6(VAR_37, VAR_6, -VAR_1);

  return -VAR_3;
 }
 if (VAR_37->enhanced_rdma_conn_est) {
  struct mpa_v2_data *VAR_47;

  if (FUNC_0(VAR_41->params.bits) < VAR_13 ||
      !(VAR_41->params.bits & VAR_15)) {




   FUNC_7(VAR_37, "mpa reply error: vers %d, enhcd %d\n",
        FUNC_0(VAR_41->params.bits),
        VAR_41->params.bits & VAR_15 ?
         1 :
         0);

   FUNC_6(VAR_37, VAR_6,
          -VAR_2);
   return -VAR_3;
  }
  VAR_47 = (struct mpa_v2_data *)VAR_37->mpa.pdata;
  VAR_44 = FUNC_4(VAR_47->ird) & VAR_11;
  VAR_43 = FUNC_4(VAR_47->ord) & VAR_11;

  if (VAR_37->ird < VAR_43 &&
      (VAR_35 == 0 ||
       VAR_43 > VAR_37->sdev->attrs.max_ird)) {
   FUNC_7(VAR_37, "ird %d, rep_ord %d, max_ord %d\n",
        VAR_37->ird, VAR_43,
        VAR_37->sdev->attrs.max_ord);
   VAR_45 = 1;
  }
  if (VAR_37->ord > VAR_44 && VAR_35 == 0) {
   FUNC_7(VAR_37, "ord %d, rep_ird %d\n", VAR_37->ord,
        VAR_44);
   VAR_45 = 1;
  }




  VAR_37->ird = VAR_43;
  VAR_37->ord = VAR_44;

  if (VAR_45) {




   FUNC_8(VAR_40, VAR_32,
        VAR_10,
        VAR_7, 0);
   FUNC_13(VAR_40);
   VAR_42 = -VAR_4;
   goto out_err;
  }
  if (VAR_37->mpa.v2_ctrl_req.ird & VAR_19)
   VAR_46 =
    VAR_37->mpa.v2_ctrl_req.ord &
    (VAR_22 | VAR_21);




  if (VAR_46 != VAR_20) {
   if ((VAR_46 & VAR_47->ord) == 0) {




    FUNC_7(VAR_37,
         "rtr mode:  req %2x, got %2x\n",
         VAR_46,
         VAR_47->ord & (VAR_22 |
             VAR_21));

    FUNC_8(VAR_40, VAR_32,
         VAR_10,
         VAR_9,
         0);
    FUNC_13(VAR_40);
    VAR_42 = -VAR_5;
    goto out_err;
   }
   VAR_46 = VAR_47->ord & (VAR_22 |
        VAR_21);
  }
 }
 FUNC_3(&VAR_38, 0, sizeof(VAR_38));

 if (VAR_41->params.bits & VAR_14)
  VAR_38.flags = VAR_24;

 VAR_38.irq_size = VAR_37->ird;
 VAR_38.orq_size = VAR_37->ord;
 VAR_38.sk = VAR_37->sock;
 VAR_38.state = VAR_31;

 VAR_39 = VAR_29 | VAR_26 |
         VAR_28 | VAR_25 | VAR_27;


 FUNC_1(&VAR_40->state_lock);
 if (VAR_40->attrs.state > VAR_30) {
  VAR_42 = -VAR_3;
  FUNC_14(&VAR_40->state_lock);
  goto out_err;
 }
 VAR_42 = FUNC_9(VAR_40, &VAR_38, VAR_39);

 FUNC_11(VAR_37, VAR_40);

 FUNC_14(&VAR_40->state_lock);


 if (VAR_46 != VAR_20) {
  VAR_42 = FUNC_10(VAR_40, VAR_46);
  if (VAR_42)
   goto out_err;
 }
 if (!VAR_42) {
  VAR_42 = FUNC_6(VAR_37, VAR_6, 0);
  if (!VAR_42)
   VAR_37->state = VAR_23;

  return 0;
 }

out_err:
 FUNC_6(VAR_37, VAR_6, -VAR_3);

 return VAR_42;
}
