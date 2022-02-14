
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_list {scalar_t__ alloc; scalar_t__ nr; int items; int buf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct todo_list *VAR_0)
{
 FUNC_1(&VAR_0->buf);
 FUNC_0(VAR_0->items);
 VAR_0->nr = VAR_0->alloc = 0;
}
