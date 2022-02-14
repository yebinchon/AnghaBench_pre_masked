
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_entry {struct irq_entry* next; int ** irq_array; } ;


 int VAR_0 ;
 struct irq_entry* VAR_1 ;
 int FUNC_0 (struct irq_entry*) ;

__attribute__((used)) static void FUNC_1(void)
{
 int VAR_2;
 bool VAR_3;
 struct irq_entry *VAR_4;
 struct irq_entry *VAR_5 = ((void*)0);
 struct irq_entry *VAR_6;

 if (VAR_1 == ((void*)0))
  return;
 VAR_4 = VAR_1;
 while (VAR_4 != ((void*)0)) {
  VAR_3 = 1;
  for (VAR_2 = 0; VAR_2 < VAR_0 ; VAR_2++) {
   if (VAR_4->irq_array[VAR_2] != ((void*)0)) {
    VAR_3 = 0;
    break;
   }
  }
  if (VAR_3) {
   if (VAR_5 == ((void*)0))
    VAR_1 = VAR_4->next;
   else
    VAR_5->next = VAR_4->next;
   VAR_6 = VAR_4;
  } else {
   VAR_6 = ((void*)0);
  }
  VAR_4 = VAR_4->next;
  FUNC_0(VAR_6);
 }
}
