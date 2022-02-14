
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,char* const*,char*) ;
 void* VAR_4 ;
 int FUNC_4 () ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 () ;
 int VAR_13 ;

int
FUNC_8(int VAR_14, char * const VAR_15[])
{
 int VAR_16;

 while ((VAR_16 = FUNC_3(VAR_14, VAR_15, "adg:l:mopstux")) != -1)
  switch (VAR_16) {
  case 'a':
   VAR_0 = 1;
   break;
  case 'd':
   VAR_2 = 0;
   VAR_1 = 1;
   break;
  case 'g':
   VAR_2 = 0;
   VAR_3 = VAR_7;
   break;
  case 'l':
   VAR_2 = 0;
   VAR_4 = VAR_7;
   break;
  case 'm':
   VAR_5 = 1;
   break;
  case 'o':
   VAR_6 = 1;
   break;
  case 'p':
   VAR_2 = 0;
   VAR_9 = 1;
   break;
  case 's':
   VAR_2 = 0;
   VAR_10 = 1;
   break;
  case 't':
   VAR_11 = 1;
   break;
  case 'u':
   VAR_2 = 0;
   VAR_12 = 1;
   break;
  case 'x':
   VAR_13 = 1;
   break;
  default:
   FUNC_7();
  }

 VAR_14 -= VAR_8;
 VAR_15 += VAR_8;

 if (VAR_14 > 0)
  FUNC_7();

 FUNC_1();
 FUNC_2();
 FUNC_5();
 FUNC_6();
 FUNC_4();
 FUNC_0(0);
}
