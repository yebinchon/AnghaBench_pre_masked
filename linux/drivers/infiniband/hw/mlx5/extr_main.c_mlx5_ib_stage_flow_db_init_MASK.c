
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_1__* flow_db; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct mlx5_ib_dev *VAR_2)
{
 VAR_2->flow_db = FUNC_0(sizeof(*VAR_2->flow_db), VAR_1);

 if (!VAR_2->flow_db)
  return -VAR_0;

 FUNC_1(&VAR_2->flow_db->lock);

 return 0;
}
