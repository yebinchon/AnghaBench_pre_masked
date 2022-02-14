
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct llist {scalar_t__ size; int * back; int front; } ;


 struct llist* FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct llist **VAR_0)
{
 *VAR_0 = FUNC_0(sizeof(struct llist));
 (*VAR_0)->front = *((*VAR_0)->back = ((void*)0));
 (*VAR_0)->size = 0;
}
