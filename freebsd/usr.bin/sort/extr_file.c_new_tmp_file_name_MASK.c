
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char*,char*,char const*,int,unsigned long) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;
 char* VAR_0 ;

char *
FUNC_5(void)
{
 static size_t VAR_1 = 0;
 static const char *VAR_2 = ".bsdsort.";
 char *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_3(VAR_0) + 1 + FUNC_3(VAR_2) + 32 + 1;
 VAR_3 = FUNC_1(VAR_4);

 FUNC_2(VAR_3, "%s/%s%d.%lu", VAR_0, VAR_2, (int) FUNC_0(), (unsigned long)(VAR_1++));
 FUNC_4(VAR_3);
 return (VAR_3);
}
