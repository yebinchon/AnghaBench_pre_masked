
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (int,char**,char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

int
FUNC_5(int VAR_2, char **VAR_3)
{
 char VAR_4, *VAR_5;

 VAR_5 = ((void*)0);
 while ((VAR_4 = FUNC_0(VAR_2, VAR_3, "ghlus:")) != -1) {
  switch (VAR_4) {
  case 'g':
   VAR_0 = 1;
   break;
  case 'h':
   FUNC_4(0);

   break;
  case 'l':
   FUNC_1();

   break;
  case 'u':
   FUNC_3();

   break;

  case 's':
   FUNC_2(VAR_1);

   break;

  case '?':
  default:
   FUNC_4(1);

   break;
  }
 }

 FUNC_4(1);


 return (0);
}
