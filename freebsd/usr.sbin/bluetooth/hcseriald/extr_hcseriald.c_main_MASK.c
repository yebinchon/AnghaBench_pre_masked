
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
typedef int speed_t ;
typedef int sa ;
typedef int p ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (char*,char*) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (int,char**,char*) ;
 int FUNC_9 () ;
 char* VAR_10 ;
 int FUNC_10 (struct sigaction*,int ,int) ;
 int FUNC_11 (char*,int,char*) ;
 int FUNC_12 (char*,int,int ) ;
 char* VAR_11 ;
 int FUNC_13 (int ,int *,int *,int *,int *) ;
 scalar_t__ FUNC_14 (int ,struct sigaction*,int *) ;
 int VAR_12 ;
 int FUNC_15 (char*,int,char*,char*,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*,char*,int ,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (char*) ;

int
FUNC_20(int VAR_13, char *VAR_14[])
{
 char *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 speed_t VAR_17 = 115200;
 int VAR_18, VAR_19 = 1;
 char VAR_20[VAR_0];
 FILE *VAR_21 = ((void*)0);
 struct sigaction VAR_22;


 while ((VAR_18 = FUNC_8(VAR_13, VAR_14, "df:n:s:h")) != -1) {
  switch (VAR_18) {
  case 'd':
   VAR_19 = 0;
   break;

  case 'f':
   VAR_15 = VAR_11;
   break;

  case 'n':
   VAR_16 = VAR_11;
   break;

  case 's':
   VAR_17 = FUNC_0(VAR_11);
   if (VAR_17 < 0)
    FUNC_19(VAR_14[0]);
   break;

  case 'h':
  default:
   FUNC_19(VAR_14[0]);
   break;
  }
 }

 if (VAR_15 == ((void*)0) || VAR_16 == ((void*)0))
  FUNC_19(VAR_14[0]);

 FUNC_12(VAR_10, VAR_3 | VAR_2, VAR_4);


 VAR_18 = FUNC_11(VAR_15, VAR_17, VAR_16);

 if (VAR_19 && FUNC_3(0, 0) < 0) {
  FUNC_17(VAR_1, "Could not daemon(0, 0). %s (%d)",
   FUNC_16(VAR_9), VAR_9);
  FUNC_4(1);
 }


 FUNC_15(VAR_20, sizeof(VAR_20), "/var/run/%s.%s.pid", VAR_10, VAR_16);
 VAR_21 = FUNC_6(VAR_20, "w");
 if (VAR_21 == ((void*)0)) {
  FUNC_17(VAR_1, "Could not fopen(%s). %s (%d)",
   VAR_20, FUNC_16(VAR_9), VAR_9);
  FUNC_4(1);
 }
 FUNC_7(VAR_21, "%d", FUNC_9());
 FUNC_5(VAR_21);


 FUNC_10(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.sa_handler = VAR_12;

 if (FUNC_14(VAR_7, &VAR_22, ((void*)0)) < 0) {
  FUNC_17(VAR_1, "Could not sigaction(SIGTERM). %s (%d)",
   FUNC_16(VAR_9), VAR_9);
  FUNC_4(1);
 }

 if (FUNC_14(VAR_5, &VAR_22, ((void*)0)) < 0) {
  FUNC_17(VAR_1, "Could not sigaction(SIGHUP). %s (%d)",
   FUNC_16(VAR_9), VAR_9);
  FUNC_4(1);
 }

 if (FUNC_14(VAR_6, &VAR_22, ((void*)0)) < 0) {
  FUNC_17(VAR_1, "Could not sigaction(SIGINT). %s (%d)",
   FUNC_16(VAR_9), VAR_9);
  FUNC_4(1);
 }


 while (!VAR_8)
  FUNC_13(0, ((void*)0), ((void*)0), ((void*)0), ((void*)0));


 FUNC_18(VAR_20);
 FUNC_1(VAR_18);
 FUNC_2();

 return (0);
}
