
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct genl_family_grp {int list; int name; int id; } ;
struct genl_family {int gf_mc_grps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct genl_family_grp* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,char const*,scalar_t__) ;

int FUNC_3(struct genl_family *VAR_2, uint32_t VAR_3,
   const char *VAR_4)
{
 struct genl_family_grp *VAR_5;

 VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_5->id = VAR_3;
 FUNC_2(VAR_5->name, VAR_4, VAR_0 - 1);

 FUNC_1(&VAR_5->list, &VAR_2->gf_mc_grps);

 return 0;
}
