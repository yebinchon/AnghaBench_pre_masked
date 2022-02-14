
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct mlx5_frag_buf {int frags; } ;
struct mlx5_ib_cq_buf {int cqe_size; int nent; int fbc; struct mlx5_frag_buf frag_buf; } ;
struct TYPE_3__ {int numa_node; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,struct mlx5_frag_buf*,int ) ;
 int FUNC_2 (int ,int,int,int *) ;

__attribute__((used)) static int FUNC_3(struct mlx5_ib_dev *VAR_0,
        struct mlx5_ib_cq_buf *VAR_1,
        int VAR_2,
        int VAR_3)
{
 struct mlx5_frag_buf *VAR_4 = &VAR_1->frag_buf;
 u8 VAR_5 = 6 + (VAR_3 == 128 ? 1 : 0);
 u8 VAR_6 = FUNC_0(VAR_3);
 int VAR_7;

 VAR_7 = FUNC_1(VAR_0->mdev,
           VAR_2 * VAR_3,
           VAR_4,
           VAR_0->mdev->priv.numa_node);
 if (VAR_7)
  return VAR_7;

 FUNC_2(VAR_4->frags, VAR_5, VAR_6, &VAR_1->fbc);

 VAR_1->cqe_size = VAR_3;
 VAR_1->nent = VAR_2;

 return 0;
}
