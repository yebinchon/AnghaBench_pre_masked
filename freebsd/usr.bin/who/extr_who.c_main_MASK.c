
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,char*) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int VAR_10 ;
 int FUNC_10 () ;
 int FUNC_11 () ;

int
FUNC_12(int VAR_11, char *VAR_12[])
{
 int VAR_13;

 FUNC_7(VAR_1, "");

 while ((VAR_13 = FUNC_3(VAR_11, VAR_12, "HTabmqsu")) != -1) {
  switch (VAR_13) {
  case 'H':
   VAR_0 = 1;
   break;
  case 'T':
   VAR_2 = 1;
   break;
  case 'a':
   VAR_4 = VAR_5 = VAR_2 = VAR_10 = 1;
   break;
  case 'b':
   VAR_5 = 1;
   break;
  case 'm':
   VAR_6 = 1;
   break;
  case 'q':
   VAR_8 = 1;
   break;
  case 's':
   VAR_9 = 1;
   break;
  case 'u':
   VAR_10 = 1;
   break;
  default:
   FUNC_10();

  }
 }
 VAR_11 -= VAR_7;
 VAR_12 += VAR_7;

 if (VAR_11 >= 2 && FUNC_9(VAR_12[0], "am") == 0 &&
     (FUNC_9(VAR_12[1], "i") == 0 || FUNC_9(VAR_12[1], "I") == 0)) {

  VAR_6 = 1;
  VAR_11 -= 2;
  VAR_12 += 2;
 }
 if (VAR_11 > 1)
  FUNC_10();

 if (*VAR_12 != ((void*)0)) {
  if (FUNC_8(VAR_3, *VAR_12) != 0)
   FUNC_1(1, "%s", *VAR_12);
 }

 if (VAR_8)
  FUNC_6();
 else {
  if (VAR_9)
   VAR_2 = VAR_10 = 0;
  if (VAR_0)
   FUNC_4();
  if (VAR_6)
   FUNC_11();
  else
   FUNC_5();
 }

 FUNC_0();

 FUNC_2(0);
}
