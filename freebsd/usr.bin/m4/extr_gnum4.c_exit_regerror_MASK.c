
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;


 int FUNC_0 (int,char*,char const*,char*) ;
 size_t FUNC_1 (int,int *,char*,size_t) ;
 char* FUNC_2 (size_t,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_3(int VAR_0, regex_t *VAR_1, const char *VAR_2)
{
 size_t VAR_3;
 char *VAR_4;

 VAR_3 = FUNC_1(VAR_0, VAR_1, ((void*)0), 0);
 VAR_4 = FUNC_2(VAR_3,
     "malloc in regerror: %lu", (unsigned long)VAR_3);
 FUNC_1(VAR_0, VAR_1, VAR_4, VAR_3);
 FUNC_0(1, "regular expression error in %s: %s.", VAR_2, VAR_4);
}
