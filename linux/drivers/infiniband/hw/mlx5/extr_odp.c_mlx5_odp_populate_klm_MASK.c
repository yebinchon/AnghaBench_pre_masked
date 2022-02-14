
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_klm {void* key; void* bcount; scalar_t__ va; } ;
struct TYPE_5__ {size_t lkey; struct ib_pd* pd; } ;
struct mlx5_ib_mr {TYPE_2__ ibmr; TYPE_1__* dev; int umem; } ;
struct mlx5_ib_dev {size_t null_mkey; } ;
struct ib_umem_odp {struct mlx5_ib_mr* private; } ;
struct ib_pd {int device; } ;
struct TYPE_6__ {int umem_mutex; } ;
struct TYPE_4__ {int mr_srcu; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (size_t) ;
 unsigned long FUNC_2 (struct ib_umem_odp*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mlx5_ib_dev*,char*,int,unsigned long,int ) ;
 struct ib_umem_odp* FUNC_5 (size_t,size_t,struct mlx5_ib_mr*) ;
 struct ib_umem_odp* FUNC_6 (struct ib_umem_odp*) ;
 TYPE_3__* FUNC_7 (int ) ;
 struct mlx5_ib_dev* FUNC_8 (int ) ;

void FUNC_9(struct mlx5_klm *VAR_2, size_t VAR_3,
      size_t VAR_4, struct mlx5_ib_mr *VAR_5, int VAR_6)
{
 struct ib_pd *VAR_7 = VAR_5->ibmr.pd;
 struct mlx5_ib_dev *VAR_8 = FUNC_8(VAR_7->device);
 struct ib_umem_odp *VAR_9;
 unsigned long VAR_10;
 int VAR_11;

 if (VAR_6 & VAR_0) {
  for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_2++) {
   VAR_2->bcount = FUNC_1(VAR_1);
   VAR_2->key = FUNC_1(VAR_8->null_mkey);
   VAR_2->va = 0;
  }
  return;
 }
 FUNC_3(&FUNC_7(VAR_5->umem)->umem_mutex);
 FUNC_3(&VAR_5->dev->mr_srcu);

 VAR_9 = FUNC_5(VAR_3 * VAR_1,
    VAR_4 * VAR_1, VAR_5);

 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++, VAR_2++) {
  VAR_2->bcount = FUNC_1(VAR_1);
  VAR_10 = (VAR_3 + VAR_11) * VAR_1;
  if (VAR_9 && FUNC_2(VAR_9) == VAR_10) {
   struct mlx5_ib_mr *VAR_12 = VAR_9->private;

   VAR_2->key = FUNC_1(VAR_12->ibmr.lkey);
   VAR_9 = FUNC_6(VAR_9);
  } else {
   VAR_2->key = FUNC_1(VAR_8->null_mkey);
  }
  FUNC_4(VAR_8, "[%d] va %lx key %x\n",
       VAR_11, VAR_10, FUNC_0(VAR_2->key));
 }
}
