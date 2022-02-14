
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef scalar_t__ HdrType ;
typedef int FILE ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char const*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 char* FUNC_2 (int *,size_t*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (char*) ;
 int VAR_9 ;
 int FUNC_5 (size_t,size_t) ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (size_t,size_t,char*,size_t,size_t) ;
 int FUNC_7 (char) ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*,int,char*) ;

__attribute__((used)) static void
FUNC_10(FILE *VAR_11, const char *VAR_12)
{
 size_t VAR_13 = VAR_0;
 size_t VAR_14 = 0;
 size_t VAR_15 = VAR_0;
 HdrType VAR_16 = VAR_8;


 wchar_t *VAR_17;
 size_t VAR_18;

 if (VAR_2) {
  FUNC_0(VAR_11, VAR_12);
  return;
 }
 while ((VAR_17 = FUNC_2(VAR_11, &VAR_18)) != ((void*)0)) {
  size_t VAR_19 = FUNC_3(VAR_17, VAR_18);

  {
   HdrType VAR_20 = VAR_7;

   if (VAR_4 && VAR_16 != VAR_7) {
    if (VAR_19 == 0 && FUNC_4(VAR_17))
     VAR_20 = VAR_6;
    else if (VAR_19 > 0 && VAR_16 > VAR_7)
     VAR_20 = VAR_5;
   }
   if (VAR_18 == 0
       || (VAR_17[0] == '.' && !VAR_3)
       || VAR_20 == VAR_6
       || (VAR_20 == VAR_7 && VAR_16 > VAR_7)
       || (VAR_19 != VAR_13
       && VAR_20 != VAR_5
       && (!VAR_1 || VAR_14 != 1))) {
    FUNC_5(VAR_10 ? VAR_13 : VAR_15, VAR_19);
    VAR_14 = 0;
    VAR_15 = VAR_19;
    VAR_13 = VAR_19;
    if (VAR_20 == VAR_6)
     VAR_13 = 2;
    if (VAR_18 == 0 || (VAR_17[0] == '.' && !VAR_3)) {
     if (VAR_18 == 0)
      FUNC_7('\n');
     else
      FUNC_9(L"%.*ls\n", (int)VAR_18,
          VAR_17);
     VAR_16 = VAR_8;
     continue;
    }
   } else {





    if (VAR_19 != VAR_13 &&
        VAR_20 != VAR_5)
     VAR_13 = VAR_19;
   }
   VAR_16 = VAR_20;
  }

  {
   size_t VAR_21 = VAR_19;

   while (VAR_21 < VAR_18) {

    size_t VAR_22 = 0, VAR_23 = 0;

    while (VAR_21 + VAR_22 < VAR_18 &&
        VAR_17[VAR_21 + VAR_22] != ' ')
     ++VAR_22;
    VAR_23 = VAR_22;
    while (VAR_21 + VAR_23 < VAR_18 &&
        VAR_17[VAR_21 + VAR_23] == ' ')
     ++VAR_23;

    FUNC_6(VAR_15, VAR_13,
        VAR_17 + VAR_21, VAR_22,
        VAR_23 - VAR_22);
    VAR_21 += VAR_23;
   }
  }
  ++VAR_14;
 }
 FUNC_5(VAR_10 ? VAR_13 : VAR_15, 0);
 if (FUNC_1(VAR_11)) {
  FUNC_8("%s", VAR_12);
  ++VAR_9;
 }
}
