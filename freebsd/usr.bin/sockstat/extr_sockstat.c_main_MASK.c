
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int,char**,char*) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 scalar_t__* VAR_20 ;
 int FUNC_11 () ;
 int FUNC_12 () ;

int
FUNC_13(int VAR_21, char *VAR_22[])
{
 int VAR_23 = -1;
 int VAR_24, VAR_25;

 VAR_11 = -1;
 while ((VAR_24 = FUNC_7(VAR_21, VAR_22, "46cj:Llp:P:qSsUuvw")) != -1)
  switch (VAR_24) {
  case '4':
   VAR_5 = 1;
   break;
  case '6':
   VAR_6 = 1;
   break;
  case 'c':
   VAR_10 = 1;
   break;
  case 'j':
   VAR_11 = FUNC_8(VAR_18);
   if (VAR_11 < 0)
    FUNC_1(1, "%s", VAR_4);
   break;
  case 'L':
   VAR_7 = 1;
   break;
  case 'l':
   VAR_12 = 1;
   break;
  case 'p':
   FUNC_9(VAR_18);
   break;
  case 'P':
   VAR_23 = FUNC_10(VAR_18);
   break;
  case 'q':
   VAR_13 = 1;
   break;
  case 'S':
   VAR_8 = 1;
   break;
  case 's':
   VAR_14 = 1;
   break;
  case 'U':
   VAR_9 = 1;
   break;
  case 'u':
   VAR_15 = 1;
   break;
  case 'v':
   ++VAR_16;
   break;
  case 'w':
   VAR_17 = 1;
   break;
  default:
   FUNC_12();
  }

 VAR_21 -= VAR_19;
 VAR_22 += VAR_19;

 if (VAR_21 > 0)
  FUNC_12();

 if ((!VAR_5 && !VAR_6) && VAR_23 != -1)
  VAR_5 = VAR_6 = 1;
 if (!VAR_5 && !VAR_6 && !VAR_15)
  VAR_5 = VAR_6 = VAR_15 = 1;
 if ((VAR_5 || VAR_6) && VAR_23 == -1)
  VAR_23 = FUNC_11();
 if (!VAR_10 && !VAR_12)
  VAR_10 = VAR_12 = 1;

 if (VAR_5 || VAR_6) {
  for (VAR_25 = 0; VAR_25 < VAR_23; VAR_25++)
   if (VAR_20[VAR_25] == VAR_0)
    FUNC_4();
   else
    FUNC_3(VAR_20[VAR_25]);
 }

 if (VAR_15 || (VAR_23 == -1 && !VAR_5 && !VAR_6)) {
  FUNC_5(VAR_3);
  FUNC_5(VAR_1);
  FUNC_5(VAR_2);
 }
 FUNC_6();
 FUNC_0();
 FUNC_2(0);
}
