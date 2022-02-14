
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,char const*) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_0)
{
 int VAR_1;
 char *VAR_2;

 VAR_1 = 0;
 FUNC_2();
 while ((VAR_2 = FUNC_1()) != ((void*)0) && !VAR_1)
     VAR_1 = (FUNC_3(VAR_2, VAR_0) == 0);
 FUNC_0();
 return VAR_1;
}
