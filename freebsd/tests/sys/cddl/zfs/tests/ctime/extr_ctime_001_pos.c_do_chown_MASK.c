
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*,int,int) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_1 ;

int
FUNC_5(const char *VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == ((void*)0)) {
  return (-1);
 }

 if (FUNC_0(VAR_2, FUNC_4(), FUNC_3()) == -1) {
  VAR_3 = VAR_0;
 }
 if (VAR_3 != 0) {
  FUNC_2(VAR_1, "chown(%s, %d, %d)\n", VAR_2, (int)FUNC_4(),
      (int)FUNC_3());
  FUNC_1(1);
 }

 return (VAR_3);
}
