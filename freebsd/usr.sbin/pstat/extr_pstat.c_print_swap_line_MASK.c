
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usedbuf ;
typedef char* intmax_t ;
typedef int availbuf ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int*,long*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (char*,int,int ,char*,int ,int) ;
 int FUNC_5 (char*,char const*,...) ;

__attribute__((used)) static void
FUNC_6(const char *VAR_5, intmax_t VAR_6, intmax_t VAR_7,
    intmax_t VAR_8, float VAR_9)
{
 char VAR_10[5];
 char VAR_11[5];
 int VAR_12, VAR_13;
 long VAR_14;

 VAR_13 = FUNC_3();
 FUNC_2(&VAR_12, &VAR_14);

 FUNC_5("%-15s %*jd ", VAR_5, VAR_12, FUNC_0(VAR_6));
 if (VAR_4) {
  FUNC_4(VAR_10, sizeof(VAR_10),
      FUNC_1(VAR_7), "",
      VAR_0, VAR_1 | VAR_3 | VAR_2);
  FUNC_4(VAR_11, sizeof(VAR_11),
      FUNC_1(VAR_8), "",
      VAR_0, VAR_1 | VAR_3 | VAR_2);
  FUNC_5("%8s %8s %5.0f%%\n", VAR_10, VAR_11, VAR_9);
 } else {
  FUNC_5("%8jd %8jd %5.0f%%\n", (intmax_t)FUNC_0(VAR_7),
      (intmax_t)FUNC_0(VAR_8), VAR_9);
 }
}
