
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ref {struct ref* next; int old_oid; } ;
struct object {int dummy; } ;
struct TYPE_2__ {char const* url; scalar_t__ can_update_info_refs; } ;


 int FUNC_0 (struct object*) ;
 struct ref* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*,char const*,char const*) ;
 int FUNC_3 (struct ref*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,struct ref*) ;
 struct object* FUNC_6 (int *) ;
 char* FUNC_7 (int *) ;
 struct ref* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(const char *VAR_3)
{
 struct ref *VAR_4;
 struct object *VAR_5;

 VAR_4 = FUNC_1(VAR_3);

 if (FUNC_5(VAR_1->url, VAR_4) != 0) {
  FUNC_2(VAR_2,
   "Unable to fetch ref %s from %s\n",
   VAR_3, VAR_1->url);
  FUNC_3(VAR_4);
  return;
 }





 if (VAR_1->can_update_info_refs && !FUNC_4(&VAR_4->old_oid)) {
  VAR_5 = FUNC_6(&VAR_4->old_oid);
  FUNC_2(VAR_2, "  fetch %s for %s\n",
   FUNC_7(&VAR_4->old_oid), VAR_3);
  FUNC_0(VAR_5);
 }

 VAR_4->next = VAR_0;
 VAR_0 = VAR_4;
}
