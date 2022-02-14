
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genl_family_op {int o_id; int o_flags; int o_list; } ;
struct genl_family {int ce_mask; int gf_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct genl_family_op* FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct genl_family *VAR_2, int VAR_3, int VAR_4)
{
 struct genl_family_op *VAR_5;

 VAR_5 = FUNC_0(1, sizeof(*VAR_5));
 if (VAR_5 == ((void*)0))
  return -VAR_1;

 VAR_5->o_id = VAR_3;
 VAR_5->o_flags = VAR_4;

 FUNC_1(&VAR_5->o_list, &VAR_2->gf_ops);
 VAR_2->ce_mask |= VAR_0;

 return 0;
}
