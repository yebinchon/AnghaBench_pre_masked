
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,int) ;
 char* FUNC_2 (char*,char) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0, char *VAR_1, size_t VAR_2)
{
 char *VAR_3;

 (void)FUNC_1(VAR_1, VAR_0, VAR_2);
 VAR_1[VAR_2 - 1] = '\0';
 if ((VAR_3 = FUNC_2(VAR_1, '/')) != ((void*)0))
  VAR_3++;
 else
  VAR_3 = VAR_1;
 (void)FUNC_1(VAR_3, "INS@XXXX", &VAR_1[VAR_2 - 1] - VAR_3);
 VAR_1[VAR_2 - 1] = '\0';
 return (FUNC_0(VAR_1));
}
