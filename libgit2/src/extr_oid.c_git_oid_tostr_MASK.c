
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,int const*) ;

char *FUNC_1(char *VAR_1, size_t VAR_2, const git_oid *VAR_3)
{
 if (!VAR_1 || VAR_2 == 0)
  return "";

 if (VAR_2 > VAR_0 + 1)
  VAR_2 = VAR_0 + 1;

 FUNC_0(VAR_1, VAR_2 - 1, VAR_3);
 VAR_1[VAR_2 - 1] = '\0';

 return VAR_1;
}
