
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(int VAR_0)
{
 static char VAR_1[25];
 if (VAR_0 == 0)
  return "variable";
 else {
  FUNC_0(VAR_1, "%d bytes", VAR_0);
  return VAR_1;
 }
}
