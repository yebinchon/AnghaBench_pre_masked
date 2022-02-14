
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ u_long ;
struct stat {scalar_t__ st_size; } ;
typedef scalar_t__ off_t ;
typedef scalar_t__ intmax_t ;
typedef int buf ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,scalar_t__*) ;
 char* FUNC_2 (char const*,int *,char*) ;
 int FUNC_3 (int,char*,char const*) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char*,int,int *) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char const*,int ) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_9 (char const*,char const*,int) ;
 int FUNC_10 (char*,char*,...) ;
 int * VAR_11 ;

__attribute__((used)) static int
FUNC_11(FILE * VAR_12, const char *VAR_13)
{
    char VAR_14[30];
    char VAR_15[3];
    struct stat VAR_16;
    const char *VAR_17;
    off_t VAR_18;
    u_long VAR_19;
    intmax_t VAR_20;
    uint32_t VAR_21;
    int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
    char VAR_28;

    VAR_22 = 0;
    for (VAR_26 = -1; FUNC_5(VAR_14, sizeof(VAR_14), VAR_12); VAR_26++) {
 VAR_27 = -1;
 VAR_17 = ((void*)0);
 VAR_23 = 0;
 if (VAR_26 == -1) {
     if ((VAR_24 = FUNC_10(VAR_14, "Pieces =  %d%c", &VAR_25, &VAR_28)) != 2 ||
  VAR_28 != '\n' || VAR_25 < 1)
  VAR_23 = VAR_1;
 } else if (((VAR_24 = FUNC_10(VAR_14, "cksum.%2s = %lu %jd%c", VAR_15, &VAR_19,
           &VAR_20, &VAR_28)) != 4 &&
      (!FUNC_4(VAR_12) || VAR_24 != 3)) || (VAR_24 == 4 && VAR_28 != '\n') ||
     VAR_15[0] != 'a' + VAR_26 / 26 || VAR_15[1] != 'a' + VAR_26 % 26)
     VAR_23 = VAR_1;
 else if ((VAR_17 = FUNC_2(VAR_12 == VAR_11 ? ((void*)0) : VAR_13, ((void*)0),
        VAR_15)) == ((void*)0))
     VAR_23 = VAR_5;
 else if ((VAR_27 = FUNC_8(VAR_17, VAR_6)) == -1)
     VAR_23 = VAR_3;
 else if (FUNC_6(VAR_27, &VAR_16))
     VAR_23 = VAR_3;
 else if (VAR_16.st_size != (off_t)VAR_20)
     VAR_23 = VAR_4;
 else if (!VAR_9) {
     if (FUNC_1(VAR_27, &VAR_21, &VAR_18))
  VAR_23 = VAR_3;
     else if (VAR_21 != VAR_19)
  VAR_23 = VAR_2;
 }
 if (VAR_27 != -1 && FUNC_0(VAR_27))
     FUNC_3(2, "%s", VAR_17);
 if (VAR_10 && VAR_23 == VAR_3 && VAR_7 == VAR_0)
     continue;
 if (VAR_23 || (VAR_8 && VAR_26 >= 0))
     VAR_22 |= FUNC_9(VAR_13, VAR_17, VAR_23);
 if (FUNC_7(VAR_23))
     break;
    }
    return VAR_22;
}
