
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wildcard_entry {struct wildcard_entry* prev_use; struct wildcard_entry* next_use; } ;


 struct wildcard_entry VAR_0 ;

void FUNC_0 (struct wildcard_entry *VAR_1) {
  VAR_1->prev_use = &VAR_0;
  VAR_1->next_use = VAR_0.next_use;
  VAR_1->prev_use->next_use = VAR_1;
  VAR_1->next_use->prev_use = VAR_1;
}
