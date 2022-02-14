
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (int,char*) ;
 char* FUNC_1 (int *,size_t*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,size_t,int,int ) ;
 scalar_t__ FUNC_4 (char) ;
 char* FUNC_5 (size_t) ;
 int VAR_3 ;
 size_t FUNC_6 (char*,char*,int,int *) ;
 int FUNC_7 (char*,char*,size_t) ;
 char* VAR_4 ;
 int FUNC_8 (char) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,char*,char const*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_10(FILE *VAR_8, const char *VAR_9)
{
 wchar_t VAR_10;
 int VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16;
 char *VAR_17, *VAR_18;
 size_t VAR_19, VAR_20, VAR_21;

 VAR_18 = ((void*)0);
 while ((VAR_17 = FUNC_1(VAR_8, &VAR_20)) != ((void*)0)) {
  VAR_21 = VAR_20;

  if (*(VAR_17 + VAR_20 - 1) != '\n') {

   VAR_18 = FUNC_5(VAR_20 + 1);
   if (VAR_18 == ((void*)0))
    FUNC_0(1, "malloc");
   FUNC_7(VAR_18, VAR_17, VAR_20);
   *(VAR_18 + VAR_20) = '\n';
   VAR_17 = VAR_18;
   VAR_21++;
  }
  VAR_16 = 0;
  for (VAR_13 = 0, VAR_15 = VAR_17;; VAR_15 += VAR_19) {
   VAR_19 = FUNC_6(&VAR_10, VAR_15, VAR_17 + VAR_21 - VAR_15, ((void*)0));
   if (VAR_19 == (size_t)-1 || VAR_19 == (size_t)-2) {
    FUNC_9(VAR_0, "%s", VAR_9);
    FUNC_2(VAR_18);
    return (1);
   }
   if (VAR_19 == 0)
    VAR_19 = 1;

   if (FUNC_4(VAR_10))
    VAR_13 = 1;
   if (VAR_10 == '\n') {
    if (!VAR_13 && !VAR_5)
     (void)FUNC_3(VAR_17, VAR_20, 1, VAR_6);
    break;
   }
  }
  if (!VAR_13)
   continue;

  VAR_14 = VAR_4 + 1;
  for (VAR_11 = VAR_3, VAR_15 = VAR_17; VAR_11; --VAR_11, ++VAR_14) {
   if (*VAR_14 && VAR_16++)
    for (VAR_12 = 0; VAR_2[VAR_12] != '\0'; VAR_12++)
     FUNC_8(VAR_2[VAR_12]);
   for (;;) {
    VAR_19 = FUNC_6(&VAR_10, VAR_15, VAR_17 + VAR_21 - VAR_15,
        ((void*)0));
    if (VAR_19 == (size_t)-1 || VAR_19 == (size_t)-2) {
     FUNC_9(VAR_0, "%s", VAR_9);
     FUNC_2(VAR_18);
     return (1);
    }
    if (VAR_19 == 0)
     VAR_19 = 1;
    VAR_15 += VAR_19;
    if (VAR_10 == '\n' || FUNC_4(VAR_10)) {

     if (VAR_7 && VAR_10 != '\n')
      while (FUNC_4(*VAR_15))
       VAR_15++;
     break;
    }
    if (*VAR_14)
     for (VAR_12 = 0; VAR_12 < (int)VAR_19; VAR_12++)
      FUNC_8(VAR_15[VAR_12 - VAR_19]);
   }
   if (VAR_10 == '\n')
    break;
  }
  if (VAR_10 != '\n') {
   if (VAR_1) {
    if (VAR_16)
     for (VAR_12 = 0; VAR_2[VAR_12] != '\0'; VAR_12++)
      FUNC_8(VAR_2[VAR_12]);
    for (; (VAR_10 = *VAR_15) != '\n'; ++VAR_15)
     (void)FUNC_8(VAR_10);
   } else
    for (; (VAR_10 = *VAR_15) != '\n'; ++VAR_15);
  }
  (void)FUNC_8('\n');
 }
 FUNC_2(VAR_18);
 return (0);
}
