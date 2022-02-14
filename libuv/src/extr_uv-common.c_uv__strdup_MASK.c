
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char const*,size_t) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (size_t) ;

char* FUNC_3(const char* VAR_0) {
  size_t VAR_1 = FUNC_1(VAR_0) + 1;
  char* VAR_2 = FUNC_2(VAR_1);
  if (VAR_2 == ((void*)0))
    return ((void*)0);
  return FUNC_0(VAR_2, VAR_0, VAR_1);
}
