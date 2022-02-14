
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_entry {int fd; struct irq_entry* next; } ;


 struct irq_entry* VAR_0 ;

__attribute__((used)) static struct irq_entry *FUNC_0(int VAR_1)
{
 struct irq_entry *VAR_2 = VAR_0;

 while (VAR_2 != ((void*)0)) {
  if (VAR_2->fd == VAR_1)
   return VAR_2;
  VAR_2 = VAR_2->next;
 }
 return ((void*)0);
}
