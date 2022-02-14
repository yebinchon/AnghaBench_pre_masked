
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fn ;
typedef int FILE ;


 int VAR_0 ;
 int * FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static FILE* FUNC_2(const char* VAR_1, const char* VAR_2)
{
 char* VAR_3;
 char VAR_4[VAR_0];

 VAR_4[0] = '\0';
 FUNC_1(VAR_4, VAR_1, sizeof(VAR_4)-1);

 for(VAR_3=VAR_4;*VAR_3;++VAR_3) if(*VAR_3 == '\\') *VAR_3 = '/';

 return FUNC_0(VAR_4, VAR_2);
}
