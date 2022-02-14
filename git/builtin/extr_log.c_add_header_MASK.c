
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* string; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct string_list_item* FUNC_0 (int *,char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static void FUNC_3(const char *VAR_3)
{
 struct string_list_item *VAR_4;
 int VAR_5 = FUNC_1(VAR_3);
 while (VAR_5 && VAR_3[VAR_5 - 1] == '\n')
  VAR_5--;

 if (!FUNC_2(VAR_3, "to: ", 4)) {
  VAR_4 = FUNC_0(&VAR_2, VAR_3 + 4);
  VAR_5 -= 4;
 } else if (!FUNC_2(VAR_3, "cc: ", 4)) {
  VAR_4 = FUNC_0(&VAR_0, VAR_3 + 4);
  VAR_5 -= 4;
 } else {
  VAR_4 = FUNC_0(&VAR_1, VAR_3);
 }

 VAR_4->string[VAR_5] = '\0';
}
