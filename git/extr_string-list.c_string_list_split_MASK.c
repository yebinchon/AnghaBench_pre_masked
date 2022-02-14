
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int strdup_strings; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,int) ;
 int FUNC_2 (struct string_list*,char const*) ;
 int FUNC_3 (struct string_list*,int ) ;
 int FUNC_4 (char const*,int) ;

int FUNC_5(struct string_list *VAR_0, const char *VAR_1,
        int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 const char *VAR_5 = VAR_1, *VAR_6;

 if (!VAR_0->strdup_strings)
  FUNC_0("internal error in string_list_split(): "
      "list->strdup_strings must be set");
 for (;;) {
  VAR_4++;
  if (VAR_3 >= 0 && VAR_4 > VAR_3) {
   FUNC_2(VAR_0, VAR_5);
   return VAR_4;
  }
  VAR_6 = FUNC_1(VAR_5, VAR_2);
  if (VAR_6) {
   FUNC_3(VAR_0, FUNC_4(VAR_5, VAR_6 - VAR_5));
   VAR_5 = VAR_6 + 1;
  } else {
   FUNC_2(VAR_0, VAR_5);
   return VAR_4;
  }
 }
}
