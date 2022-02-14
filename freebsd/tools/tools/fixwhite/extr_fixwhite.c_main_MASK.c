
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (char) ;

int
FUNC_5(void)
{
 int VAR_1;
 bool VAR_2 = 1;

 while ((VAR_1 = FUNC_2()) != VAR_0) {
  if (FUNC_0(VAR_1))

   FUNC_3(VAR_1, VAR_2);
  else {

   FUNC_1();
   FUNC_4(VAR_1);
   VAR_2 = 0;
  }
 }

 if (!VAR_2)
  FUNC_4('\n');
 return (0);
}
