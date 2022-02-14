
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uintmax_t ;
typedef int action_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 uintptr_t VAR_7 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char**,char*) ;
 int FUNC_6 (int ,int ) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*) ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_9 (char*,char**,int) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_12, char *VAR_13[])
{
 int VAR_14;
 int VAR_15;
 int VAR_16;
 action_t VAR_17;
 char *VAR_18;
 char *VAR_19;

 VAR_15 = -1;
 VAR_14 = -1;
 VAR_17 = VAR_4;
 VAR_18 = ((void*)0);
 VAR_19 = ((void*)0);
 VAR_10 = FUNC_1(VAR_13[0]);

 while ((VAR_16 = FUNC_5(VAR_12, VAR_13, "sb:h")) != -1)
  switch (VAR_16) {
  case 's':
   VAR_17 = VAR_5;
   break;
  case 'b':
   VAR_18 = VAR_8;
   break;
  case 'h':
  default:
       FUNC_10();
 }
 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;

 if (VAR_18 != ((void*)0)) {
  uintmax_t VAR_20;

  VAR_20 = FUNC_9(VAR_18, &VAR_19, 16);
  if (*VAR_19 != '\0') {
   FUNC_4(VAR_11, "Invalid base address.\r\n");
   FUNC_10();
  }

  VAR_7 = (uintptr_t)VAR_20;
  VAR_7 &= ~VAR_3;
 }

 if (VAR_12 > 0)
  FUNC_10();

 if ((VAR_14 = FUNC_6(VAR_6, VAR_2)) == -1) {
  FUNC_8("open");
  goto cleanup;
 }

 FUNC_0();
 FUNC_7(VAR_14, VAR_17);

 VAR_15 = 0;
cleanup:
 if (VAR_14 != -1)
  FUNC_2(VAR_14);

 FUNC_3 ((VAR_15 == 0) ? VAR_1 : VAR_0);
}
