
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char,unsigned long) ;

__attribute__((used)) static size_t FUNC_1(char *VAR_0, unsigned long VAR_1)
{
 char *VAR_2 = FUNC_0(VAR_0, '\n', VAR_1);

 if (!VAR_2)
  return VAR_1;

 *VAR_2 = '\0';
 return VAR_2 + 1 - VAR_0;
}
