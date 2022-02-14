
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_attr {int dummy; } ;
struct attr_check_item {struct git_attr const* attr; } ;
struct attr_check {scalar_t__ nr; struct attr_check_item* items; int alloc; } ;


 int FUNC_0 (struct attr_check_item*,scalar_t__,int ) ;

struct attr_check_item *FUNC_1(struct attr_check *VAR_0,
       const struct git_attr *VAR_1)
{
 struct attr_check_item *VAR_2;

 FUNC_0(VAR_0->items, VAR_0->nr + 1, VAR_0->alloc);
 VAR_2 = &VAR_0->items[VAR_0->nr++];
 VAR_2->attr = VAR_1;
 return VAR_2;
}
