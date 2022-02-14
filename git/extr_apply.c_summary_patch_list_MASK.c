
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {char* new_name; char* old_name; int score; scalar_t__ is_copy; scalar_t__ is_rename; int old_mode; scalar_t__ is_delete; int new_mode; scalar_t__ is_new; struct patch* next; } ;


 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (struct patch*,int) ;
 int FUNC_3 (struct patch*) ;

__attribute__((used)) static void FUNC_4(struct patch *VAR_0)
{
 struct patch *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next) {
  if (VAR_1->is_new)
   FUNC_1("create", VAR_1->new_mode, VAR_1->new_name);
  else if (VAR_1->is_delete)
   FUNC_1("delete", VAR_1->old_mode, VAR_1->old_name);
  else {
   if (VAR_1->is_rename || VAR_1->is_copy)
    FUNC_3(VAR_1);
   else {
    if (VAR_1->score) {
     FUNC_0(" rewrite %s (%d%%)\n",
            VAR_1->new_name, VAR_1->score);
     FUNC_2(VAR_1, 0);
    }
    else
     FUNC_2(VAR_1, 1);
   }
  }
 }
}
