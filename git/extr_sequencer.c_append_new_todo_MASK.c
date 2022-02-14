
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct todo_list {scalar_t__ nr; struct todo_item* items; int alloc; } ;
struct todo_item {int dummy; } ;


 int FUNC_0 (struct todo_item*,scalar_t__,int ) ;

__attribute__((used)) static struct todo_item *FUNC_1(struct todo_list *VAR_0)
{
 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 return VAR_0->items + VAR_0->nr++;
}
