
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct volatile_list_head {struct volatile_list_head volatile* next; struct volatile_list_head volatile* prev; } ;



__attribute__((used)) static inline void FUNC_0(volatile struct volatile_list_head *VAR_0,
         volatile struct volatile_list_head *VAR_1)
{
 VAR_1->next->prev = VAR_0;
 VAR_0->next = VAR_1->next;
 VAR_0->prev = VAR_1;
 VAR_1->next = VAR_0;
}
