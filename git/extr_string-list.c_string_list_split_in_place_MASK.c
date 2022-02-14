
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {scalar_t__ strdup_strings; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,int) ;
 int FUNC_2 (struct string_list*,char*) ;

int FUNC_3(struct string_list *VAR_0, char *VAR_1,
          int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 char *VAR_5 = VAR_1, *VAR_6;

 if (VAR_0->strdup_strings)
  FUNC_0("internal error in string_list_split_in_place(): "
      "list->strdup_strings must not be set");
 for (;;) {
  VAR_4++;
  if (VAR_3 >= 0 && VAR_4 > VAR_3) {
   FUNC_2(VAR_0, VAR_5);
   return VAR_4;
  }
  VAR_6 = FUNC_1(VAR_5, VAR_2);
  if (VAR_6) {
   *VAR_6 = '\0';
   FUNC_2(VAR_0, VAR_5);
   VAR_5 = VAR_6 + 1;
  } else {
   FUNC_2(VAR_0, VAR_5);
   return VAR_4;
  }
 }
}
