
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int wrid; } ;
struct TYPE_3__ {int wr_data; int wrid; int w_list; int wqe_head; } ;
struct mlx5_ib_qp {int buf; int db; TYPE_2__ rq; TYPE_1__ sq; } ;
struct mlx5_ib_dev {int mdev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_0, struct mlx5_ib_qp *VAR_1)
{
 FUNC_0(VAR_1->sq.wqe_head);
 FUNC_0(VAR_1->sq.w_list);
 FUNC_0(VAR_1->sq.wrid);
 FUNC_0(VAR_1->sq.wr_data);
 FUNC_0(VAR_1->rq.wrid);
 FUNC_1(VAR_0->mdev, &VAR_1->db);
 FUNC_2(VAR_0->mdev, &VAR_1->buf);
}
