
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct list_head {TYPE_2__* next; TYPE_1__* prev; } ;
struct TYPE_4__ {struct list_head* prev; } ;
struct TYPE_3__ {struct list_head* next; } ;



__attribute__((used)) static inline void FUNC_0(struct list_head *VAR_0, struct list_head *VAR_1)
{
 VAR_1->next = VAR_0->next;
 VAR_1->prev = VAR_0->prev;
 VAR_1->prev->next = VAR_1;
 VAR_1->next->prev = VAR_1;
}
