
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char const*,int,int *) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_3 ;

int
FUNC_5(const char *VAR_4, const char *VAR_5)
{

 if (FUNC_2(VAR_4, "kbpt"))
  VAR_1 = !VAR_1;
 else if (FUNC_2(VAR_4, "numbers"))
  VAR_2 = 1;
 else if (FUNC_2(VAR_4, "bars"))
  VAR_2 = 0;
 else if (!FUNC_0(VAR_4, VAR_5, 100, &VAR_0))
  return (0);
 FUNC_4(VAR_3);
 FUNC_1();
 FUNC_3();
 return (1);
}
