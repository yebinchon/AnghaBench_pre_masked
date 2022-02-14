
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umr_common {int sem; int qp; } ;
struct TYPE_2__ {int * wr_cqe; } ;
struct mlx5_umr_wr {TYPE_1__ wr; } ;
struct mlx5_ib_umr_context {int status; int done; int cqe; } ;
struct mlx5_ib_dev {struct umr_common umrc; } ;
struct ib_send_wr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,struct ib_send_wr const**) ;
 int FUNC_2 (struct mlx5_ib_umr_context*) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_2,
      struct mlx5_umr_wr *VAR_3)
{
 struct umr_common *VAR_4 = &VAR_2->umrc;
 const struct ib_send_wr *VAR_5;
 int VAR_6;
 struct mlx5_ib_umr_context VAR_7;

 FUNC_2(&VAR_7);
 VAR_3->wr.wr_cqe = &VAR_7.cqe;

 FUNC_0(&VAR_4->sem);
 VAR_6 = FUNC_1(VAR_4->qp, &VAR_3->wr, &VAR_5);
 if (VAR_6) {
  FUNC_3(VAR_2, "UMR post send failed, err %d\n", VAR_6);
 } else {
  FUNC_5(&VAR_7.done);
  if (VAR_7.status != VAR_1) {
   FUNC_3(VAR_2, "reg umr failed (%u)\n",
         VAR_7.status);
   VAR_6 = -VAR_0;
  }
 }
 FUNC_4(&VAR_4->sem);
 return VAR_6;
}
