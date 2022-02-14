
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list_item {char* util; } ;
struct string_list {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,char) ;
 struct string_list_item* FUNC_3 (struct string_list*,char*) ;
 char* FUNC_4 (char const*,int) ;

__attribute__((used)) static void FUNC_5(struct string_list *VAR_1, const char *VAR_2, int VAR_3)
{
 char *VAR_4, *VAR_5;
 struct string_list_item *VAR_6;

 if (!VAR_3)
  return;

 VAR_4 = FUNC_4(VAR_2, VAR_3);
 VAR_5 = FUNC_2(VAR_4, ':');
 if (!VAR_5)

  goto reject;
 *(VAR_5++) = '\0';
 if (FUNC_0(VAR_4, VAR_0) ||
     FUNC_0(VAR_5, VAR_0))

  goto reject;
 VAR_6 = FUNC_3(VAR_1, VAR_4);
 VAR_6->util = VAR_5;
 return;
reject:
 FUNC_1(VAR_4);
 return;
}
