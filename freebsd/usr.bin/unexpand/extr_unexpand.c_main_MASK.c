
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*) ;
 int VAR_5 ;
 int FUNC_5 (char*) ;
 int* VAR_6 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*) ;

int
FUNC_8(int VAR_7, char *VAR_8[])
{
 int VAR_9, VAR_10;
 char *VAR_11;

 FUNC_4(VAR_0, "");

 VAR_2 = 1;
 VAR_6[0] = 8;
 while ((VAR_9 = FUNC_2(VAR_7, VAR_8, "at:")) != -1) {
  switch (VAR_9) {
  case 'a':
   VAR_1 = 1;
   break;
  case 't':
   FUNC_3(VAR_3);
   VAR_1 = 1;
   break;
  default:
   FUNC_6();

  }
 }
 VAR_7 -= VAR_4;
 VAR_8 += VAR_4;

 VAR_10 = 0;
 if (VAR_7 == 0)
  VAR_10 |= FUNC_5("stdin");
 else {
  while ((VAR_11 = *VAR_8++) != ((void*)0)) {
   if (FUNC_1(VAR_11, "r", VAR_5) == ((void*)0)) {
    FUNC_7("%s", VAR_11);
    VAR_10 = 1;
   } else
    VAR_10 |= FUNC_5(VAR_11);
  }
 }
 FUNC_0(VAR_10 != 0);
}
