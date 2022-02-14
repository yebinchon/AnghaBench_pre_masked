
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int * FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_0, char VAR_1, const char* VAR_2, size_t *VAR_3) {
  if (VAR_0[0] != '-' || VAR_0[1] == '-')
    *VAR_3 = 0;
  if (VAR_0[0] != '-') return 0;


  if (VAR_0[1] == '-' && !FUNC_1(VAR_0+2, VAR_2)) return 1;
  else if (VAR_0[1] == '-') return 0;


  if (!VAR_1) return 0;
  if (FUNC_0(VAR_0, VAR_1) != ((void*)0)) {
    (*VAR_3)++;
    return 1;
  }
  return 0;
}
