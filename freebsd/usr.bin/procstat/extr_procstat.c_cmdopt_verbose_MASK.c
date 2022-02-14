
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char* const*,char*) ;
 int VAR_1 ;
 int FUNC_1 () ;

void
FUNC_2(int VAR_2, char * const VAR_3[])
{
 int VAR_4;

 while ((VAR_4 = FUNC_0(VAR_2, VAR_3, "v")) != -1) {
  switch (VAR_4) {
  case 'v':
   VAR_1 |= VAR_0;
   break;
  case '?':
  default:
   FUNC_1();
  }
 }
}
