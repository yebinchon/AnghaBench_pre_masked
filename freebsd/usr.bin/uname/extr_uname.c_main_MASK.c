
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,char**,char*) ;
 scalar_t__ VAR_10 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

int
FUNC_5(int VAR_11, char *VAR_12[])
{
 u_int VAR_13;
 int VAR_14;

 FUNC_3();
 VAR_13 = 0;

 while ((VAR_14 = FUNC_1(VAR_11, VAR_12, "abiKmnoprsUv")) != -1)
  switch(VAR_14) {
  case 'a':
   VAR_13 |= (VAR_3 | VAR_4 | VAR_6 | VAR_7 | VAR_9);
   break;
  case 'b':
   VAR_13 |= VAR_0;
   break;
  case 'i':
   VAR_13 |= VAR_1;
   break;
  case 'K':
   VAR_13 |= VAR_2;
   break;
  case 'm':
   VAR_13 |= VAR_3;
   break;
  case 'n':
   VAR_13 |= VAR_4;
   break;
  case 'p':
   VAR_13 |= VAR_5;
   break;
  case 'r':
   VAR_13 |= VAR_6;
   break;
  case 's':
  case 'o':
   VAR_13 |= VAR_7;
   break;
  case 'U':
   VAR_13 |= VAR_8;
   break;
  case 'v':
   VAR_13 |= VAR_9;
   break;
  case '?':
  default:
   FUNC_4();
  }

 VAR_11 -= VAR_10;
 VAR_12 += VAR_10;

 if (VAR_11)
  FUNC_4();

 if (!VAR_13)
  VAR_13 |= VAR_7;

 FUNC_2(VAR_13);
 FUNC_0(0);
}
