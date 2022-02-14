
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int,char**,char*) ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (char*,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 (char*,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (char*) ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_6, char **VAR_7)
{
 char *VAR_8, *VAR_9;
 ssize_t VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = VAR_1;

 while ((VAR_11 = FUNC_3(VAR_6, VAR_7, "as")) != -1) {
  switch (VAR_11) {
  case 'a':
   VAR_3 = 1;
   break;
  case 's':
   VAR_5 = 1;
   break;
  default:
   FUNC_8();
   break;
  }
 }

 VAR_7 += VAR_4;
 VAR_6 -= VAR_4;

 if (VAR_6 == 0)
  FUNC_8();

 if ((VAR_8 = FUNC_2("PATH")) == ((void*)0))
  FUNC_1(VAR_0);
 VAR_10 = FUNC_7(VAR_8) + 1;
 VAR_9 = FUNC_4(VAR_10);
 if (VAR_9 == ((void*)0))
  FUNC_0(VAR_0, ((void*)0));

 while (VAR_6 > 0) {
  FUNC_5(VAR_9, VAR_8, VAR_10);

  if (FUNC_7(*VAR_7) >= VAR_2 ||
      FUNC_6(VAR_9, *VAR_7) == -1)
   VAR_12 = VAR_0;

  VAR_7++;
  VAR_6--;
 }

 FUNC_1(VAR_12);
}
