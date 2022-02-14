
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct git_var {char* (* read ) (int ) ;char* name; } ;


 struct git_var* VAR_0 ;
 int FUNC_0 (char*,char*,char const*) ;
 char* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 struct git_var *VAR_1;
 const char *VAR_2;

 for (VAR_1 = VAR_0; VAR_1->read; VAR_1++)
  if ((VAR_2 = VAR_1->read(0)))
   FUNC_0("%s=%s\n", VAR_1->name, VAR_2);
}
