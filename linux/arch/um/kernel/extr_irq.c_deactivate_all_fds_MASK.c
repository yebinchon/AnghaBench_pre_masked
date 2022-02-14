
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_entry {struct irq_entry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct irq_entry* VAR_2 ;
 int FUNC_0 (struct irq_entry*,int,int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3(void)
{
 struct irq_entry *VAR_3;





 FUNC_2();
 VAR_3 = VAR_2;
 while (VAR_3 != ((void*)0)) {
  FUNC_0(
   VAR_3,
   -1,
   ((void*)0),
   VAR_1 | VAR_0
  );
  VAR_3 = VAR_3->next;
 }

 FUNC_1();
 return 0;
}
