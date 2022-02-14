
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,char**) ;
 int FUNC_1 (int,char**,char*) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 () ;
 int VAR_3 ;

int
FUNC_3(int VAR_4, char *VAR_5[])
{
 char *VAR_6 = ((void*)0);
 int VAR_7;


 while ((VAR_7 = FUNC_1(VAR_4, VAR_5, "n:Nvh")) != -1) {
  switch (VAR_7) {
  case 'n':
   VAR_6 = VAR_1;
   break;

  case 'N':
   VAR_0 = 1;
   break;

  case 'v':
   VAR_3 = 1;
   break;

  case 'h':
  default:
   FUNC_2();
  }
 }

 VAR_4 -= VAR_2;
 VAR_5 += VAR_2;

 if (*VAR_5 == ((void*)0))
  FUNC_2();

 VAR_7 = FUNC_0(VAR_6, VAR_4, VAR_5);

 return (VAR_7);
}
