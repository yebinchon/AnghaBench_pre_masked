
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {int * util; int string; } ;
struct patch {char* new_name; char* old_name; } ;
struct TYPE_2__ {int nr; struct string_list_item* items; } ;
struct apply_state {int has_include; TYPE_1__ limit_by_name; scalar_t__* prefix; } ;


 int FUNC_0 (char const*,scalar_t__*,char const**) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct apply_state *VAR_0, struct patch *VAR_1)
{
 const char *VAR_2 = VAR_1->new_name ? VAR_1->new_name : VAR_1->old_name;
 int VAR_3;


 if (VAR_0->prefix && *VAR_0->prefix) {
  const char *VAR_4;
  if (!FUNC_0(VAR_2, VAR_0->prefix, &VAR_4) || !*VAR_4)
   return 0;
 }


 for (VAR_3 = 0; VAR_3 < VAR_0->limit_by_name.nr; VAR_3++) {
  struct string_list_item *VAR_5 = &VAR_0->limit_by_name.items[VAR_3];
  if (!FUNC_1(VAR_5->string, VAR_2, 0))
   return (VAR_5->util != ((void*)0));
 }






 return !VAR_0->has_include;
}
