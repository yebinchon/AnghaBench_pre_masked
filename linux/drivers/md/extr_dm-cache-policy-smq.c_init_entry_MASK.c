
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {unsigned int level; int dirty; int allocated; int sentinel; int pending_work; void* prev; void* next; void* hash_next; } ;


 void* VAR_0 ;

__attribute__((used)) static void FUNC_0(struct entry *VAR_1)
{




 VAR_1->hash_next = VAR_0;
 VAR_1->next = VAR_0;
 VAR_1->prev = VAR_0;
 VAR_1->level = 0u;
 VAR_1->dirty = 1;
 VAR_1->allocated = 1;
 VAR_1->sentinel = 0;
 VAR_1->pending_work = 0;
}
