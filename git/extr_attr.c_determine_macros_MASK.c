
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* attr; } ;
struct match_attr {TYPE_2__ u; scalar_t__ is_macro; } ;
struct attr_stack {int num_matches; struct match_attr** attrs; struct attr_stack* prev; } ;
struct all_attrs_item {struct match_attr const* macro; } ;
struct TYPE_3__ {int attr_nr; } ;



__attribute__((used)) static void FUNC_0(struct all_attrs_item *VAR_0,
        const struct attr_stack *VAR_1)
{
 for (; VAR_1; VAR_1 = VAR_1->prev) {
  int VAR_2;
  for (VAR_2 = VAR_1->num_matches - 1; VAR_2 >= 0; VAR_2--) {
   const struct match_attr *VAR_3 = VAR_1->attrs[VAR_2];
   if (VAR_3->is_macro) {
    int VAR_4 = VAR_3->u.attr->attr_nr;
    if (!VAR_0[VAR_4].macro) {
     VAR_0[VAR_4].macro = VAR_3;
    }
   }
  }
 }
}
