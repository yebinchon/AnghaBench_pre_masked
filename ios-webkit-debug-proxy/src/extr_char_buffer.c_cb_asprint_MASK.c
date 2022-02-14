
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (char*,char const*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (size_t) ;

int FUNC_2(char **VAR_0, const char *VAR_1, ssize_t VAR_2,
    ssize_t VAR_3, ssize_t VAR_4) {
  size_t VAR_5 = FUNC_0(((void*)0), VAR_1, VAR_2, VAR_3, VAR_4);
  *VAR_0 = (char *)FUNC_1((VAR_5+1) * sizeof(char));
  if (!*VAR_0) {
    return -1;
  }
  return FUNC_0(*VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
