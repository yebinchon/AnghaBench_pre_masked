
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cmdline_subpart {struct cmdline_subpart* next_subpart; } ;
struct cmdline_parts {struct cmdline_subpart* subpart; } ;


 int FUNC_0 (struct cmdline_subpart*) ;

__attribute__((used)) static void FUNC_1(struct cmdline_parts *VAR_0)
{
 struct cmdline_subpart *VAR_1;

 while (VAR_0->subpart) {
  VAR_1 = VAR_0->subpart;
  VAR_0->subpart = VAR_1->next_subpart;
  FUNC_0(VAR_1);
 }
}
