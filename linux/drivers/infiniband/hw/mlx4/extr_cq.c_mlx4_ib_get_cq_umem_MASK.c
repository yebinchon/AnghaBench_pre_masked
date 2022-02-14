
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
struct mlx4_ib_dev {TYPE_2__* dev; } ;
struct mlx4_ib_cq_buf {int mtt; } ;
struct ib_umem {int dummy; } ;
struct ib_udata {int dummy; } ;
struct TYPE_4__ {int cqe_size; } ;
struct TYPE_5__ {TYPE_1__ caps; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ib_umem*) ;
 int FUNC_1 (struct ib_umem*) ;
 struct ib_umem* FUNC_2 (struct ib_udata*,int ,int,int ,int) ;
 int FUNC_3 (struct ib_umem*) ;
 int FUNC_4 (struct ib_umem*) ;
 int FUNC_5 (struct ib_umem*,int ,int*) ;
 int FUNC_6 (struct mlx4_ib_dev*,int *,struct ib_umem*) ;
 int FUNC_7 (TYPE_2__*,int *) ;
 int FUNC_8 (TYPE_2__*,int,int,int *) ;

__attribute__((used)) static int FUNC_9(struct mlx4_ib_dev *VAR_1, struct ib_udata *VAR_2,
          struct mlx4_ib_cq_buf *VAR_3,
          struct ib_umem **VAR_4, u64 VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = VAR_1->dev->caps.cqe_size;
 int VAR_9;
 int VAR_10;

 *VAR_4 = FUNC_2(VAR_2, VAR_5, VAR_6 * VAR_8,
       VAR_0, 1);
 if (FUNC_0(*VAR_4))
  return FUNC_1(*VAR_4);

 VAR_10 = FUNC_3(*VAR_4);
 VAR_9 = FUNC_5(*VAR_4, 0, &VAR_10);
 VAR_7 = FUNC_8(VAR_1->dev, VAR_10, VAR_9, &VAR_3->mtt);

 if (VAR_7)
  goto err_buf;

 VAR_7 = FUNC_6(VAR_1, &VAR_3->mtt, *VAR_4);
 if (VAR_7)
  goto err_mtt;

 return 0;

err_mtt:
 FUNC_7(VAR_1->dev, &VAR_3->mtt);

err_buf:
 FUNC_4(*VAR_4);

 return VAR_7;
}
