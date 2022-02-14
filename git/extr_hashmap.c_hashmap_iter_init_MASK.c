
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hashmap_iter {int * next; scalar_t__ tablepos; struct hashmap* map; } ;
struct hashmap {int dummy; } ;



void FUNC_0(struct hashmap *VAR_0, struct hashmap_iter *VAR_1)
{
 VAR_1->map = VAR_0;
 VAR_1->tablepos = 0;
 VAR_1->next = ((void*)0);
}
