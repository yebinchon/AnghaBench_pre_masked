
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

int
FUNC_5(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;

 while ((VAR_7 = FUNC_2(VAR_5, VAR_6, "d:v")) != -1) {
  switch (VAR_7) {
  case 'd':
   VAR_0 = FUNC_0(VAR_1);
   break;
  case 'v':
   VAR_4 = 1;
   break;
  default:
   FUNC_4(VAR_6[0]);
  }
 }
 VAR_5 -= VAR_2, VAR_6 += VAR_2;

 for (VAR_8 = 0; VAR_8 < 1000; VAR_8++) {
  FUNC_1(VAR_3, "test %d\n", VAR_8);
  FUNC_3();
 }
 return (0);
}
