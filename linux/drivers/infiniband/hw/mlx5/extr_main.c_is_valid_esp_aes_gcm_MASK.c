
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int flags; } ;
struct mlx5_flow_spec {TYPE_1__ flow_context; int * match_criteria; } ;
struct mlx5_flow_act {int action; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum valid_spec { ____Placeholder_valid_spec } valid_spec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int const*) ;

__attribute__((used)) static enum valid_spec
FUNC_1(struct mlx5_core_dev *VAR_7,
       const struct mlx5_flow_spec *VAR_8,
       const struct mlx5_flow_act *VAR_9,
       bool VAR_10)
{
 const u32 *VAR_11 = VAR_8->match_criteria;
 bool VAR_12 =
  (VAR_9->action & (VAR_3 |
         VAR_1));
 bool VAR_13 = FUNC_0(VAR_11);
 bool VAR_14 = VAR_9->action & VAR_2;





 if (!VAR_12)
  return VAR_5;

 return VAR_12 && VAR_13 &&
  (!VAR_10 || (!VAR_14 &&
        !(VAR_8->flow_context.flags & VAR_0))) ?
  VAR_6 : VAR_4;
}
