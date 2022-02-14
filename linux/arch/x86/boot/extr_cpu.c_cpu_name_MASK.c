
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static char *FUNC_1(int VAR_0)
{
 static char VAR_1[6];

 if (VAR_0 == 64) {
  return "x86-64";
 } else {
  if (VAR_0 == 15)
   VAR_0 = 6;
  FUNC_0(VAR_1, "i%d86", VAR_0);
  return VAR_1;
 }
}
