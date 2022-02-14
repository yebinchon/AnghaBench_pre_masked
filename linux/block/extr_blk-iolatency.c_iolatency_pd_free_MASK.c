
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iolatency_grp {int stats; } ;
struct blkg_policy_data {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iolatency_grp*) ;
 struct iolatency_grp* FUNC_2 (struct blkg_policy_data*) ;

__attribute__((used)) static void FUNC_3(struct blkg_policy_data *VAR_0)
{
 struct iolatency_grp *VAR_1 = FUNC_2(VAR_0);
 FUNC_0(VAR_1->stats);
 FUNC_1(VAR_1);
}
