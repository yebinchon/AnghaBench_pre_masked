
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pat; } ;
struct match_attr {TYPE_1__ u; scalar_t__ is_macro; } ;
struct attr_stack {char* origin; int num_matches; int originlen; struct match_attr** attrs; struct attr_stack* prev; } ;
struct all_attrs_item {int dummy; } ;


 int FUNC_0 (char*,struct all_attrs_item*,struct match_attr const*,int) ;
 scalar_t__ FUNC_1 (char const*,int,int,int *,char const*,int ) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int VAR_1, int VAR_2,
  const struct attr_stack *VAR_3,
  struct all_attrs_item *VAR_4, int VAR_5)
{
 for (; VAR_5 > 0 && VAR_3; VAR_3 = VAR_3->prev) {
  int VAR_6;
  const char *VAR_7 = VAR_3->origin ? VAR_3->origin : "";

  for (VAR_6 = VAR_3->num_matches - 1; 0 < VAR_5 && 0 <= VAR_6; VAR_6--) {
   const struct match_attr *VAR_8 = VAR_3->attrs[VAR_6];
   if (VAR_8->is_macro)
    continue;
   if (FUNC_1(VAR_0, VAR_1, VAR_2,
      &VAR_8->u.pat, VAR_7, VAR_3->originlen))
    VAR_5 = FUNC_0("fill", VAR_4, VAR_8, VAR_5);
  }
 }

 return VAR_5;
}
