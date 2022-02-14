
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_0[], int VAR_1)
{
 while (VAR_1 > 4) {
  if (FUNC_0(VAR_0[2], VAR_0[3])) {
   FUNC_1(VAR_0[4]);
   break;
  } else if (VAR_1 == 6) {
   FUNC_1(VAR_0[5]);
   break;
  } else {
   VAR_0 += 3;
   VAR_1 -= 3;
  }
 }
}
