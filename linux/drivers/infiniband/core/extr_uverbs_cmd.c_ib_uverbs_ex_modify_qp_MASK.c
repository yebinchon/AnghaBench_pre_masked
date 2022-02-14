
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_ex_modify_qp_resp {int response_length; } ;
struct TYPE_2__ {int attr_mask; } ;
struct ib_uverbs_ex_modify_qp {TYPE_1__ base; } ;
typedef int resp ;
typedef int cmd ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_qp*) ;
 int FUNC_2 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_qp*,int) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_qp_resp*,int) ;
 int FUNC_4 (struct uverbs_attr_bundle*,int) ;

__attribute__((used)) static int FUNC_5(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_ex_modify_qp VAR_3;
 struct ib_uverbs_ex_modify_qp_resp VAR_4 = {
  .response_length = FUNC_4(VAR_2, sizeof(VAR_4))
 };
 int VAR_5;

 VAR_5 = FUNC_2(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_5)
  return VAR_5;





 FUNC_0(VAR_1 == (1 << 31));

 if (VAR_3.base.attr_mask &
     ~((VAR_1 << 1) - 1))
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_2, &VAR_3);
 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_2, &VAR_4, sizeof(VAR_4));
}
