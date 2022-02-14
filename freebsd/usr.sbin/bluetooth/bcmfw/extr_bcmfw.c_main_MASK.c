
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int ,int,int ) ;
 char* VAR_5 ;

int
FUNC_7(int VAR_6, char *VAR_7[])
{
 char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 int VAR_11;

 while ((VAR_11 = FUNC_5(VAR_6, VAR_7, "f:hn:m:")) != -1) {
  switch (VAR_11) {
  case 'f':
   VAR_10 = VAR_5;
   break;

  case 'n':
   VAR_8 = VAR_5;
   break;

  case 'm':
   VAR_9 = VAR_5;
   break;

  case 'h':
  default:
   FUNC_2();

  }
 }

 if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0) || VAR_10 == ((void*)0))
  FUNC_2();


 FUNC_6(VAR_0, VAR_1|VAR_2|VAR_3, VAR_4);

 if (FUNC_0(VAR_8) < 0)
  FUNC_4(1);

 if (FUNC_1(VAR_8, VAR_9, VAR_10) < 0)
  FUNC_4(1);

 FUNC_3();

 return (0);
}
