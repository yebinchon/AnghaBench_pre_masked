
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int * prev; int next; } ;


 int FUNC_0 (char*,struct list_head*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_2(struct list_head *VAR_0)
{
 FUNC_0("called on %p", VAR_0);
        FUNC_1(VAR_0->prev, VAR_0->next);
        VAR_0->next = *(VAR_0->prev = ((void*)0));
}
