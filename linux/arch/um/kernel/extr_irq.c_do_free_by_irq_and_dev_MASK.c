
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_fd {unsigned int irq; void* id; int purge; scalar_t__ active; } ;
struct irq_entry {struct irq_fd** irq_array; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct irq_entry*) ;
 int FUNC_1 (struct irq_fd*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(
 struct irq_entry *VAR_3,
 unsigned int VAR_4,
 void *VAR_5,
 int VAR_6
)
{
 int VAR_7;
 struct irq_fd *VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_2 ; VAR_7++) {
  if (VAR_3->irq_array[VAR_7] != ((void*)0)) {
   if (
   ((VAR_6 & VAR_1) ||
    (VAR_3->irq_array[VAR_7]->irq == VAR_4)) &&
   ((VAR_6 & VAR_0) ||
    (VAR_3->irq_array[VAR_7]->id == VAR_5))
   ) {



    FUNC_2(VAR_3->fd);
    VAR_8 = VAR_3->irq_array[VAR_7];
    VAR_3->irq_array[VAR_7] = ((void*)0);
    FUNC_0(VAR_3);
    if (VAR_8->active)
     VAR_8->purge = 1;
    else
     FUNC_1(VAR_8);
   }
  }
 }
}
