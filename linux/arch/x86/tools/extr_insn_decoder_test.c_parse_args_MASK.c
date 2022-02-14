
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**,char*) ;
 char* VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_2(int VAR_3, char **VAR_4)
{
 int VAR_5;
 VAR_0 = VAR_4[0];
 while ((VAR_5 = FUNC_0(VAR_3, VAR_4, "ynv")) != -1) {
  switch (VAR_5) {
  case 'y':
   VAR_2 = 1;
   break;
  case 'n':
   VAR_2 = 0;
   break;
  case 'v':
   VAR_1 = 1;
   break;
  default:
   FUNC_1();
  }
 }
}
