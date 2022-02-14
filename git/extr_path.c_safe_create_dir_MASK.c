
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_2, int VAR_3)
{
 if (FUNC_4(VAR_2, 0777) < 0) {
  if (VAR_1 != VAR_0) {
   FUNC_5(VAR_2);
   FUNC_3(1);
  }
 }
 else if (VAR_3 && FUNC_1(VAR_2))
  FUNC_2(FUNC_0("Could not make %s writable by group"), VAR_2);
}
