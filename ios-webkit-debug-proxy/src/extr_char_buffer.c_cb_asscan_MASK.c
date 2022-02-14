
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (char*,size_t*,char const*) ;
 scalar_t__ FUNC_2 (char*,size_t) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(char **VAR_0, size_t *VAR_1, const char *VAR_2) {
  if (!VAR_0 || !*VAR_0 || !VAR_1 || !VAR_2) {
    return -1;
  }
  *VAR_0 = (char *)FUNC_0(FUNC_3(VAR_2) + 1, sizeof(char));
  int VAR_3 = FUNC_1(*VAR_0, VAR_1, VAR_2);
  if (*VAR_0 && VAR_1) {
    *VAR_0 = (char*)FUNC_2(*VAR_0, *VAR_1 * sizeof(char));
  }
  return VAR_3;
}
