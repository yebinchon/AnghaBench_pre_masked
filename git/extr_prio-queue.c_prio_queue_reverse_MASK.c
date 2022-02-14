
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_queue {int nr; int * compare; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct prio_queue*,int,int) ;

void FUNC_2(struct prio_queue *VAR_0)
{
 int VAR_1, VAR_2;

 if (VAR_0->compare != ((void*)0))
  FUNC_0("prio_queue_reverse() on non-LIFO queue");
 for (VAR_1 = 0; VAR_1 < (VAR_2 = (VAR_0->nr - 1) - VAR_1); VAR_1++)
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
