
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char const*,char*) ;

int FUNC_2(void)
{




 static int VAR_0 = -1;

 if (VAR_0 < 0) {
  const char *VAR_1 = FUNC_0("GIT_PRINT_SHA1_ELLIPSIS");
  VAR_0 = (VAR_1 && !FUNC_1(VAR_1, "yes"));
 }
 return VAR_0;
}
