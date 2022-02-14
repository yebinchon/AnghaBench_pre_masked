
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,int,char*,char const* const) ;

__attribute__((used)) static ssize_t FUNC_1(char *VAR_0,
           size_t VAR_1,
           const char * const VAR_2[],
           size_t VAR_3)
{
 char *VAR_4 = VAR_0;
 size_t VAR_5;

 for (VAR_5 = 0; VAR_2[VAR_5]; VAR_5++)
  VAR_4 += FUNC_0(VAR_4, VAR_0 + VAR_1 - VAR_4,
    VAR_5 == VAR_3 ? "[%s] " : "%s ", VAR_2[VAR_5]);

 VAR_4[-1] = '\n';
 return VAR_4 - VAR_0;
}
