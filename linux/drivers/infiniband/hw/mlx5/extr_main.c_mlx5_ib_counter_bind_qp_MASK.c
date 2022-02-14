
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rdma_counter {int id; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_qp {int device; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct ib_qp*,struct rdma_counter*) ;
 struct mlx5_ib_dev* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct rdma_counter *VAR_1,
       struct ib_qp *VAR_2)
{
 struct mlx5_ib_dev *VAR_3 = FUNC_3(VAR_2->device);
 u16 VAR_4 = 0;
 int VAR_5;

 if (!VAR_1->id) {
  VAR_5 = FUNC_0(VAR_3->mdev,
            &VAR_4,
            VAR_0);
  if (VAR_5)
   return VAR_5;
  VAR_1->id = VAR_4;
 }

 VAR_5 = FUNC_2(VAR_2, VAR_1);
 if (VAR_5)
  goto fail_set_counter;

 return 0;

fail_set_counter:
 FUNC_1(VAR_3->mdev, VAR_4);
 VAR_1->id = 0;

 return VAR_5;
}
