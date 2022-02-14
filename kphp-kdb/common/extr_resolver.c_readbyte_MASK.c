
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int FUNC_1 (char **VAR_0) {
  char *VAR_1;
  unsigned VAR_2 = FUNC_0 (*VAR_0, &VAR_1, 10);
  if (VAR_1 == *VAR_0 || VAR_2 > 255) {
    return -1;
  }
  *VAR_0 = VAR_1;
  return VAR_2;
}
