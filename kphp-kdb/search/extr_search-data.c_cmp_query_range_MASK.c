
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query_range {unsigned int maxr; unsigned int minr; } ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct query_range *VAR_2 = (const struct query_range *) VAR_0;
  const struct query_range *VAR_3 = (const struct query_range *) VAR_1;
  unsigned int VAR_4 = VAR_2->maxr - VAR_2->minr;
  unsigned int VAR_5 = VAR_3->maxr - VAR_3->minr;
  if (VAR_4 < VAR_5) {
    return -1;
  }
  if (VAR_4 > VAR_5) {
    return 1;
  }
  return 0;
}
