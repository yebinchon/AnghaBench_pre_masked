
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilist {int nr_elts; void* tail; void* head; } ;
struct entry_space {int dummy; } ;
struct entry {int sentinel; void* next; void* prev; } ;


 void* VAR_0 ;
 struct entry* FUNC_0 (struct entry_space*,struct ilist*) ;
 void* FUNC_1 (struct entry_space*,struct entry*) ;

__attribute__((used)) static void FUNC_2(struct entry_space *VAR_1, struct ilist *VAR_2, struct entry *VAR_3)
{
 struct entry *VAR_4 = FUNC_0(VAR_1, VAR_2);

 VAR_3->next = VAR_0;
 VAR_3->prev = VAR_2->tail;

 if (VAR_4)
  VAR_4->next = VAR_2->tail = FUNC_1(VAR_1, VAR_3);
 else
  VAR_2->head = VAR_2->tail = FUNC_1(VAR_1, VAR_3);

 if (!VAR_3->sentinel)
  VAR_2->nr_elts++;
}
