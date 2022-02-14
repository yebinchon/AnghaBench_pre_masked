
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_0 ;
 char* FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(const char *VAR_1)
{
 char *VAR_2;

 VAR_2 = FUNC_3(VAR_1);

 FUNC_2(VAR_0, "usage: %s [-f format] [-o filename] filename [...]\n",
     FUNC_0(VAR_2));
 FUNC_2(VAR_0, "\tsupported output formats: shell, text\n");
 FUNC_1(1);
}
