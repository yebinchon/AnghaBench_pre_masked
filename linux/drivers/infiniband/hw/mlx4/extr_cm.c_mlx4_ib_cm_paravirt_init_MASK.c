
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pv_id_table; int sl_id_map; int cm_list; int id_map_lock; } ;
struct mlx4_ib_dev {TYPE_1__ sriov; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

void FUNC_3(struct mlx4_ib_dev *VAR_2)
{
 FUNC_1(&VAR_2->sriov.id_map_lock);
 FUNC_0(&VAR_2->sriov.cm_list);
 VAR_2->sriov.sl_id_map = VAR_0;
 FUNC_2(&VAR_2->sriov.pv_id_table, VAR_1);
}
