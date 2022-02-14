
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int cg_item; } ;
struct stp_policy_node {TYPE_1__ group; } ;
struct stm_device {int policy_mutex; scalar_t__ policy; } ;
struct TYPE_4__ {int su_mutex; } ;


 struct stp_policy_node* FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_2__ VAR_0 ;

struct stp_policy_node *
FUNC_4(struct stm_device *VAR_1, char *VAR_2)
{
 struct stp_policy_node *VAR_3 = ((void*)0);

 FUNC_2(&VAR_0.su_mutex);

 FUNC_2(&VAR_1->policy_mutex);
 if (VAR_1->policy)
  VAR_3 = FUNC_0(VAR_1->policy, VAR_2);
 FUNC_3(&VAR_1->policy_mutex);

 if (VAR_3)
  FUNC_1(&VAR_3->group.cg_item);
 else
  FUNC_3(&VAR_0.su_mutex);

 return VAR_3;
}
