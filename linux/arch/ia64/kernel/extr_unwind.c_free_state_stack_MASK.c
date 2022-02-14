
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unw_reg_state {struct unw_reg_state* next; } ;


 int FUNC_0 (struct unw_reg_state*) ;

__attribute__((used)) static void
FUNC_1 (struct unw_reg_state *VAR_0)
{
 struct unw_reg_state *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->next; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_0(VAR_1);
 }
 VAR_0->next = ((void*)0);
}
