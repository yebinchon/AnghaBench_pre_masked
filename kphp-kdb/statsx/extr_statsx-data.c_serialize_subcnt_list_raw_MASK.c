
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int valid_until; unsigned long long mask_subcnt; int * subcnt; } ;



__attribute__((used)) static int *FUNC_0 (int *VAR_0, struct counter *VAR_1) {





  if (VAR_1->valid_until < 1296637200) {
    *(VAR_0++) = 0;
    return VAR_0;
  }
  if (!VAR_1->subcnt) {
    *(VAR_0++) = 0;
    return VAR_0;
  }
  *(VAR_0++) = 64;
  unsigned long long VAR_2 = 1;
  int VAR_3, VAR_4;
  for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 64; VAR_3++, VAR_2 <<= 1)
    if (VAR_2 & VAR_1->mask_subcnt) {
      *(VAR_0++) = VAR_1->subcnt[VAR_4++];
    } else {
      *(VAR_0++) = 0;
    }
  return VAR_0;
}
