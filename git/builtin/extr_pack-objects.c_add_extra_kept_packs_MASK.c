
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct string_list {int nr; TYPE_1__* items; } ;
struct packed_git {int pack_keep_in_core; int pack_local; int pack_name; struct packed_git* next; } ;
struct TYPE_2__ {int string; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*,int ) ;
 struct packed_git* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(const struct string_list *VAR_2)
{
 struct packed_git *VAR_3;

 if (!VAR_2->nr)
  return;

 for (VAR_3 = FUNC_2(VAR_1); VAR_3; VAR_3 = VAR_3->next) {
  const char *VAR_4 = FUNC_0(VAR_3->pack_name);
  int VAR_5;

  if (!VAR_3->pack_local)
   continue;

  for (VAR_5 = 0; VAR_5 < VAR_2->nr; VAR_5++)
   if (!FUNC_1(VAR_4, VAR_2->items[VAR_5].string))
    break;

  if (VAR_5 < VAR_2->nr) {
   VAR_3->pack_keep_in_core = 1;
   VAR_0 = 1;
   continue;
  }
 }
}
