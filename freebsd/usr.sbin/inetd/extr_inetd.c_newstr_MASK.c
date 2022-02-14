
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_2)
{
 char *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_2 != ((void*)0) ? VAR_2 : "")))
  return (VAR_3);
 FUNC_2(VAR_1, "strdup: %m");
 FUNC_0(VAR_0);
}
