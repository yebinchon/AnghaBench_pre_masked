
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_2)
{
  const char *VAR_3;
  VAR_3 = VAR_2;

  while (*VAR_3 == ' ' || *VAR_3 == '\t' || *VAR_3 == '\n')
    VAR_3++;

  if (!*VAR_3) {
    VAR_1 = VAR_0;
    return -1;
  }

  FUNC_0("/bin/sh", "sh", "-c", VAR_2, (char *)((void*)0));
  return -1;
}
