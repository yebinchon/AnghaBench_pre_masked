
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int strdup_strings; } ;
struct object_id {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,struct string_list*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int VAR_0 ;
 int FUNC_4 (struct string_list*,char const*) ;
 int FUNC_5 (struct string_list*,char const*) ;
 int FUNC_6 (char*,char const*) ;

void FUNC_7(struct string_list *VAR_1, const char *VAR_2)
{
 FUNC_0(VAR_1->strdup_strings);
 if (FUNC_3(VAR_2)) {
  FUNC_1(VAR_0, VAR_2, VAR_1);
 } else {
  struct object_id VAR_3;
  if (FUNC_2(VAR_2, &VAR_3))
   FUNC_6("notes ref %s is invalid", VAR_2);
  if (!FUNC_5(VAR_1, VAR_2))
   FUNC_4(VAR_1, VAR_2);
 }
}
