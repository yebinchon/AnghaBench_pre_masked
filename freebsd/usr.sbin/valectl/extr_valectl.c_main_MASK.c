
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
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*,int,int,char*,int) ;
 int FUNC_2 (int ,char*,int,char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (int) ;

int
FUNC_6(int VAR_11, char *VAR_12[])
{
 int VAR_13, VAR_14 = 0, VAR_15 = 0;
 char *VAR_16 = ((void*)0), *VAR_17 = ((void*)0);
 int VAR_18 = 0;

 while ((VAR_13 = FUNC_3(VAR_11, VAR_12, "d:a:h:g:l:n:r:C:p:P:m:")) != -1) {
  if (VAR_13 != 'C' && VAR_13 != 'm')
   VAR_16 = VAR_8;
  switch (VAR_13) {
  default:
   FUNC_2(VAR_10, "bad option %c %s", VAR_13, VAR_8);
   FUNC_5(-1);
   break;
  case 'd':
   VAR_14 = VAR_2;
   break;
  case 'a':
   VAR_14 = VAR_0;
   break;
  case 'h':
   VAR_14 = VAR_0;
   VAR_15 = VAR_3;
   break;
  case 'n':
   VAR_14 = VAR_5;
   break;
  case 'r':
   VAR_14 = VAR_1;
   break;
  case 'g':
   VAR_14 = 0;
   break;
  case 'l':
   VAR_14 = VAR_4;
   break;
  case 'C':
   VAR_17 = FUNC_4(VAR_8);
   break;
  case 'p':
   VAR_14 = VAR_7;
   break;
  case 'P':
   VAR_14 = VAR_6;
   break;
  case 'm':
   VAR_18 = FUNC_0(VAR_8);
   break;
  }
 }
 if (VAR_9 != VAR_11) {

  FUNC_5(-1);
 }
 if (VAR_11 == 1) {
  VAR_14 = VAR_4;
  VAR_16 = ((void*)0);
 }
 return FUNC_1(VAR_16, VAR_14, VAR_15, VAR_17, VAR_18) ? 1 : 0;
}
