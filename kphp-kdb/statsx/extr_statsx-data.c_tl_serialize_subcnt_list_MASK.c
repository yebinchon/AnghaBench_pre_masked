
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter {int valid_until; unsigned long long mask_subcnt; int* subcnt; } ;


 int FUNC_0 (unsigned long long) ;
 int FUNC_1 (int) ;

void FUNC_2 (struct counter *VAR_0) {





  if (VAR_0->valid_until < 1296637200) {
    FUNC_1 (0);
    return;
  }
  int VAR_1 = FUNC_0(VAR_0->mask_subcnt);
  FUNC_1 (VAR_1);
  unsigned long long VAR_2 = 1;
  int VAR_3, VAR_4;
  for (VAR_3 = 0, VAR_4 = 0; VAR_3 < 64; VAR_3++, VAR_2 <<= 1) {
    if (VAR_2 & VAR_0->mask_subcnt) {
      FUNC_1 (VAR_3);
      FUNC_1 (VAR_0->subcnt[VAR_4 ++]);
    }
  }
}
