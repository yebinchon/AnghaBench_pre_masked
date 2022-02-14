
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cm_timewait_info {scalar_t__ inserted_remote_qp; int remote_qp_node; scalar_t__ inserted_remote_id; int remote_id_node; } ;
struct TYPE_2__ {int remote_qp_table; int remote_id_table; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void FUNC_1(struct cm_timewait_info *VAR_1)
{
 if (VAR_1->inserted_remote_id) {
  FUNC_0(&VAR_1->remote_id_node, &VAR_0.remote_id_table);
  VAR_1->inserted_remote_id = 0;
 }

 if (VAR_1->inserted_remote_qp) {
  FUNC_0(&VAR_1->remote_qp_node, &VAR_0.remote_qp_table);
  VAR_1->inserted_remote_qp = 0;
 }
}
