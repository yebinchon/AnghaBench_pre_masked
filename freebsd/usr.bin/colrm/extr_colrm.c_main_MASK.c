
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int const FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char**,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;

int
FUNC_9(int VAR_5, char *VAR_6[])
{
 u_long VAR_7, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 char *VAR_12;

 FUNC_5(VAR_0, "");

 while ((VAR_10 = FUNC_2(VAR_5, VAR_6, "")) != -1)
  switch(VAR_10) {
  case '?':
  default:
   FUNC_7();
  }
 VAR_5 -= VAR_2;
 VAR_6 += VAR_2;

 VAR_8 = VAR_9 = 0;
 switch(VAR_5) {
 case 2:
  VAR_9 = FUNC_6(VAR_6[1], &VAR_12, 10);
  if (VAR_9 <= 0 || *VAR_12)
   FUNC_1(1, "illegal column -- %s", VAR_6[1]);

 case 1:
  VAR_8 = FUNC_6(VAR_6[0], &VAR_12, 10);
  if (VAR_8 <= 0 || *VAR_12)
   FUNC_1(1, "illegal column -- %s", VAR_6[0]);
  break;
 case 0:
  break;
 default:
  FUNC_7();
 }

 if (VAR_9 && VAR_8 > VAR_9)
  FUNC_1(1, "illegal start and stop columns");

 for (VAR_7 = 0;;) {
  switch (VAR_10 = FUNC_3()) {
  case 128:
   FUNC_0(VAR_3);
   break;
  case '\b':
   if (VAR_7)
    --VAR_7;
   break;
  case '\n':
   VAR_7 = 0;
   break;
  case '\t':
   VAR_7 = (VAR_7 + VAR_1) & ~(VAR_1 - 1);
   break;
  default:
   if ((VAR_11 = FUNC_8(VAR_10)) > 0)
    VAR_7 += VAR_11;
   break;
  }

  if ((!VAR_8 || VAR_7 < VAR_8 || (VAR_9 && VAR_7 > VAR_9)) &&
      FUNC_4(VAR_10) == 128)
   FUNC_0(VAR_4);
 }
}
