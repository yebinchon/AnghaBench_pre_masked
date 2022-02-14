
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 const char *VAR_2;

 VAR_2 = FUNC_2(VAR_0, "|:");
 if (VAR_2 == ((void*)0))
  VAR_2 = VAR_0 + 1;
 if ((VAR_1 = FUNC_0(VAR_2 - VAR_0 + 1)) != ((void*)0)) {
  VAR_1[0] = '\0';
  FUNC_1(VAR_1, VAR_0, VAR_2 - VAR_0);
 }
 return VAR_1;
}
