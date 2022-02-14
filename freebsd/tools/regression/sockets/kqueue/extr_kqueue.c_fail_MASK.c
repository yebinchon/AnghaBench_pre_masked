
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static void
FUNC_3(int VAR_1, const char *VAR_2, const char *VAR_3, const char *VAR_4)
{

 FUNC_1("not ok %d\n", VAR_0);

 if (VAR_3 == ((void*)0))
  FUNC_1("# %s(): %s\n", VAR_2, FUNC_2(VAR_1));
 else if (VAR_4 == ((void*)0))
  FUNC_1("# %s(%s): %s\n", VAR_2, VAR_3,
      FUNC_2(VAR_1));
 else
  FUNC_1("# %s(%s, %s): %s\n", VAR_2, VAR_3, VAR_4,
      FUNC_2(VAR_1));
 FUNC_0(-1);
}
