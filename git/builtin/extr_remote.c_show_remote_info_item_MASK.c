
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list_item {char* string; } ;
struct show_info {char* width; struct ref_states* states; } ;
struct ref_states {int stale; int tracked; TYPE_1__* remote; int new_refs; scalar_t__ queried; } ;
struct TYPE_2__ {char* name; } ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,...) ;
 scalar_t__ FUNC_2 (int *,char const*) ;

__attribute__((used)) static int FUNC_3(struct string_list_item *VAR_0, void *VAR_1)
{
 struct show_info *VAR_2 = VAR_1;
 struct ref_states *VAR_3 = VAR_2->states;
 const char *VAR_4 = VAR_0->string;

 if (VAR_3->queried) {
  const char *VAR_5 = "%s";
  const char *VAR_6 = "";
  if (FUNC_2(&VAR_3->new_refs, VAR_4)) {
   VAR_5 = FUNC_0(" new (next fetch will store in remotes/%s)");
   VAR_6 = VAR_3->remote->name;
  } else if (FUNC_2(&VAR_3->tracked, VAR_4))
   VAR_6 = FUNC_0(" tracked");
  else if (FUNC_2(&VAR_3->stale, VAR_4))
   VAR_6 = FUNC_0(" stale (use 'git remote prune' to remove)");
  else
   VAR_6 = FUNC_0(" ???");
  FUNC_1("    %-*s", VAR_2->width, VAR_4);
  FUNC_1(VAR_5, VAR_6);
  FUNC_1("\n");
 } else
  FUNC_1("    %s\n", VAR_4);

 return 0;
}
