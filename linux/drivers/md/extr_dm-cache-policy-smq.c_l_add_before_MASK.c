
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ilist {int nr_elts; } ;
struct entry_space {int dummy; } ;
struct entry {int sentinel; void* prev; void* next; } ;


 int FUNC_0 (struct entry_space*,struct ilist*,struct entry*) ;
 struct entry* FUNC_1 (struct entry_space*,struct entry*) ;
 void* FUNC_2 (struct entry_space*,struct entry*) ;

__attribute__((used)) static void FUNC_3(struct entry_space *VAR_0, struct ilist *VAR_1,
    struct entry *VAR_2, struct entry *VAR_3)
{
 struct entry *VAR_4 = FUNC_1(VAR_0, VAR_2);

 if (!VAR_4)
  FUNC_0(VAR_0, VAR_1, VAR_3);

 else {
  VAR_3->prev = VAR_2->prev;
  VAR_3->next = FUNC_2(VAR_0, VAR_2);
  VAR_4->next = VAR_2->prev = FUNC_2(VAR_0, VAR_3);

  if (!VAR_3->sentinel)
   VAR_1->nr_elts++;
 }
}
