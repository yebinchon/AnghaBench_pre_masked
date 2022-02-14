
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int,char*,char const*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 char const* VAR_0 ;
 int * FUNC_5 (char const*,char*) ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_6(const char *VAR_4)
{
 VAR_0 = VAR_4;
 VAR_2 = FUNC_5(VAR_4, "rb");
 if (VAR_2 == ((void*)0))
  FUNC_1(2, "can't open %s", VAR_4);
 VAR_3 = 0;
 while (FUNC_0())
  ;
 if (FUNC_4(VAR_2))
  FUNC_1(2, "can't read %s", VAR_0);
 else
  FUNC_3(VAR_2);
 if (VAR_1)
  FUNC_2("EOF in comment");
}
