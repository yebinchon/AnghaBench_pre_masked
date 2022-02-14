
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct TYPE_2__ {int cq_period; int cq_count; } ;
struct ib_uverbs_ex_modify_cq {scalar_t__ attr_mask; TYPE_1__ attr; int cq_handle; scalar_t__ reserved; } ;
struct ib_cq {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ib_cq*,int ,int ) ;
 struct ib_cq* FUNC_1 (struct ib_cq*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_2 (struct ib_cq*) ;
 int FUNC_3 (struct uverbs_attr_bundle*,struct ib_uverbs_ex_modify_cq*,int) ;

__attribute__((used)) static int FUNC_4(struct uverbs_attr_bundle *VAR_4)
{
 struct ib_uverbs_ex_modify_cq VAR_5;
 struct ib_cq *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_3(VAR_4, &VAR_5, sizeof(VAR_5));
 if (VAR_7)
  return VAR_7;

 if (!VAR_5.attr_mask || VAR_5.reserved)
  return -VAR_0;

 if (VAR_5.attr_mask > VAR_2)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_6, VAR_3, VAR_5.cq_handle, VAR_4);
 if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_6, VAR_5.attr.cq_count, VAR_5.attr.cq_period);

 FUNC_2(VAR_6);

 return VAR_7;
}
