
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_flow_action_esp_encap {scalar_t__ type; int len; int val_ptr; scalar_t__ next_ptr; } ;
struct ib_flow_spec_list {int spec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_uverbs_flow_action_esp_encap*,struct uverbs_attr_bundle*,int ) ;

__attribute__((used)) static int FUNC_3(struct ib_flow_spec_list *VAR_4,
         struct uverbs_attr_bundle *VAR_5)
{
 struct ib_uverbs_flow_action_esp_encap VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(&VAR_6, VAR_5,
          VAR_3);
 if (VAR_7)
  return VAR_7;


 if (VAR_6.next_ptr)
  return -VAR_0;

 if (VAR_6.type != VAR_1 &&
     VAR_6.type != VAR_2)
  return -VAR_0;

 return FUNC_0(VAR_6.type,
       FUNC_1(VAR_6.val_ptr),
       VAR_6.len,
       &VAR_4->spec);
}
