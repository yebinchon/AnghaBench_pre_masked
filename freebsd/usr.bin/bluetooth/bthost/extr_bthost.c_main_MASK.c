
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_1, char **VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5 = 0;

 while ((VAR_3 = FUNC_1(VAR_1, VAR_2, "bhp")) != -1) {
  switch (VAR_3) {
  case 'b':
   VAR_4 = 1;
   break;

  case 'p':
   VAR_5 = 1;
   break;

  case 'h':
  default:
   FUNC_4();

  }
 }

 VAR_1 -= VAR_0;
 VAR_2 += VAR_0;

 if (VAR_1 < 1)
  FUNC_4();

 FUNC_0(VAR_5? FUNC_3(*VAR_2, VAR_4) : FUNC_2(*VAR_2, VAR_4));
}
