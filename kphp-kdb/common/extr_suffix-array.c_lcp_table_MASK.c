
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* lcp; int n; } ;
typedef TYPE_1__ suffix_array_t ;



__attribute__((used)) static int FUNC_0 (suffix_array_t *VAR_0, int VAR_1, int VAR_2) {
  if (VAR_1 + 1 == VAR_2) { return VAR_0->lcp[VAR_2]; }
  int VAR_3 = (VAR_1 + VAR_2) >> 1, *VAR_4 = VAR_0->lcp + (VAR_0->n + 1 + VAR_3);
  if (*VAR_4 >= 0) { return *VAR_4; }
  int VAR_5 = FUNC_0 (VAR_0, VAR_1, VAR_3), VAR_6 = FUNC_0 (VAR_0, VAR_3, VAR_2);
  return *VAR_4 = (VAR_5 < VAR_6) ? VAR_5 : VAR_6;
}
