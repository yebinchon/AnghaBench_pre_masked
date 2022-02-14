
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const,int const) ;

__attribute__((used)) static unsigned long long FUNC_2 (const char VAR_0[512], const int VAR_1, const int VAR_2) {
  int VAR_3;
  unsigned long long VAR_4 = 0;
  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
    int VAR_5 = VAR_0[VAR_1+VAR_3] - '0';
    if (VAR_5 < 0 || VAR_5 >= 8) {
      FUNC_1 ("found not octal digit(%c) at pos %d.\n", VAR_0[VAR_1+VAR_3], VAR_1 + VAR_3);
      FUNC_0 (VAR_5 >= 0 && VAR_5 < 8);
    }
    VAR_4 <<= 3;
    VAR_4 |= VAR_5;
  }
  return VAR_4;
}
