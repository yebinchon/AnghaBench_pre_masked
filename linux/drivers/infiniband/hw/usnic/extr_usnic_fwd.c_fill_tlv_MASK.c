
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter_tlv {int length; int val; int type; } ;
struct filter_action {int dummy; } ;
struct filter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct filter_tlv *VAR_2, struct filter *VAR_3,
  struct filter_action *VAR_4)
{
 VAR_2->type = VAR_1;
 VAR_2->length = sizeof(struct filter);
 *((struct filter *)&VAR_2->val) = *VAR_3;

 VAR_2 = (struct filter_tlv *)((char *)VAR_2 + sizeof(struct filter_tlv) +
   sizeof(struct filter));
 VAR_2->type = VAR_0;
 VAR_2->length = sizeof(struct filter_action);
 *((struct filter_action *)&VAR_2->val) = *VAR_4;
}
