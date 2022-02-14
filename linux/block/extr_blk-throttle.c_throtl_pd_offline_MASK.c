
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct throtl_grp {TYPE_1__* td; scalar_t__** iops; scalar_t__** bps; } ;
struct blkg_policy_data {int dummy; } ;
struct TYPE_3__ {size_t limit_index; int * limit_valid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 struct throtl_grp* FUNC_1 (struct blkg_policy_data*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_3(struct blkg_policy_data *VAR_3)
{
 struct throtl_grp *VAR_4 = FUNC_1(VAR_3);

 VAR_4->bps[VAR_1][VAR_0] = 0;
 VAR_4->bps[VAR_2][VAR_0] = 0;
 VAR_4->iops[VAR_1][VAR_0] = 0;
 VAR_4->iops[VAR_2][VAR_0] = 0;

 FUNC_0(VAR_4->td);

 if (!VAR_4->td->limit_valid[VAR_4->td->limit_index])
  FUNC_2(VAR_4->td);
}
