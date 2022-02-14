
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char** VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,char**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int,char**,char*) ;
 char* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (char*,char*,char) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*,int *,int*,char***) ;
 int VAR_10 ;
 char* FUNC_11 (char*,char) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 () ;

int
FUNC_15(int VAR_11, char **VAR_12)
{
 char *VAR_13, **VAR_14, *VAR_15, **VAR_16, VAR_17;
 char *VAR_18[1];
 int VAR_19, VAR_20;
 int VAR_21;

 VAR_13 = ((void*)0);
 VAR_20 = 0;
 VAR_17 = '\n';
 while ((VAR_19 = FUNC_5(VAR_11, VAR_12, "-0iP:S:u:v")) != -1)
  switch(VAR_19) {
  case '-':
  case 'i':
   VAR_20 = 1;
   break;
  case '0':
   VAR_17 = '\0';
   break;
  case 'P':
   VAR_13 = FUNC_12(VAR_8);
   break;
  case 'S':




   FUNC_10(VAR_8, &VAR_9, &VAR_11, &VAR_12);
   break;
  case 'u':
   if (VAR_5)
    FUNC_4(VAR_10, "#env unset:\t%s\n", VAR_8);
   VAR_21 = FUNC_13(VAR_8);
   if (VAR_21 == -1)
    FUNC_0(VAR_4, "unsetenv %s", VAR_8);
   break;
  case 'v':
   VAR_5++;
   if (VAR_5 > 1)
    FUNC_4(VAR_10, "#env verbosity now at %d\n",
        VAR_5);
   break;
  case '?':
  default:
   FUNC_14();
  }
 if (VAR_20) {
  VAR_6 = VAR_18;
  VAR_18[0] = ((void*)0);
  if (VAR_5)
   FUNC_4(VAR_10, "#env clearing environ\n");
 }
 for (VAR_12 += VAR_9; *VAR_12 && (VAR_15 = FUNC_11(*VAR_12, '=')); ++VAR_12) {
  if (VAR_5)
   FUNC_4(VAR_10, "#env setenv:\t%s\n", *VAR_12);
  *VAR_15 = '\0';
  VAR_21 = FUNC_8(*VAR_12, VAR_15 + 1, 1);
  *VAR_15 = '=';
  if (VAR_21 == -1)
   FUNC_0(VAR_4, "setenv %s", *VAR_12);
 }
 if (*VAR_12) {
  if (VAR_17 == '\0')
   FUNC_1(VAR_1, "cannot specify command with -0");
  if (VAR_13)
   FUNC_7(VAR_13, VAR_12);
  if (VAR_5) {
   FUNC_4(VAR_10, "#env executing:\t%s\n", *VAR_12);
   for (VAR_16 = VAR_12, VAR_11 = 0; *VAR_16; VAR_16++, VAR_11++)
    FUNC_4(VAR_10, "#env    arg[%d]=\t'%s'\n",
        VAR_11, *VAR_16);
   if (VAR_5 > 1)
    FUNC_9(1);
  }
  FUNC_2(*VAR_12, VAR_12);
  FUNC_0(VAR_7 == VAR_0 ? VAR_3 : VAR_2,
      "%s", *VAR_12);
 }
 for (VAR_14 = VAR_6; *VAR_14; VAR_14++)
  (void)FUNC_6("%s%c", *VAR_14, VAR_17);
 FUNC_3(0);
}
