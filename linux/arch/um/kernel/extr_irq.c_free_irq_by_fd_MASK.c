
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct irq_entry*,int,int *,int) ;
 int FUNC_1 () ;
 struct irq_entry* FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(int VAR_3)
{
 struct irq_entry *VAR_4;
 unsigned long VAR_5;

 FUNC_3(&VAR_2, VAR_5);
 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4 != ((void*)0)) {
  FUNC_0(
   VAR_4,
   -1,
   ((void*)0),
   VAR_1 | VAR_0
  );
 }
 FUNC_1();
 FUNC_4(&VAR_2, VAR_5);
}
