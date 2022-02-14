
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (unsigned long) ;

__attribute__((used)) static void
FUNC_2(unsigned long VAR_1)
{
 const char *VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 != ((void*)0))
  FUNC_0("%s", VAR_2);
 else if (VAR_0)
  FUNC_0("%lu", VAR_1);
 else
  FUNC_0("%#lx", VAR_1);
}
