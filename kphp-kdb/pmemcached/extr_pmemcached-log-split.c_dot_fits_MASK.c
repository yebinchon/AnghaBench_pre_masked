
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (char const* const,int) ;
 char* FUNC_1 (char const* const,char,int) ;

int FUNC_2 (const char *const VAR_2, int VAR_3) {
  char *VAR_4 = FUNC_1 (VAR_2, '.', VAR_3);
  if (VAR_4) {
    VAR_3 = VAR_4 - VAR_2;
  }
  unsigned VAR_5 = FUNC_0 (VAR_2, VAR_3);
  return VAR_5 % VAR_0 == VAR_1;
}
