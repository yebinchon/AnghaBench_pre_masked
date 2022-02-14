
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_2, char *VAR_3[])
{
 int VAR_4;

 while ((VAR_4 = FUNC_2(VAR_2, VAR_3, "?")) != -1)
  switch (VAR_4) {
  default:
   FUNC_5();
  }

 FUNC_4(VAR_1);
 if (VAR_2 == VAR_0)
  FUNC_0();
 else {
  for (; VAR_0 < VAR_2; VAR_0++)
   (void) FUNC_3(VAR_3[VAR_0]);
 }
 FUNC_1(0);
}
