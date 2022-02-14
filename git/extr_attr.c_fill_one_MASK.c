
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int pattern; } ;
struct TYPE_8__ {TYPE_3__ pat; TYPE_2__* attr; } ;
struct match_attr {int num_attr; TYPE_4__ u; scalar_t__ is_macro; TYPE_1__* state; } ;
struct git_attr {size_t attr_nr; } ;
struct all_attrs_item {char* value; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {char* setto; struct git_attr* attr; } ;


 char const* VAR_0 ;
 int FUNC_0 (char const*,int ,struct git_attr const*,char const*) ;
 int FUNC_1 (struct all_attrs_item*,size_t,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, struct all_attrs_item *VAR_2,
      const struct match_attr *VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = VAR_3->num_attr - 1; VAR_4 > 0 && VAR_5 >= 0; VAR_5--) {
  const struct git_attr *VAR_6 = VAR_3->state[VAR_5].attr;
  const char **VAR_7 = &(VAR_2[VAR_6->attr_nr].value);
  const char *VAR_8 = VAR_3->state[VAR_5].setto;

  if (*VAR_7 == VAR_0) {
   FUNC_0(VAR_1,
      VAR_3->is_macro ? VAR_3->u.attr->name : VAR_3->u.pat.pattern,
      VAR_6, VAR_8);
   *VAR_7 = VAR_8;
   VAR_4--;
   VAR_4 = FUNC_1(VAR_2, VAR_6->attr_nr, VAR_4);
  }
 }
 return VAR_4;
}
