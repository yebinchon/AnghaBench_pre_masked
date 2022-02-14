
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
typedef int fmtbuf ;
typedef int FILE ;


 char* FUNC_0 () ;
 int FUNC_1 (int *,char*,char*,char const*,char*) ;
 int FUNC_2 (char*,int,char const*,int ) ;

__attribute__((used)) static void FUNC_3(FILE *VAR_0,
                  const char *VAR_1,
                  const char *VAR_2,
                  va_list VAR_3) {
  char VAR_4[1024];
  FUNC_2(VAR_4, sizeof(VAR_4), VAR_2, VAR_3);
  FUNC_1(VAR_0, "%s:%s: %s\n", FUNC_0(), VAR_1, VAR_4);
}
