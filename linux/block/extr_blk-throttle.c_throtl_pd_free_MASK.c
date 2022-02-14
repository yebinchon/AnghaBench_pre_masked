
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pending_timer; } ;
struct throtl_grp {TYPE_1__ service_queue; } ;
struct blkg_policy_data {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct throtl_grp*) ;
 struct throtl_grp* FUNC_2 (struct blkg_policy_data*) ;

__attribute__((used)) static void FUNC_3(struct blkg_policy_data *VAR_0)
{
 struct throtl_grp *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->service_queue.pending_timer);
 FUNC_1(VAR_1);
}
