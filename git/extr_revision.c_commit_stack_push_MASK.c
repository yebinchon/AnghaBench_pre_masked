
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_stack {scalar_t__ nr; struct commit** items; int alloc; } ;
struct commit {int dummy; } ;


 int FUNC_0 (struct commit**,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct commit_stack *VAR_0, struct commit *VAR_1)
{
 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 VAR_0->items[VAR_0->nr++] = VAR_1;
}
