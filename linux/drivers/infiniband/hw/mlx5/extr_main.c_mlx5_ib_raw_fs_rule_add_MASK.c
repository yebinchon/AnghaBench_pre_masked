
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlx5_ib_flow_prio {struct mlx5_ib_flow_matcher* flow_matcher; } ;
struct mlx5_ib_flow_matcher {scalar_t__ flow_type; scalar_t__ priority; int usecnt; } ;
struct mlx5_ib_flow_handler {struct mlx5_ib_flow_matcher* flow_matcher; } ;
struct mlx5_ib_dev {TYPE_1__* flow_db; } ;
struct mlx5_flow_destination {int type; int tir_num; int ft_num; int counter_id; } ;
struct mlx5_flow_context {int dummy; } ;
struct mlx5_flow_act {int action; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mlx5_ib_flow_prio* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct mlx5_ib_flow_prio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (struct mlx5_ib_flow_prio*) ;
 struct mlx5_ib_flow_prio* FUNC_3 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,struct mlx5_flow_destination*,struct mlx5_ib_flow_matcher*,struct mlx5_flow_context*,struct mlx5_flow_act*,void*,int,int) ;
 struct mlx5_ib_flow_prio* FUNC_4 (struct mlx5_ib_dev*,struct mlx5_ib_flow_matcher*,int) ;
 int FUNC_5 (int *) ;
 struct mlx5_flow_destination* FUNC_6 (int,int,int ) ;
 int FUNC_7 (struct mlx5_flow_destination*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct mlx5_ib_dev*,struct mlx5_ib_flow_prio*,int) ;
 int FUNC_11 (struct mlx5_ib_flow_matcher*,void*) ;

struct mlx5_ib_flow_handler *
FUNC_12(struct mlx5_ib_dev *VAR_13,
   struct mlx5_ib_flow_matcher *VAR_14,
   struct mlx5_flow_context *VAR_15,
   struct mlx5_flow_act *VAR_16,
   u32 VAR_17,
   void *VAR_18, int VAR_19, int VAR_20,
   int VAR_21)
{
 struct mlx5_flow_destination *VAR_22;
 struct mlx5_ib_flow_prio *VAR_23;
 struct mlx5_ib_flow_handler *VAR_24;
 int VAR_25 = 0;
 bool VAR_26;
 int VAR_27;

 if (VAR_14->flow_type != VAR_12)
  return FUNC_0(-VAR_1);

 if (VAR_14->priority > VAR_11)
  return FUNC_0(-VAR_0);

 VAR_22 = FUNC_6(2, sizeof(*VAR_22), VAR_2);
 if (!VAR_22)
  return FUNC_0(-VAR_0);

 VAR_26 = FUNC_11(VAR_14, VAR_18);
 FUNC_8(&VAR_13->flow_db->lock);

 VAR_23 = FUNC_4(VAR_13, VAR_14, VAR_26);
 if (FUNC_1(VAR_23)) {
  VAR_27 = FUNC_2(VAR_23);
  goto unlock;
 }

 if (VAR_21 == VAR_10) {
  VAR_22[VAR_25].type = VAR_21;
  VAR_22[VAR_25].tir_num = VAR_20;
  VAR_16->action |= VAR_5;
 } else if (VAR_21 == VAR_7) {
  VAR_22[VAR_25].type = VAR_8;
  VAR_22[VAR_25].ft_num = VAR_20;
  VAR_16->action |= VAR_5;
 } else {
  VAR_22[VAR_25].type = VAR_9;
  VAR_16->action |= VAR_3;
 }

 VAR_25++;

 if (VAR_16->action & VAR_4) {
  VAR_22[VAR_25].type = VAR_6;
  VAR_22[VAR_25].counter_id = VAR_17;
  VAR_25++;
 }

 VAR_24 = FUNC_3(VAR_13, VAR_23, VAR_22, VAR_14,
     VAR_15, VAR_16,
     VAR_18, VAR_19, VAR_25);

 if (FUNC_1(VAR_24)) {
  VAR_27 = FUNC_2(VAR_24);
  goto destroy_ft;
 }

 FUNC_9(&VAR_13->flow_db->lock);
 FUNC_5(&VAR_14->usecnt);
 VAR_24->flow_matcher = VAR_14;

 FUNC_7(VAR_22);

 return VAR_24;

destroy_ft:
 FUNC_10(VAR_13, VAR_23, 0);
unlock:
 FUNC_9(&VAR_13->flow_db->lock);
 FUNC_7(VAR_22);

 return FUNC_0(VAR_27);
}
