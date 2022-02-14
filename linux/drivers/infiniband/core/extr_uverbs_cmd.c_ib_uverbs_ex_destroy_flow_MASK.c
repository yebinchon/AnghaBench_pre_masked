
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_destroy_flow {int flow_handle; scalar_t__ comp_mask; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_1 (struct uverbs_attr_bundle*,struct ib_uverbs_destroy_flow*,int) ;

__attribute__((used)) static int FUNC_2(struct uverbs_attr_bundle *VAR_2)
{
 struct ib_uverbs_destroy_flow VAR_3;
 int VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, sizeof(VAR_3));
 if (VAR_4)
  return VAR_4;

 if (VAR_3.comp_mask)
  return -VAR_0;

 return FUNC_0(VAR_1, VAR_3.flow_handle, VAR_2);
}
