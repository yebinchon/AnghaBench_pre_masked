
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_qp {int port; TYPE_2__* counter_index; } ;
struct mlx4_ib_dev {TYPE_1__* counters_table; int dev; } ;
struct TYPE_4__ {int list; int index; } ;
struct TYPE_3__ {int mutex; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mlx4_ib_dev *VAR_0,
        struct mlx4_ib_qp *VAR_1)
{
 FUNC_3(&VAR_0->counters_table[VAR_1->port - 1].mutex);
 FUNC_2(VAR_0->dev, VAR_1->counter_index->index);
 FUNC_1(&VAR_1->counter_index->list);
 FUNC_4(&VAR_0->counters_table[VAR_1->port - 1].mutex);

 FUNC_0(VAR_1->counter_index);
 VAR_1->counter_index = ((void*)0);
}
