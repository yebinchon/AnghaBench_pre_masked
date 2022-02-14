
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_2__ {int attr_mask; } ;
struct ib_uverbs_ex_modify_qp {TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_qp*) ;
 int FUNC_1 (struct uverbs_attr_bundle*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_ex_modify_qp VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3.base, sizeof(VAR_3.base));
 if (VAR_4)
  return VAR_4;

 if (VAR_3.base.attr_mask &
     ~((VAR_1 << 1) - 1))
  return -VAR_0;

 return FUNC_0(VAR_2, &VAR_3);
}
