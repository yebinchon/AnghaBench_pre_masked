
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct patch {int new_oid_prefix; int old_oid_prefix; int lines_deleted; int lines_added; int is_delete; int is_new; int old_mode; int new_mode; int old_name; int new_name; struct fragment* fragments; struct patch* next; } ;
struct fragment {int oldlines; int newlines; int oldpos; int newpos; struct fragment* next; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct patch *VAR_0)
{
 for (; VAR_0; VAR_0 = VAR_0->next) {
  struct fragment *VAR_1 = VAR_0->fragments;

  FUNC_0(VAR_0->new_name, VAR_0->old_name);
  FUNC_0(VAR_0->new_mode, VAR_0->old_mode);
  FUNC_0(VAR_0->is_new, VAR_0->is_delete);
  FUNC_0(VAR_0->lines_added, VAR_0->lines_deleted);
  FUNC_0(VAR_0->old_oid_prefix, VAR_0->new_oid_prefix);

  for (; VAR_1; VAR_1 = VAR_1->next) {
   FUNC_0(VAR_1->newpos, VAR_1->oldpos);
   FUNC_0(VAR_1->newlines, VAR_1->oldlines);
  }
 }
}
