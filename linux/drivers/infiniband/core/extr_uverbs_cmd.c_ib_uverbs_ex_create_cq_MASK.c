
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_ex_create_cq {scalar_t__ reserved; scalar_t__ comp_mask; } ;
struct ib_ucq_object {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (struct ib_ucq_object*) ;
 struct ib_ucq_object* FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_cq*) ;
 int FUNC_2 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_cq*,int) ;

__attribute__((used)) static int FUNC_3(struct uverbs_attr_bundle *VAR_1)
{
 struct ib_uverbs_ex_create_cq VAR_2;
 struct ib_ucq_object *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_4)
  return VAR_4;

 if (VAR_2.comp_mask)
  return -VAR_0;

 if (VAR_2.reserved)
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_1, &VAR_2);
 return FUNC_0(VAR_3);
}
