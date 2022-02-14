
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ val; struct TYPE_4__* next; } ;
typedef TYPE_1__ list ;
struct TYPE_5__ {scalar_t__ def_kind; int def_name; } ;
typedef TYPE_2__ definition ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__ FUNC_0 (int ,char const*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2, const char *VAR_3)
{
 list *VAR_4;
 definition *VAR_5;

 for (VAR_4 = VAR_1; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
  VAR_5 = (definition *) VAR_4->val;
  if (VAR_5->def_kind != VAR_0) {
   if (FUNC_0(VAR_5->def_name, VAR_3)) {
    return (1);
   } else if (FUNC_0(VAR_5->def_name, VAR_2)) {
    return (0);
   }
  }
 }
 return (1);
}
