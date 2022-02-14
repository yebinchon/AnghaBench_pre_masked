
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,long) ;

const char *
FUNC_1(long VAR_0, char *VAR_1, size_t VAR_2)
{
  static char VAR_3[23];

  if (VAR_1 == ((void*)0) || VAR_2 == 0) {
    VAR_1 = VAR_3;
    VAR_2 = sizeof VAR_3;
  }
  FUNC_0(VAR_1, VAR_2, "<%ld>", VAR_0);
  return VAR_1;
}
