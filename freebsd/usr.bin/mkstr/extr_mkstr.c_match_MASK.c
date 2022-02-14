
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

int
FUNC_3(const char *VAR_0)
{
 const char *VAR_1;
 int VAR_2;

 for (VAR_1 = VAR_0 + 1; *VAR_1; VAR_1++) {
  VAR_2 = FUNC_0();
  if (VAR_2 != *VAR_1) {
   while (VAR_0 < VAR_1)
    FUNC_1(*VAR_0++);
   FUNC_2(VAR_2);
   return (0);
  }
 }
 return (1);
}
