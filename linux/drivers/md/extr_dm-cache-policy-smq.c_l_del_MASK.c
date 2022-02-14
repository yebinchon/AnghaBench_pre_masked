
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilist {int nr_elts; int tail; int head; } ;
struct entry_space {int dummy; } ;
struct entry {int sentinel; int prev; int next; } ;


 struct entry* FUNC_0 (struct entry_space*,struct entry*) ;
 struct entry* FUNC_1 (struct entry_space*,struct entry*) ;

__attribute__((used)) static void FUNC_2(struct entry_space *VAR_0, struct ilist *VAR_1, struct entry *VAR_2)
{
 struct entry *VAR_3 = FUNC_1(VAR_0, VAR_2);
 struct entry *VAR_4 = FUNC_0(VAR_0, VAR_2);

 if (VAR_3)
  VAR_3->next = VAR_2->next;
 else
  VAR_1->head = VAR_2->next;

 if (VAR_4)
  VAR_4->prev = VAR_2->prev;
 else
  VAR_1->tail = VAR_2->prev;

 if (!VAR_2->sentinel)
  VAR_1->nr_elts--;
}
