
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int regex_t ;
typedef int err ;


 int FUNC_0 (char*,int,char*) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int,int *,char*,int) ;

__attribute__((used)) static int FUNC_3 (regex_t *VAR_0, const char *VAR_1, int VAR_2) {
  char VAR_3[16384];
  int VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  if (VAR_4) {
    int VAR_5 = FUNC_2 (VAR_4, VAR_0, VAR_3, sizeof (VAR_3) - 1);
    FUNC_0 ("%.*s\n", VAR_5, VAR_3);
  }
  return VAR_4;
}
