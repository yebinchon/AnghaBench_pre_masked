
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_card {int current_tlabel; unsigned long long tlabel_mask; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct fw_card *VAR_1)
{
 int VAR_2;

 VAR_2 = VAR_1->current_tlabel;
 while (VAR_1->tlabel_mask & (1ULL << VAR_2)) {
  VAR_2 = (VAR_2 + 1) & 0x3f;
  if (VAR_2 == VAR_1->current_tlabel)
   return -VAR_0;
 }

 VAR_1->current_tlabel = (VAR_2 + 1) & 0x3f;
 VAR_1->tlabel_mask |= 1ULL << VAR_2;

 return VAR_2;
}
