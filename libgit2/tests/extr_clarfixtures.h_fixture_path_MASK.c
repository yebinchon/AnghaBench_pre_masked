
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _path ;


 size_t FUNC_0 (char const*) ;
 int FUNC_1 (char*,char const*,int) ;

__attribute__((used)) static const char *
FUNC_2(const char *VAR_0, const char *VAR_1)
{
 static char VAR_2[4096];
 size_t VAR_3;

 VAR_3 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_0, sizeof(VAR_2));

 if (VAR_2[VAR_3 - 1] != '/')
  VAR_2[VAR_3++] = '/';

 if (VAR_1[0] == '/')
  VAR_1++;

 FUNC_1(VAR_2 + VAR_3,
  VAR_1,
  sizeof(VAR_2) - VAR_3);

 return VAR_2;
}
