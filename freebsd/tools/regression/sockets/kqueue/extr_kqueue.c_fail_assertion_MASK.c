
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_1, const char *VAR_2, const char *VAR_3,
    const char *VAR_4)
{

 FUNC_1("not ok %d - %s\n", VAR_0, VAR_4);

 if (VAR_2 == ((void*)0))
  FUNC_1("# %s(): assertion %s failed\n", VAR_1,
      VAR_4);
 else if (VAR_3 == ((void*)0))
  FUNC_1("# %s(%s): assertion %s failed\n", VAR_1,
      VAR_2, VAR_4);
 else
  FUNC_1("# %s(%s, %s): assertion %s failed\n", VAR_1,
      VAR_2, VAR_3, VAR_4);
 FUNC_0(-1);
}
