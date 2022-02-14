
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_entry {struct irq_entry* next; } ;


 struct irq_entry* VAR_0 ;
 int FUNC_0 (struct irq_entry*,unsigned int,void*,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_2, void *VAR_3)
{
 struct irq_entry *VAR_4;
 unsigned long VAR_5;

 FUNC_2(&VAR_1, VAR_5);
 VAR_4 = VAR_0;
 while (VAR_4 != ((void*)0)) {
  FUNC_0(
   VAR_4,
   VAR_2,
   VAR_3,
   0
  );
  VAR_4 = VAR_4->next;
 }
 FUNC_1();
 FUNC_3(&VAR_1, VAR_5);
}
