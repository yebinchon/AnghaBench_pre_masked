
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(char *VAR_0)
{


 while (FUNC_0(*VAR_0))
  VAR_0++;


 if (*VAR_0 == '-') {
  VAR_0++;
 } else if (!FUNC_1(VAR_0, "all", 3) || !FUNC_1(VAR_0, "any", 3)) {
  VAR_0 += 3;
 } else {
  return (0);
 }


 while (FUNC_0(*VAR_0))
  VAR_0++;

 return (*VAR_0 == '\0');
}
