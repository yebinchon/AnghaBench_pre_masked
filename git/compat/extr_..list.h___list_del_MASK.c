
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {struct list_head* next; struct list_head* prev; } ;



__attribute__((used)) static inline void FUNC_0(struct list_head *VAR_0, struct list_head *VAR_1)
{
 VAR_1->prev = VAR_0;
 VAR_0->next = VAR_1;
}
