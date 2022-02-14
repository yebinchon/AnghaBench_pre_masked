
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct man_viewer_list {char* name; struct man_viewer_list* next; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,char const*) ;
 char* FUNC_4 (char*) ;
 struct man_viewer_list* VAR_0 ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(const char *VAR_1)
{
 struct man_viewer_list *VAR_2;
 const char *VAR_3 = FUNC_1(VAR_1);
 const char *VAR_4 = FUNC_4("GIT_MAN_VIEWER");

 FUNC_5();
 for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
 {
  FUNC_3(VAR_2->name, VAR_3);
 }
 if (VAR_4)
  FUNC_3(VAR_4, VAR_3);
 FUNC_3("man", VAR_3);
 FUNC_2(FUNC_0("no man viewer handled the request"));
}
