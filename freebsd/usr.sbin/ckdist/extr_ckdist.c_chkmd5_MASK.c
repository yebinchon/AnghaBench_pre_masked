
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int) ;
 char* FUNC_2 (char const*,char*,int *) ;
 int FUNC_3 (int,char*,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char const*,int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_8 (char const*,char const*,int) ;
 int FUNC_9 (char*,char*,char*,char*,char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;

__attribute__((used)) static int
FUNC_13(FILE * VAR_12, const char *VAR_13)
{
    char VAR_14[298];
    char VAR_15[VAR_6 + 1];
    char VAR_16[VAR_5 + 1], VAR_17[VAR_5 + 1];
    const char *VAR_18;
    char *VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    char VAR_24;

    VAR_20 = 0;
    while (FUNC_5(VAR_14, sizeof(VAR_14), VAR_12)) {
 VAR_18 = ((void*)0);
 VAR_21 = 0;
 if (((VAR_22 = FUNC_9(VAR_14, "MD5 (%256s = %32s%c", VAR_15, VAR_16,
    &VAR_24)) != 3 && (!FUNC_4(VAR_12) || VAR_22 != 2)) ||
     (VAR_22 == 3 && VAR_24 != '\n') ||
     (VAR_19 = FUNC_12(VAR_15, ')')) == ((void*)0) ||
     FUNC_11(VAR_16) != VAR_5)
     VAR_21 = VAR_1;
 else {
     *VAR_19 = 0;
     if ((VAR_18 = FUNC_2(VAR_13, VAR_15, ((void*)0))) == ((void*)0))
  VAR_21 = VAR_4;
     else if (VAR_10) {
  if ((VAR_23 = FUNC_7(VAR_18, VAR_7)) == -1)
      VAR_21 = VAR_3;
  else if (FUNC_1(VAR_23))
      FUNC_3(2, "%s", VAR_18);
     } else if (!FUNC_0(VAR_18, VAR_17))
  VAR_21 = VAR_3;
     else if (FUNC_10(VAR_17, VAR_16))
  VAR_21 = VAR_2;
 }
 if (VAR_11 && VAR_21 == VAR_3 && VAR_8 == VAR_0)
     continue;
 if (VAR_21 || VAR_9)
     VAR_20 |= FUNC_8(VAR_13, VAR_18, VAR_21);
 if (FUNC_6(VAR_21))
     break;
    }
    return VAR_20;
}
