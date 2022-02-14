
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sti_gdp {TYPE_1__* node_list; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {int top_field_paddr; int btm_field_paddr; void* btm_field; void* top_field; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct seq_file*,char*,void*) ;

__attribute__((used)) static void FUNC_1(struct seq_file *VAR_1, struct sti_gdp *VAR_2, int VAR_3)
{
 void *VAR_4 = ((void*)0);
 unsigned int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_2->node_list[VAR_5].top_field_paddr == VAR_3) {
   VAR_4 = VAR_2->node_list[VAR_5].top_field;
   break;
  }
  if (VAR_2->node_list[VAR_5].btm_field_paddr == VAR_3) {
   VAR_4 = VAR_2->node_list[VAR_5].btm_field;
   break;
  }
 }

 if (VAR_4)
  FUNC_0(VAR_1, "\tVirt @: %p", VAR_4);
}
