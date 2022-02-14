
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_ex_create_cq {int comp_channel; int comp_vector; int cqe; int user_handle; } ;
struct ib_uverbs_create_cq {int comp_channel; int comp_vector; int cqe; int user_handle; } ;
struct ib_ucq_object {int dummy; } ;
typedef int cmd_ex ;
typedef int cmd ;


 int FUNC_0 (struct ib_ucq_object*) ;
 struct ib_ucq_object* FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_create_cq*) ;
 int FUNC_2 (struct ib_uverbs_ex_create_cq*,int ,int) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_create_cq*,int) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_0)
{
 struct ib_uverbs_create_cq VAR_1;
 struct ib_uverbs_ex_create_cq VAR_2;
 struct ib_ucq_object *VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_0, &VAR_1, sizeof(VAR_1));
 if (VAR_4)
  return VAR_4;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.user_handle = VAR_1.user_handle;
 VAR_2.cqe = VAR_1.cqe;
 VAR_2.comp_vector = VAR_1.comp_vector;
 VAR_2.comp_channel = VAR_1.comp_channel;

 VAR_3 = FUNC_1(VAR_0, &VAR_2);
 return FUNC_0(VAR_3);
}
