
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_dev {TYPE_5__* mdev; } ;
struct TYPE_17__ {scalar_t__ db; } ;
struct TYPE_15__ {int npages; scalar_t__ page_shift; } ;
struct TYPE_18__ {TYPE_4__ frag_buf; } ;
struct TYPE_12__ {int cqe_sz; scalar_t__ arm_db; scalar_t__ set_ci_db; } ;
struct mlx5_ib_cq {TYPE_6__ db; TYPE_9__ buf; TYPE_1__ mcq; } ;
typedef int __be64 ;
struct TYPE_14__ {TYPE_2__* uar; } ;
struct TYPE_16__ {TYPE_3__ priv; } ;
struct TYPE_13__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (void*,void*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_dev*,TYPE_9__*,int,int) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_ib_dev*,TYPE_9__*) ;
 int FUNC_6 (struct mlx5_ib_cq*,TYPE_9__*) ;
 int * FUNC_7 (int,int ) ;
 int VAR_5 ;
 int FUNC_8 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_10 (TYPE_4__*,int *) ;

__attribute__((used)) static int FUNC_11(struct mlx5_ib_dev *VAR_6, struct mlx5_ib_cq *VAR_7,
       int VAR_8, int VAR_9,
       u32 **VAR_10, int *VAR_11, int *VAR_12)
{
 __be64 *VAR_13;
 void *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_8(VAR_6->mdev, &VAR_7->db);
 if (VAR_15)
  return VAR_15;

 VAR_7->mcq.set_ci_db = VAR_7->db.db;
 VAR_7->mcq.arm_db = VAR_7->db.db + 1;
 VAR_7->mcq.cqe_sz = VAR_9;

 VAR_15 = FUNC_4(VAR_6, &VAR_7->buf, VAR_8, VAR_9);
 if (VAR_15)
  goto err_db;

 FUNC_6(VAR_7, &VAR_7->buf);

 *VAR_12 = FUNC_3(VAR_4) +
   FUNC_1(VAR_4, VAR_13[0]) *
   VAR_7->buf.frag_buf.npages;
 *VAR_10 = FUNC_7(*VAR_12, VAR_1);
 if (!*VAR_10) {
  VAR_15 = -VAR_0;
  goto err_buf;
 }

 VAR_13 = (__be64 *)FUNC_0(VAR_4, *VAR_10, VAR_13);
 FUNC_10(&VAR_7->buf.frag_buf, VAR_13);

 VAR_14 = FUNC_0(VAR_4, *VAR_10, VAR_3);
 FUNC_2(VAR_14, VAR_14, VAR_5,
   VAR_7->buf.frag_buf.page_shift -
   VAR_2);

 *VAR_11 = VAR_6->mdev->priv.uar->index;

 return 0;

err_buf:
 FUNC_5(VAR_6, &VAR_7->buf);

err_db:
 FUNC_9(VAR_6->mdev, &VAR_7->db);
 return VAR_15;
}
