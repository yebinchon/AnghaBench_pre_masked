
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_sq {int dummy; } ;
struct mlx5_ib_rq {int dummy; } ;
struct mlx5_ib_raw_packet_qp {struct mlx5_ib_rq rq; struct mlx5_ib_sq sq; } ;
struct TYPE_4__ {scalar_t__ wqe_cnt; } ;
struct TYPE_3__ {scalar_t__ wqe_cnt; } ;
struct mlx5_ib_qp {TYPE_2__ rq; TYPE_1__ sq; struct mlx5_ib_raw_packet_qp raw_packet_qp; } ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_ib_dev*,struct mlx5_ib_rq*,int *) ;
 int FUNC_1 (struct mlx5_ib_dev*,struct mlx5_ib_sq*,int *) ;
 int FUNC_2 (int ,int ,struct mlx5_ib_qp*,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_2,
         struct mlx5_ib_qp *VAR_3,
         u8 *VAR_4)
{
 struct mlx5_ib_raw_packet_qp *VAR_5 = &VAR_3->raw_packet_qp;
 struct mlx5_ib_sq *VAR_6 = &VAR_5->sq;
 struct mlx5_ib_rq *VAR_7 = &VAR_5->rq;
 int VAR_8;
 u8 VAR_9 = VAR_1;
 u8 VAR_10 = VAR_0;

 if (VAR_3->sq.wqe_cnt) {
  VAR_8 = FUNC_1(VAR_2, VAR_6, &VAR_9);
  if (VAR_8)
   return VAR_8;
 }

 if (VAR_3->rq.wqe_cnt) {
  VAR_8 = FUNC_0(VAR_2, VAR_7, &VAR_10);
  if (VAR_8)
   return VAR_8;
 }

 return FUNC_2(VAR_9, VAR_10, VAR_3,
          VAR_4);
}
