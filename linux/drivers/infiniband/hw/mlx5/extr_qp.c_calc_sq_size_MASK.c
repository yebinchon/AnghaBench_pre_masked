
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_wqe_inline_seg {int dummy; } ;
struct TYPE_4__ {int wqe_cnt; int max_post; int max_gs; int wqe_shift; } ;
struct mlx5_ib_qp {int max_inline_data; TYPE_2__ sq; } ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_3__ {int max_send_wr; int max_inline_data; int max_send_sge; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct ib_qp_init_attr*) ;
 int FUNC_2 (struct ib_qp_init_attr*,int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,int,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct ib_qp_init_attr*) ;

__attribute__((used)) static int FUNC_7(struct mlx5_ib_dev *VAR_5, struct ib_qp_init_attr *VAR_6,
   struct mlx5_ib_qp *VAR_7)
{
 int VAR_8;
 int VAR_9;

 if (!VAR_6->cap.max_send_wr)
  return 0;

 VAR_8 = FUNC_1(VAR_6);
 FUNC_4(VAR_5, "wqe_size %d\n", VAR_8);
 if (VAR_8 < 0)
  return VAR_8;

 if (VAR_8 > FUNC_0(VAR_5->mdev, VAR_4)) {
  FUNC_4(VAR_5, "wqe_size(%d) > max_sq_desc_sz(%d)\n",
       VAR_8, FUNC_0(VAR_5->mdev, VAR_4));
  return -VAR_0;
 }

 VAR_7->max_inline_data = VAR_8 - FUNC_6(VAR_6) -
         sizeof(struct mlx5_wqe_inline_seg);
 VAR_6->cap.max_inline_data = VAR_7->max_inline_data;

 VAR_9 = FUNC_5(VAR_6->cap.max_send_wr * VAR_8);
 VAR_7->sq.wqe_cnt = VAR_9 / VAR_2;
 if (VAR_7->sq.wqe_cnt > (1 << FUNC_0(VAR_5->mdev, VAR_3))) {
  FUNC_4(VAR_5, "send queue size (%d * %d / %d -> %d) exceeds limits(%d)\n",
       VAR_6->cap.max_send_wr, VAR_8, VAR_2,
       VAR_7->sq.wqe_cnt,
       1 << FUNC_0(VAR_5->mdev, VAR_3));
  return -VAR_1;
 }
 VAR_7->sq.wqe_shift = FUNC_3(VAR_2);
 VAR_7->sq.max_gs = FUNC_2(VAR_6, VAR_8);
 if (VAR_7->sq.max_gs < VAR_6->cap.max_send_sge)
  return -VAR_1;

 VAR_6->cap.max_send_sge = VAR_7->sq.max_gs;
 VAR_7->sq.max_post = VAR_9 / VAR_8;
 VAR_6->cap.max_send_wr = VAR_7->sq.max_post;

 return VAR_9;
}
