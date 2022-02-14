
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 () ;
 int VAR_7 ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int,char**,char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 char* FUNC_8 (int ) ;
 int VAR_10 ;
 char* VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_9 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ,int *,int ,int ) ;
 int VAR_16 ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_17, char *VAR_18[])
{
 int VAR_19, VAR_20;
 char *VAR_21;

 (void) FUNC_10(VAR_2, "");

 VAR_20 = 0;
 VAR_8 = ((void*)0);

 while ((VAR_19 = FUNC_7(VAR_17, VAR_18, "EI:ae:f:i:lnru")) != -1)
  switch (VAR_19) {
  case 'r':
  case 'E':
   VAR_14 = VAR_3;
   break;
  case 'I':
   VAR_8 = VAR_11;
   VAR_9 = 1;
   break;
  case 'a':
   VAR_6 = 1;
   break;
  case 'e':
   VAR_7 = 1;
   if ((VAR_21 = FUNC_8(FUNC_14(VAR_11) + 2)) == ((void*)0))
    FUNC_4(1, "malloc");
   FUNC_13(VAR_21, VAR_11);
   FUNC_12(VAR_21, "\n");
   FUNC_0(VAR_1, VAR_21);
   break;
  case 'f':
   VAR_20 = 1;
   FUNC_0(VAR_0, VAR_11);
   break;
  case 'i':
   VAR_8 = VAR_11;
   VAR_9 = 0;
   break;
  case 'l':
   if(FUNC_11(VAR_16, ((void*)0), VAR_4, 0) != 0)
    FUNC_16("setting line buffered output failed");
   break;
  case 'n':
   VAR_10 = 1;
   break;
  case 'u':
   if(FUNC_11(VAR_16, ((void*)0), VAR_5, 0) != 0)
    FUNC_16("setting unbuffered output failed");
   break;
  default:
  case '?':
   FUNC_15();
  }
 VAR_17 -= VAR_12;
 VAR_18 += VAR_12;


 if (!VAR_7 && !VAR_20 && *VAR_18) {
  FUNC_0(VAR_1, *VAR_18);
  VAR_18++;
 }

 FUNC_3();


 if (*VAR_18)
  for (; *VAR_18; VAR_18++)
   FUNC_1(*VAR_18);
 else
  FUNC_1(((void*)0));
 FUNC_9();
 FUNC_2(VAR_13, ((void*)0));
 if (FUNC_6(VAR_16))
  FUNC_4(1, "stdout");
 FUNC_5(VAR_15);
}
