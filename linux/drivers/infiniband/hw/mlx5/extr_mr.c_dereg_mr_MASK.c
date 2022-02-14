
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_mr {int npages; int allocated_from_cache; int num_pending_prefetch; int live; struct ib_umem* umem; } ;
struct mlx5_ib_dev {TYPE_2__* mdev; int mr_srcu; } ;
struct ib_umem_odp {int is_implicit_odp; } ;
struct ib_umem {int dummy; } ;
struct TYPE_3__ {int reg_pages; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ib_umem_odp*) ;
 int FUNC_7 (struct ib_umem_odp*) ;
 int FUNC_8 (struct ib_umem*) ;
 int FUNC_9 (struct ib_umem_odp*) ;
 scalar_t__ FUNC_10 (struct mlx5_ib_mr*) ;
 int FUNC_11 (struct mlx5_ib_mr*) ;
 int FUNC_12 (struct mlx5_ib_mr*) ;
 int FUNC_13 (struct ib_umem_odp*,int ,int ) ;
 int FUNC_14 (struct mlx5_ib_dev*,struct mlx5_ib_mr*) ;
 int FUNC_15 (int *) ;
 int VAR_0 ;
 struct ib_umem_odp* FUNC_16 (struct ib_umem*) ;

__attribute__((used)) static void FUNC_17(struct mlx5_ib_dev *VAR_1, struct mlx5_ib_mr *VAR_2)
{
 int VAR_3 = VAR_2->npages;
 struct ib_umem *VAR_4 = VAR_2->umem;

 if (FUNC_10(VAR_2)) {
  struct ib_umem_odp *VAR_5 = FUNC_16(VAR_4);




  FUNC_1(VAR_2->live, 0);


  FUNC_15(&VAR_1->mr_srcu);


  if (FUNC_2(&VAR_2->num_pending_prefetch))
   FUNC_5(VAR_0);
  FUNC_0(FUNC_2(&VAR_2->num_pending_prefetch));


  if (!VAR_5->is_implicit_odp)
   FUNC_13(VAR_5,
       FUNC_9(VAR_5),
       FUNC_6(VAR_5));
  else
   FUNC_12(VAR_2);





  FUNC_7(VAR_5);
  FUNC_3(VAR_3, &VAR_1->mdev->priv.reg_pages);


  VAR_4 = ((void*)0);
 }

 FUNC_4(VAR_1, VAR_2);





 FUNC_14(VAR_1, VAR_2);
 FUNC_8(VAR_4);
 if (VAR_4)
  FUNC_3(VAR_3, &VAR_1->mdev->priv.reg_pages);

 if (!VAR_2->allocated_from_cache)
  FUNC_11(VAR_2);
}
