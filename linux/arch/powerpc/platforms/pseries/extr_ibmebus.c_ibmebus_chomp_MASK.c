
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (size_t,int ) ;
 int FUNC_1 (char*,char const*,size_t) ;

__attribute__((used)) static char *FUNC_2(const char *VAR_1, size_t VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_2 + 1, VAR_0);

 if (!VAR_3)
  return ((void*)0);

 FUNC_1(VAR_3, VAR_1, VAR_2);
 VAR_3[VAR_2] = '\0';
 if (VAR_3[VAR_2 - 1] == '\n')
  VAR_3[VAR_2 - 1] = '\0';

 return VAR_3;
}
