
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nl_object {int dummy; } ;
struct genl_family {int gf_mc_grps; int gf_ops; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct nl_object *VAR_0)
{
 struct genl_family *VAR_1 = (struct genl_family *) VAR_0;

 FUNC_0(&VAR_1->gf_ops);
 FUNC_0(&VAR_1->gf_mc_grps);
}
