
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char) ;
 int FUNC_1 (char**) ;
 char* FUNC_2 (char*,char*) ;

int FUNC_3(const char *VAR_0)
{
 char *VAR_1 = (char *)VAR_0;


 if (!FUNC_1(&VAR_1) &&
   FUNC_0(VAR_1[0]) && FUNC_0(VAR_1[1])) {

  VAR_1 = FUNC_2(VAR_1 + 2, "\\/");
  if (!VAR_1)
   return 0;

  do {
   VAR_1++;
  } while (*VAR_1 && !FUNC_0(*VAR_1));
 }

 return VAR_1 + FUNC_0(*VAR_1) - VAR_0;
}
