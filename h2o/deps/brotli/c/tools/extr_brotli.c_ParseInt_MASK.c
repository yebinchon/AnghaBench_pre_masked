
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BROTLI_BOOL FUNC_0(const char* VAR_2, int VAR_3, int VAR_4, int* VAR_5) {
  int VAR_6 = 0;
  int VAR_7;
  for (VAR_7 = 0; VAR_7 < 5; ++VAR_7) {
    char VAR_8 = VAR_2[VAR_7];
    if (VAR_8 == 0) break;
    if (VAR_2[VAR_7] < '0' || VAR_2[VAR_7] > '9') return VAR_0;
    VAR_6 = (10 * VAR_6) + (VAR_8 - '0');
  }
  if (VAR_7 == 0) return VAR_0;
  if (VAR_7 > 1 && VAR_2[0] == '0') return VAR_0;
  if (VAR_2[VAR_7] != 0) return VAR_0;
  if (VAR_6 < VAR_3 || VAR_6 > VAR_4) return VAR_0;
  *VAR_5 = VAR_6;
  return VAR_1;
}
