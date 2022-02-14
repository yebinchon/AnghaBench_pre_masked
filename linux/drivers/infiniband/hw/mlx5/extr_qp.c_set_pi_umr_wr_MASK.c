
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
struct mlx5_wqe_umr_ctrl_seg {int dummy; } ;
struct mlx5_mkey_seg {int dummy; } ;
struct mlx5_klm {int dummy; } ;
struct TYPE_6__ {int integrity_en; } ;
struct mlx5_ib_qp {int sq; TYPE_1__ ibqp; } ;
struct TYPE_7__ {int length; struct ib_sig_attrs* sig_attrs; } ;
struct mlx5_ib_mr {TYPE_4__* sig; TYPE_2__ ibmr; struct mlx5_ib_mr* pi_mr; } ;
struct TYPE_8__ {scalar_t__ sig_type; } ;
struct ib_sig_attrs {TYPE_3__ mem; } ;
struct ib_send_wr {scalar_t__ num_sge; } ;
struct ib_reg_wr {int access; int mr; } ;
struct TYPE_10__ {int pdn; } ;
struct TYPE_9__ {int sig_status_checked; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_5__* FUNC_0 (struct mlx5_ib_qp*) ;
 int FUNC_1 (int *,void**,int,void**) ;
 struct ib_reg_wr* FUNC_2 (struct ib_send_wr const*) ;
 int FUNC_3 (struct ib_send_wr const*,int ,struct ib_sig_attrs*,struct mlx5_ib_qp*,void**,int*,void**) ;
 int FUNC_4 (void*,int ,int,int,int,int) ;
 int FUNC_5 (void*,int) ;
 struct mlx5_ib_mr* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(const struct ib_send_wr *VAR_3,
    struct mlx5_ib_qp *VAR_4, void **VAR_5, int *VAR_6,
    void **VAR_7)
{
 const struct ib_reg_wr *VAR_8 = FUNC_2(VAR_3);
 struct mlx5_ib_mr *VAR_9 = FUNC_6(VAR_8->mr);
 struct mlx5_ib_mr *VAR_10 = VAR_9->pi_mr;
 struct ib_sig_attrs *VAR_11 = VAR_9->ibmr.sig_attrs;
 u32 VAR_12 = FUNC_0(VAR_4)->pdn;
 u32 VAR_13;
 int VAR_14, VAR_15;

 if (FUNC_7(VAR_3->num_sge != 0) ||
     FUNC_7(VAR_8->access & VAR_1) ||
     FUNC_7(!VAR_9->sig) || FUNC_7(!VAR_4->ibqp.integrity_en) ||
     FUNC_7(!VAR_9->sig->sig_status_checked))
  return -VAR_0;


 VAR_14 = VAR_10->ibmr.length;






 if (VAR_11->mem.sig_type != VAR_2)
  VAR_13 = 0x30;
 else
  VAR_13 = sizeof(struct mlx5_klm);

 FUNC_5(*VAR_5, VAR_13);
 *VAR_5 += sizeof(struct mlx5_wqe_umr_ctrl_seg);
 *VAR_6 += sizeof(struct mlx5_wqe_umr_ctrl_seg) / 16;
 FUNC_1(&VAR_4->sq, VAR_5, *VAR_6, VAR_7);

 FUNC_4(*VAR_5, VAR_8->mr, VAR_8->access, VAR_13, VAR_14,
        VAR_12);
 *VAR_5 += sizeof(struct mlx5_mkey_seg);
 *VAR_6 += sizeof(struct mlx5_mkey_seg) / 16;
 FUNC_1(&VAR_4->sq, VAR_5, *VAR_6, VAR_7);

 VAR_15 = FUNC_3(VAR_3, VAR_8->mr, VAR_11, VAR_4, VAR_5, VAR_6,
       VAR_7);
 if (VAR_15)
  return VAR_15;

 VAR_9->sig->sig_status_checked = 0;
 return 0;
}
