
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int FUNC_3 (char*) ;

int
FUNC_4(int VAR_5, char *VAR_6[])
{
 int VAR_7, VAR_8;

 while ((VAR_7 = FUNC_1(VAR_5, VAR_6, "b:l:d:f:")) != -1) {
  switch (VAR_7) {
  case 'b':
   VAR_4 = VAR_3;
   break;
  case 'l':
   VAR_2 = FUNC_0(VAR_3);
   break;
  case 'd':
   VAR_0 = FUNC_0(VAR_3);
   break;
  case 'f':
   VAR_1 = FUNC_0(VAR_3);
   break;
  case '?':
   FUNC_3(VAR_6[0]);
  }
 }
 if (VAR_2 < 0 || VAR_0 < 0 || VAR_1 < 0 || VAR_4 == ((void*)0)) {
  FUNC_3(VAR_6[0]);
 }

 VAR_8 = FUNC_2(VAR_4, 1);

 return (VAR_8);
}
