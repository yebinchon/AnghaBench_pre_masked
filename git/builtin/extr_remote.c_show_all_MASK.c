
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; scalar_t__ util; } ;
struct string_list {int strdup_strings; int nr; struct string_list_item* items; } ;


 struct string_list VAR_0 ;
 int FUNC_0 (int ,struct string_list*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*,...) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (struct string_list*,int) ;
 int FUNC_4 (struct string_list*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_5(void)
{
 struct string_list VAR_3 = VAR_0;
 int VAR_4;

 VAR_3.strdup_strings = 1;
 VAR_4 = FUNC_0(VAR_1, &VAR_3);

 if (!VAR_4) {
  int VAR_5;

  FUNC_4(&VAR_3);
  for (VAR_5 = 0; VAR_5 < VAR_3.nr; VAR_5++) {
   struct string_list_item *VAR_6 = VAR_3.items + VAR_5;
   if (VAR_2)
    FUNC_1("%s\t%s\n", VAR_6->string,
     VAR_6->util ? (const char *)VAR_6->util : "");
   else {
    if (VAR_5 && !FUNC_2((VAR_6 - 1)->string, VAR_6->string))
     continue;
    FUNC_1("%s\n", VAR_6->string);
   }
  }
 }
 FUNC_3(&VAR_3, 1);
 return VAR_4;
}
