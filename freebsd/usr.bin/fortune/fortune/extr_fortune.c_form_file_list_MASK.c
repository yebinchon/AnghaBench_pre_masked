
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 char* VAR_4 ;
 char** VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int,char*,int *,int *,int *,int *) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (char*,char*) ;

__attribute__((used)) static int
FUNC_4(char **VAR_10, int VAR_11)
{
 int VAR_12, VAR_13;
 char *VAR_14;
 char **VAR_15;

 if (VAR_11 == 0) {
  if (VAR_3) {
   VAR_6 = VAR_8;
   VAR_15 = VAR_5;
   VAR_12 = 0;
   while (*VAR_15) {
    VAR_12 += FUNC_0(VAR_7, *VAR_15++, ((void*)0),
           &VAR_1, &VAR_2, ((void*)0));
   }
   VAR_6 = VAR_0;
   if (!VAR_12) {
    FUNC_1(VAR_9, "No fortunes found in %s.\n",
        VAR_4);
   }
   return (VAR_12 != 0);
  } else {
   VAR_15 = VAR_5;
   VAR_12 = 0;
   while (*VAR_15) {
    VAR_12 += FUNC_0(VAR_7, "fortunes", *VAR_15++,
           &VAR_1, &VAR_2, ((void*)0));
   }
   if (!VAR_12) {
    FUNC_1(VAR_9, "No fortunes found in %s.\n",
        VAR_4);
   }
   return (VAR_12 != 0);
  }
 }
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_13 = VAR_7;
  if (!FUNC_2((unsigned char)VAR_10[VAR_12][0]))
   VAR_14 = VAR_10[VAR_12];
  else {
   VAR_13 = 0;
   for (VAR_14 = VAR_10[VAR_12]; FUNC_2((unsigned char)*VAR_14); VAR_14++)
    VAR_13 = VAR_13 * 10 + *VAR_14 - '0';
   if (VAR_13 > 100) {
    FUNC_1(VAR_9, "percentages must be <= 100\n");
    return (VAR_0);
   }
   if (*VAR_14 == '.') {
    FUNC_1(VAR_9, "percentages must be integers\n");
    return (VAR_0);
   }





   if (*VAR_14 != '%') {
    VAR_13 = VAR_7;
    VAR_14 = VAR_10[VAR_12];
   }
   else if (*++VAR_14 == '\0') {
    if (++VAR_12 >= VAR_11) {
     FUNC_1(VAR_9, "percentages must precede files\n");
     return (VAR_0);
    }
    VAR_14 = VAR_10[VAR_12];
   }
  }
  if (FUNC_3(VAR_14, "all") == 0) {
   VAR_15 = VAR_5;
   VAR_12 = 0;
   while (*VAR_15) {
    VAR_12 += FUNC_0(VAR_7, *VAR_15++, ((void*)0),
           &VAR_1, &VAR_2, ((void*)0));
   }
   if (!VAR_12) {
    FUNC_1(VAR_9, "No fortunes found in %s.\n",
        VAR_4);
    return (VAR_0);
   }
  } else if (!FUNC_0(VAR_13, VAR_14, ((void*)0), &VAR_1,
         &VAR_2, ((void*)0))) {
    return (VAR_0);
  }
 }

 return (VAR_8);
}
