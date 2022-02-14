
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vty_name ;


 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 char VAR_0[4] = "";
 size_t VAR_1 = sizeof(VAR_0);

 if (FUNC_1("kern.vty", VAR_0, &VAR_1, ((void*)0), 0) != 0)
  return (0);
 return (FUNC_0(VAR_0, "vt") == 0);
}
