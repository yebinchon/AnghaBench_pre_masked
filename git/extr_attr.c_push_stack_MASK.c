
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct attr_stack {char* origin; size_t originlen; struct attr_stack* prev; } ;



__attribute__((used)) static void FUNC_0(struct attr_stack **VAR_0,
         struct attr_stack *VAR_1, char *VAR_2, size_t VAR_3)
{
 if (VAR_1) {
  VAR_1->origin = VAR_2;
  if (VAR_2)
   VAR_1->originlen = VAR_3;
  VAR_1->prev = *VAR_0;
  *VAR_0 = VAR_1;
 }
}
