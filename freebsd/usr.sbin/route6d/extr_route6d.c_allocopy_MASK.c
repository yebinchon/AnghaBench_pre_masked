
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0)
{
 int VAR_1 = FUNC_3(VAR_0) + 1;
 char *VAR_2 = (char *)FUNC_1(VAR_1);

 if (!VAR_2) {
  FUNC_0("malloc");

 }

 FUNC_2(VAR_2, VAR_0, VAR_1);
 return VAR_2;
}
