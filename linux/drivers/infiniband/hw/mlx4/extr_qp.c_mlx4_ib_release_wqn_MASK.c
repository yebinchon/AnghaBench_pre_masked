
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_wqn_range {int dirty; int list; int size; int base_wqn; int refcount; } ;
struct TYPE_2__ {int device; } ;
struct mlx4_ib_ucontext {int wqn_ranges_mutex; TYPE_1__ ibucontext; } ;
struct mlx4_ib_qp {struct mlx4_wqn_range* wqn_range; } ;
struct mlx4_ib_dev {int dev; } ;


 int FUNC_0 (struct mlx4_wqn_range*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mlx4_ib_dev* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mlx4_ib_ucontext *VAR_0,
    struct mlx4_ib_qp *VAR_1, bool VAR_2)
{
 struct mlx4_ib_dev *VAR_3 = FUNC_5(VAR_0->ibucontext.device);
 struct mlx4_wqn_range *VAR_4;

 FUNC_3(&VAR_0->wqn_ranges_mutex);

 VAR_4 = VAR_1->wqn_range;

 VAR_4->refcount--;
 if (!VAR_4->refcount) {
  FUNC_2(VAR_3->dev, VAR_4->base_wqn,
          VAR_4->size);
  FUNC_1(&VAR_4->list);
  FUNC_0(VAR_4);
 } else if (VAR_2) {





  VAR_4->dirty = 1;
 }

 FUNC_4(&VAR_0->wqn_ranges_mutex);
}
