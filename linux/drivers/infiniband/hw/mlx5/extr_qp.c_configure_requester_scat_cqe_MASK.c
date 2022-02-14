
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_ib_dev {int mdev; } ;
struct mlx5_ib_create_qp {int flags; } ;
struct ib_qp_init_attr {int qp_type; scalar_t__ sq_sig_type; int send_cq; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (void*,void*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct mlx5_ib_dev *VAR_9,
      struct ib_qp_init_attr *VAR_10,
      struct mlx5_ib_create_qp *VAR_11,
      void *VAR_12)
{
 enum ib_qp_type VAR_13 = VAR_10->qp_type;
 int VAR_14;
 bool VAR_15 = 0;

 if (VAR_13 == VAR_0 || VAR_13 == VAR_1)
  return;

 if (VAR_11)
  VAR_15 = VAR_11->flags & VAR_4;

 if (!VAR_15 && VAR_10->sq_sig_type != VAR_2)
  return;

 VAR_14 = FUNC_2(VAR_10->send_cq);
 if (VAR_14 == 128) {
  FUNC_1(VAR_12, VAR_12, VAR_7, VAR_6);
  return;
 }

 if (VAR_10->qp_type != VAR_3 ||
     FUNC_0(VAR_9->mdev, VAR_8))
  FUNC_1(VAR_12, VAR_12, VAR_7, VAR_5);
}
