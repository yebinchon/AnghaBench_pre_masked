
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_flow {TYPE_2__* reg_id; } ;
struct mlx4_ib_dev {int dev; } ;
struct ib_flow {TYPE_1__* qp; } ;
struct TYPE_4__ {scalar_t__ mirror; scalar_t__ id; } ;
struct TYPE_3__ {int device; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct mlx4_ib_flow*) ;
 struct mlx4_ib_dev* FUNC_3 (int ) ;
 struct mlx4_ib_flow* FUNC_4 (struct ib_flow*) ;

__attribute__((used)) static int FUNC_5(struct ib_flow *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 int VAR_3 = 0;
 struct mlx4_ib_dev *VAR_4 = FUNC_3(VAR_0->qp->device);
 struct mlx4_ib_flow *VAR_5 = FUNC_4(VAR_0);

 while (VAR_3 < FUNC_0(VAR_5->reg_id) && VAR_5->reg_id[VAR_3].id) {
  VAR_1 = FUNC_1(VAR_4->dev, VAR_5->reg_id[VAR_3].id);
  if (VAR_1)
   VAR_2 = VAR_1;
  if (VAR_5->reg_id[VAR_3].mirror) {
   VAR_1 = FUNC_1(VAR_4->dev,
           VAR_5->reg_id[VAR_3].mirror);
   if (VAR_1)
    VAR_2 = VAR_1;
  }
  VAR_3++;
 }

 FUNC_2(VAR_5);
 return VAR_2;
}
