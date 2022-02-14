
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int * FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int,char**,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_6 (char*,char) ;
 int FUNC_7 () ;

int
FUNC_8(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;
 char *VAR_11;
 char VAR_12[VAR_0];

 VAR_9 = VAR_7 = 0;
 VAR_10 = VAR_2;
 while ((VAR_8 = FUNC_5(VAR_5, VAR_6, "-a")) != -1) {
  switch (VAR_8) {
  case '-':
   if (VAR_9)
    FUNC_7();
   VAR_7 = 1;
   break;
  case 'a':
   if (VAR_7)
    FUNC_7();
   VAR_9 = 1;
   break;
  case '?':
  default:
   FUNC_7();

  }
 }
 VAR_5 -= VAR_3;
 VAR_6 += VAR_3;

 if (VAR_9) {
  if (VAR_5 != 0)
   FUNC_7();
  FUNC_1();
 } else {
  if (VAR_7) {
   while (FUNC_4(VAR_12, VAR_0, VAR_4) != ((void*)0) &&
       VAR_10 == VAR_2) {
    if (VAR_12[0] == '\n')
     continue;
    if ((VAR_11 = FUNC_6(VAR_12, '\n')) != ((void*)0))
     *VAR_11 = '\0';
    VAR_10 = FUNC_0(VAR_12);
   }
   if (FUNC_3(VAR_4))
    FUNC_2(VAR_1, "stdin");
  } else {
   if (VAR_5 == 0)
    FUNC_7();
   while (VAR_5 && VAR_10 == VAR_2) {
    VAR_10 = FUNC_0(*VAR_6);
    ++VAR_6;
    --VAR_5;
   }
  }
 }
 return (VAR_10);
}
