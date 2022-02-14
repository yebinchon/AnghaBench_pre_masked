
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_stack {int nr; struct commit** items; } ;
struct commit {int dummy; } ;



__attribute__((used)) static struct commit *FUNC_0(struct commit_stack *VAR_0)
{
 return VAR_0->nr ? VAR_0->items[--VAR_0->nr] : ((void*)0);
}
