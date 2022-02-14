
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char**,size_t*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(void)
{
 size_t VAR_0;
 char VAR_1[3];

 VAR_0 = 3;
 if (FUNC_1("kern.vty", &VAR_1, &VAR_0, ((void*)0), 0) != 0 ||
     FUNC_0(VAR_1, "vt") != 0)
  return 0;
 return 1;
}
