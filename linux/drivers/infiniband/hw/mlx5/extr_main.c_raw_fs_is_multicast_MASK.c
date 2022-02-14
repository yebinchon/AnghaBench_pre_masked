
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* match_params; } ;
struct mlx5_ib_flow_matcher {int match_criteria_enable; TYPE_1__ matcher_mask; } ;
typedef int __be32 ;
struct TYPE_5__ {int ipv4; } ;
struct TYPE_6__ {TYPE_2__ ipv4_layout; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_5 ;

__attribute__((used)) static bool FUNC_3(struct mlx5_ib_flow_matcher *VAR_6,
    void *VAR_7)
{
 void *VAR_8;
 void *VAR_9, *VAR_10;
 void *VAR_11, *VAR_12;
 void *VAR_13, *VAR_14;

 if (!(VAR_6->match_criteria_enable &
       (1 << VAR_0)))
  return 0;

 VAR_8 = VAR_6->matcher_mask.match_params;
 VAR_9 = FUNC_0(VAR_3, VAR_7,
        VAR_5);
 VAR_10 = FUNC_0(VAR_3, VAR_8,
        VAR_5);

 VAR_11 = FUNC_0(VAR_4, VAR_9,
       VAR_1);
 VAR_12 = FUNC_0(VAR_4, VAR_10,
     VAR_1);

 if (FUNC_2(VAR_11) &&
     FUNC_2(VAR_12))
  return 1;

 VAR_13 = FUNC_0(VAR_4, VAR_9,
       VAR_2);

 VAR_14 = FUNC_0(VAR_4, VAR_10,
     VAR_2);

 if (FUNC_1(*(__be32 *)(VAR_13)) &&
     FUNC_1(*(__be32 *)(VAR_14)))
  return 1;

 return 0;
}
