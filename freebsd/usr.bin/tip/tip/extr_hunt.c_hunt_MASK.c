
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;
typedef int sig_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 (char*,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (scalar_t__,struct termios*) ;
 int FUNC_10 (scalar_t__,int ,struct termios*) ;
 scalar_t__ FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 char* VAR_13 ;
 int FUNC_13 (int ) ;

long
FUNC_14(char *VAR_14)
{
 char *VAR_15;
 sig_t VAR_16;

 VAR_16 = FUNC_7(VAR_6, VAR_10);
 while ((VAR_15 = FUNC_2(VAR_14))) {
  VAR_11 = 0;
  VAR_13 = FUNC_8(VAR_15, '/');
  if (VAR_13 == ((void*)0))
   VAR_13 = VAR_15;
  else
   VAR_13++;

  if (FUNC_11(VAR_13) < 0)
   continue;







  if (!VAR_3)
   break;
  if (FUNC_6(VAR_12) == 0) {
   FUNC_0(10);
   VAR_1 = FUNC_4(VAR_15, (VAR_5 |
       (FUNC_1(FUNC_13(VAR_0)) ? VAR_4 : 0)));
  }
  FUNC_0(0);
  if (VAR_1 < 0) {
   FUNC_5(VAR_15);
   VAR_11 = 1;
  }
  if (!VAR_11) {
   struct termios VAR_17;

   FUNC_9(VAR_1, &VAR_17);
   if (!FUNC_1(FUNC_13(VAR_0)))
    VAR_17.c_cflag |= VAR_2;
   FUNC_10(VAR_1, VAR_8, &VAR_17);
   FUNC_3(VAR_1, VAR_9, 0);
   FUNC_7(VAR_6, VAR_7);
   return ((long)VAR_15);
  }
  (void)FUNC_12(VAR_13);
 }
 FUNC_7(VAR_6, VAR_16);
 return (VAR_11 ? -1 : (long)VAR_15);
}
