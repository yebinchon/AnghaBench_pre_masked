
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_0, const char *VAR_1)
{
 char *VAR_2;
 const char *VAR_3;
 const char *VAR_4;

 if ((VAR_4 = FUNC_2(VAR_0, '/')) == ((void*)0))
  VAR_4 = VAR_0;
 else
  VAR_4++;
 VAR_2 = FUNC_3(FUNC_1(VAR_4) + FUNC_1(VAR_1) + 1);
 VAR_3 = FUNC_2(VAR_4, '.');
 if (VAR_3 == ((void*)0)) {
  VAR_3 = VAR_4 + FUNC_1(VAR_4);
 }
 (void) FUNC_0(VAR_2, VAR_4);
 (void) FUNC_0(VAR_2 + (VAR_3 - VAR_4), VAR_1);
 return (VAR_2);
}
