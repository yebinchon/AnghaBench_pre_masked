
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 () ;

int
FUNC_6(int VAR_4, char *VAR_5[])
{
 int VAR_6;

 while ((VAR_6 = FUNC_2(VAR_4, VAR_5, "al")) != -1)
  switch (VAR_6) {
  case 'a':
   VAR_0++;
   break;
  case 'l':
   VAR_1++;
   break;
  default:
   FUNC_5();

  }

 FUNC_4(VAR_3);
 if (VAR_4 == VAR_2)
  FUNC_0();
 else {
  for (; VAR_2 < VAR_4; VAR_2++)
   (void)FUNC_3(VAR_5[VAR_2]);
 }
 FUNC_1(0);
}
