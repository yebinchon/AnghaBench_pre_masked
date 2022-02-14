
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* FUNC_0 (char*) ;
 char* VAR_1 ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static const char *
FUNC_2(void)
{
 const char *VAR_2;

 if ((VAR_2 = FUNC_0("LC_ALL")) == ((void*)0) &&
     (VAR_2 = FUNC_0("LC_CTYPE")) == ((void*)0) &&
     (VAR_2 = FUNC_0("LANG")) == ((void*)0))
  VAR_2 = VAR_1;


 if (!FUNC_1(VAR_2, "C"))
  VAR_2 = VAR_0;

 return VAR_2;
}
