
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int,char**) ;
 int VAR_0 ;
 char* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_14 () ;
 int VAR_3 ;
 int FUNC_15 () ;
 int VAR_4 ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 (int,char**) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_21 () ;

int
FUNC_22(int VAR_7, char **VAR_8)
{
 int VAR_9, VAR_10 = 0;
 char *VAR_11 = ((void*)0);

 VAR_3 = FUNC_9();
 VAR_6 = FUNC_10(0);
 while ((VAR_9 = FUNC_8(VAR_7, VAR_8, "acd:f:Ii:nprstA:HPR")) != -1)
  switch (VAR_9) {
  case 'a':
  case 'c':
  case 'p':
  case 'r':
  case 'H':
  case 'P':
  case 'R':
  case 's':
  case 'I':
   if (VAR_10) {
    FUNC_21();

   }
   VAR_10 = VAR_9;
   VAR_11 = ((void*)0);
   break;
  case 'f':
   FUNC_4(FUNC_5(VAR_1) ? 1 : 0);
  case 'd':
  case 'i':
   if (VAR_10) {
    FUNC_21();

   }
   VAR_10 = VAR_9;
   VAR_11 = VAR_1;
   break;
  case 'n':
   VAR_0 = 1;
   break;
  case 't':
   VAR_5 = 1;
   break;
  case 'A':
   if (VAR_10) {
    FUNC_21();

   }
   VAR_10 = 'a';
   VAR_4 = FUNC_0(VAR_1);
   if (VAR_4 < 0) {
    FUNC_21();

   }
   break;
  default:
   FUNC_21();
  }

 VAR_7 -= VAR_2;
 VAR_8 += VAR_2;

 switch (VAR_10) {
 case 'a':
 case 'c':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_2(0, VAR_10 == 'c');
  break;
 case 'd':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_1(VAR_11);
  break;
 case 'I':
  FUNC_3(1, "not supported yet");


 case 'p':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_15();
  break;
 case 'i':
  FUNC_13(VAR_11, VAR_7, VAR_8);
  break;
 case 'r':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_17();
  break;
 case 's':
  if (VAR_7 < 2 || VAR_7 > 4)
   FUNC_21();
  FUNC_4(FUNC_18(VAR_7, VAR_8) ? 1 : 0);
 case 'H':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_11();
  break;
 case 'P':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_14();
  break;
 case 'R':
  if (VAR_7 != 0) {
   FUNC_21();

  }
  FUNC_16();
  break;
 case 0:
  if (VAR_7 != 1) {
   FUNC_21();

  }
  FUNC_6(VAR_8[0]);
  break;
 }
 FUNC_4(0);
}
