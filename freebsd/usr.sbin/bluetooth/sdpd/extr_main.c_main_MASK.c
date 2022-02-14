
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_handler; } ;
typedef int server_t ;
typedef int sa ;
typedef int int32_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char**,char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (struct sigaction*,int ,int) ;
 char* VAR_9 ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ,struct sigaction*,int *) ;
 int VAR_10 ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_11, char *VAR_12[])
{
 server_t VAR_13;
 char const *VAR_14 = VAR_1;
 char const *VAR_15 = "nobody", *VAR_16 = "nobody";
 int32_t VAR_17 = 1, VAR_18;
 struct sigaction VAR_19;

 while ((VAR_18 = FUNC_3(VAR_11, VAR_12, "c:dg:hu:")) != -1) {
  switch (VAR_18) {
  case 'c':
   VAR_14 = VAR_9;
   break;

  case 'd':
   VAR_17 = 0;
   break;

  case 'g':
   VAR_16 = VAR_9;
   break;

  case 'u':
   VAR_15 = VAR_9;
   break;

  case 'h':
  default:
   FUNC_13();

  }
 }

 FUNC_6(VAR_0, !VAR_17);


 if (VAR_17 && FUNC_0(0, 0) < 0) {
  FUNC_5("Could not become daemon. %s (%d)",
   FUNC_12(VAR_8), VAR_8);
  FUNC_2(1);
 }


 FUNC_7(&VAR_19, 0, sizeof(VAR_19));
 VAR_19.sa_handler = VAR_10;

 if (FUNC_11(VAR_5, &VAR_19, ((void*)0)) < 0 ||
     FUNC_11(VAR_2, &VAR_19, ((void*)0)) < 0 ||
     FUNC_11(VAR_3, &VAR_19, ((void*)0)) < 0) {
  FUNC_5("Could not install signal handlers. %s (%d)",
   FUNC_12(VAR_8), VAR_8);
  FUNC_2(1);
 }

 VAR_19.sa_handler = VAR_6;
 if (FUNC_11(VAR_4, &VAR_19, ((void*)0)) < 0) {
  FUNC_5("Could not install signal handlers. %s (%d)",
   FUNC_12(VAR_8), VAR_8);
  FUNC_2(1);
 }


 if (FUNC_9(&VAR_13, VAR_14) < 0)
  FUNC_2(1);

 if ((VAR_15 != ((void*)0) || VAR_16 != ((void*)0)) && FUNC_1(VAR_15, VAR_16) < 0)
  FUNC_2(1);

 for (VAR_7 = 0; !VAR_7; ) {
  if (FUNC_8(&VAR_13) != 0)
   VAR_7 ++;
 }

 FUNC_10(&VAR_13);
 FUNC_4();

 return (0);
}
