
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char**,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(int VAR_1, char **VAR_2)
{
 bool VAR_3;
 int VAR_4;

 VAR_3 = 0;
 while ((VAR_4 = FUNC_2(VAR_1, VAR_2, "d")) != -1)
  switch (VAR_4) {
  case 'd':
   VAR_3 = 1;
   break;
  default:
   FUNC_3();
  }
 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_1 != 1)
  FUNC_3();
 if (FUNC_0(VAR_2[0], VAR_3) < 0)
  FUNC_1(1, "Failed to reset %s", VAR_2[0]);
 return (0);
}
