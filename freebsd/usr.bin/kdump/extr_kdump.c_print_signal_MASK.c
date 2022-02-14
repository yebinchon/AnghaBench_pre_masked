
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(int VAR_0)
{
 const char *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1 != ((void*)0))
  FUNC_0("%s", VAR_1);
 else
  FUNC_0("SIG %d", VAR_0);
}
