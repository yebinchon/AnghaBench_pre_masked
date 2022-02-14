
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int * done; } ;
struct ib_wc {int wr_id; int pkey_index; } ;
struct mlx5_ib_gsi_wr {int completed; TYPE_4__ cqe; struct ib_wc wc; } ;
struct TYPE_6__ {size_t max_send_wr; } ;
struct mlx5_ib_gsi_qp {size_t outstanding_pi; size_t outstanding_ci; TYPE_2__ cap; struct mlx5_ib_gsi_wr* outstanding_wrs; TYPE_1__* rx_qp; } ;
struct mlx5_ib_dev {int dummy; } ;
struct TYPE_7__ {TYPE_4__* wr_cqe; int wr_id; } ;
struct ib_ud_wr {TYPE_3__ wr; int pkey_index; } ;
struct TYPE_5__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ib_wc*,int ,int) ;
 int FUNC_1 (struct mlx5_ib_dev*,char*) ;
 struct mlx5_ib_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_gsi_qp *VAR_2,
          struct ib_ud_wr *VAR_3, struct ib_wc *VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_2(VAR_2->rx_qp->device);
 struct mlx5_ib_gsi_wr *VAR_6;

 if (VAR_2->outstanding_pi == VAR_2->outstanding_ci + VAR_2->cap.max_send_wr) {
  FUNC_1(VAR_5, "no available GSI work request.\n");
  return -VAR_0;
 }

 VAR_6 = &VAR_2->outstanding_wrs[VAR_2->outstanding_pi %
           VAR_2->cap.max_send_wr];
 VAR_2->outstanding_pi++;

 if (!VAR_4) {
  FUNC_0(&VAR_6->wc, 0, sizeof(VAR_6->wc));
  VAR_6->wc.pkey_index = VAR_3->pkey_index;
  VAR_6->wc.wr_id = VAR_3->wr.wr_id;
 } else {
  VAR_6->wc = *VAR_4;
  VAR_6->completed = 1;
 }

 VAR_6->cqe.done = &VAR_1;
 VAR_3->wr.wr_cqe = &VAR_6->cqe;

 return 0;
}
