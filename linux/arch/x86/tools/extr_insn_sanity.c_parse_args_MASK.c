
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (int,char**,char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_3 (unsigned int) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,char**,int ) ;
 int FUNC_6 (char*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void FUNC_7(int VAR_9, char **VAR_10)
{
 int VAR_11;
 char *VAR_12 = ((void*)0);
 int VAR_13 = 0;

 VAR_4 = VAR_10[0];
 while ((VAR_11 = FUNC_1(VAR_9, VAR_10, "ynvs:m:i:")) != -1) {
  switch (VAR_11) {
  case 'y':
   VAR_8 = 1;
   break;
  case 'n':
   VAR_8 = 0;
   break;
  case 'v':
   VAR_7++;
   break;
  case 'i':
   if (FUNC_4("-", VAR_3) == 0)
    VAR_0 = VAR_6;
   else
    VAR_0 = FUNC_0(VAR_3, "r");
   if (!VAR_0)
    FUNC_6("Failed to open input file");
   break;
  case 's':
   VAR_5 = (unsigned int)FUNC_5(VAR_3, &VAR_12, 0);
   if (*VAR_12 == ',') {
    VAR_3 = VAR_12 + 1;
    VAR_2 = FUNC_5(VAR_3, &VAR_12, 0);
   }
   if (*VAR_12 != '\0' || VAR_12 == VAR_3)
    FUNC_6("Failed to parse seed");
   VAR_13 = 1;
   break;
  case 'm':
   VAR_1 = FUNC_5(VAR_3, &VAR_12, 0);
   if (*VAR_12 != '\0' || VAR_12 == VAR_3)
    FUNC_6("Failed to parse max_iter");
   break;
  default:
   FUNC_6(((void*)0));
  }
 }


 if (VAR_1 < VAR_2)
  FUNC_6("Max iteration number must be bigger than iter-num");

 if (VAR_13 && VAR_0)
  FUNC_6("Don't use input file (-i) with random seed (-s)");


 if (!VAR_0) {
  if (!VAR_13)
   FUNC_2();
  FUNC_3(VAR_5);
 }
}
