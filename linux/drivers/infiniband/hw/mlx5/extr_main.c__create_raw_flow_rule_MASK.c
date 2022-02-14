
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_ib_flow_prio {struct mlx5_flow_table* flow_table; int refcount; } ;
struct TYPE_2__ {void* match_params; } ;
struct mlx5_ib_flow_matcher {int mask_len; int match_criteria_enable; TYPE_1__ matcher_mask; } ;
struct mlx5_ib_flow_handler {struct mlx5_ib_dev* dev; struct mlx5_ib_flow_prio* prio; int rule; int list; } ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_flow_table {int dummy; } ;
struct mlx5_flow_context {int dummy; } ;
struct mlx5_flow_spec {struct mlx5_flow_context flow_context; int match_criteria_enable; int match_criteria; int match_value; } ;
struct mlx5_flow_destination {int dummy; } ;
struct mlx5_flow_act {int dummy; } ;


 int VAR_0 ;
 struct mlx5_ib_flow_handler* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mlx5_ib_flow_handler*) ;
 int FUNC_5 (struct mlx5_flow_spec*) ;
 struct mlx5_flow_spec* FUNC_6 (int,int ) ;
 struct mlx5_ib_flow_handler* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,void*,int) ;
 int FUNC_9 (struct mlx5_flow_table*,struct mlx5_flow_spec*,struct mlx5_flow_act*,struct mlx5_flow_destination*,int) ;

__attribute__((used)) static struct mlx5_ib_flow_handler *
FUNC_10(struct mlx5_ib_dev *VAR_2,
        struct mlx5_ib_flow_prio *VAR_3,
        struct mlx5_flow_destination *VAR_4,
        struct mlx5_ib_flow_matcher *VAR_5,
        struct mlx5_flow_context *VAR_6,
        struct mlx5_flow_act *VAR_7,
        void *VAR_8, int VAR_9,
        int VAR_10)
{
 struct mlx5_ib_flow_handler *VAR_11;
 struct mlx5_flow_spec *VAR_12;
 struct mlx5_flow_table *VAR_13 = VAR_3->flow_table;
 int VAR_14 = 0;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_1);
 VAR_11 = FUNC_7(sizeof(*VAR_11), VAR_1);
 if (!VAR_11 || !VAR_12) {
  VAR_14 = -VAR_0;
  goto free;
 }

 FUNC_1(&VAR_11->list);

 FUNC_8(VAR_12->match_value, VAR_8, VAR_9);
 FUNC_8(VAR_12->match_criteria, VAR_5->matcher_mask.match_params,
        VAR_5->mask_len);
 VAR_12->match_criteria_enable = VAR_5->match_criteria_enable;
 VAR_12->flow_context = *VAR_6;

 VAR_11->rule = FUNC_9(VAR_13, VAR_12,
         VAR_7, VAR_4, VAR_10);

 if (FUNC_2(VAR_11->rule)) {
  VAR_14 = FUNC_3(VAR_11->rule);
  goto free;
 }

 VAR_3->refcount++;
 VAR_11->prio = VAR_3;
 VAR_11->dev = VAR_2;
 VAR_3->flow_table = VAR_13;

free:
 if (VAR_14)
  FUNC_4(VAR_11);
 FUNC_5(VAR_12);
 return VAR_14 ? FUNC_0(VAR_14) : VAR_11;
}
