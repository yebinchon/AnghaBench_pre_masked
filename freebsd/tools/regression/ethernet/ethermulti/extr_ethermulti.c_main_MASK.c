
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int,char**,char*) ;
 int FUNC_5 () ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_6 (char*) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 () ;
 int VAR_5 ;

int
FUNC_9(int VAR_6, char *VAR_7[])
{
 int VAR_8;

 while ((VAR_8 = FUNC_4(VAR_6, VAR_7, "i:rv")) != -1) {
  switch (VAR_8) {
  case 'i':
   VAR_2 = VAR_3;
   break;
  case 'r':
   VAR_1 = 1;
   break;
  case 'v':
   VAR_5 = 1;
   break;
  default:
   FUNC_8();
  }
 }
 if (VAR_2 == ((void*)0))
  FUNC_8();

 FUNC_6("1..1\n");
 if (FUNC_3() != 0) {
  FUNC_0(1, "Not running as root, can't run tests as non-root");

 } else {
  FUNC_2(VAR_4,
      "Running tests with ruid %d euid %d sock uid 0\n",
      FUNC_5(), FUNC_3());
  FUNC_7(VAR_0);
 }
 FUNC_6("ok 1 - ethermulti\n");
 FUNC_1(0);
}
