
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int n; int* p; unsigned char* y; } ;
typedef TYPE_1__ suffix_array_t ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int,char*,int,unsigned char*,int,int,int,int,int const,int const) ;

int FUNC_2 (suffix_array_t *VAR_0, unsigned char *VAR_1, int VAR_2, int *VAR_3) {
  const int VAR_4 = VAR_0->n;
  int VAR_5 = -1, VAR_6 = 0;
  int VAR_7 = VAR_4, VAR_8 = 0;
  while (VAR_5 + 1 < VAR_7) {
    int VAR_9 = (VAR_5 + VAR_7) >> 1;
    const int VAR_10 = FUNC_0 (VAR_0, VAR_5, VAR_9), VAR_11 = FUNC_0 (VAR_0, VAR_9, VAR_7);
    FUNC_1 (3, "suffix_array_search (%.*s), d = %d, ld = %d, f = %d, lf = %d, lcp_di = %d, lcp_if = %d\n", VAR_2, VAR_1, VAR_5, VAR_6, VAR_7, VAR_8, VAR_10, VAR_11);
    if (VAR_6 <= VAR_11 && VAR_11 < VAR_8) {
      VAR_5 = VAR_9;
      VAR_6 = VAR_11;
    } else if (VAR_6 <= VAR_8 && VAR_8 < VAR_11) {
      VAR_7 = VAR_9;
    } else if (VAR_8 <= VAR_10 && VAR_10 < VAR_6) {
      VAR_7 = VAR_9;
      VAR_8 = VAR_10;
    } else if (VAR_8 <= VAR_6 && VAR_6 < VAR_10) {
      VAR_5 = VAR_9;
    } else {
      const int VAR_12 = VAR_4 - VAR_0->p[VAR_9];
      int VAR_13 = (VAR_6 >= VAR_8) ? VAR_6 : VAR_8, VAR_14;
      int VAR_15 = VAR_12;
      if (VAR_15 > VAR_2) {
        VAR_15 = VAR_2;
      }
      VAR_15 -= VAR_13;
      unsigned char *VAR_16 = VAR_1 + VAR_13, *VAR_17 = VAR_0->y + (VAR_0->p[VAR_9] + VAR_13);
      for (VAR_14 = 0; VAR_14 < VAR_15 && *VAR_16 == *VAR_17; VAR_14++, VAR_16++, VAR_17++) {}
      VAR_13 += VAR_14;
      if (VAR_13 == VAR_2 && VAR_13 == VAR_12) {
        *VAR_3 = VAR_2;
        return VAR_0->p[VAR_9];
      } else if (VAR_13 == VAR_12 || (VAR_13 != VAR_2 && *VAR_17 < *VAR_16)) {
        VAR_5 = VAR_9;
        VAR_6 = VAR_13;
      } else {
        VAR_7 = VAR_9;
        VAR_8 = VAR_13;
      }
    }
  }
  if (VAR_6 >= VAR_8) {
    *VAR_3 = VAR_6;
    return VAR_5 >= 0 ? VAR_0->p[VAR_5] : -1;
  }
  *VAR_3 = VAR_8;
  return VAR_7 < VAR_4 ? VAR_0->p[VAR_7] : -1;
}
