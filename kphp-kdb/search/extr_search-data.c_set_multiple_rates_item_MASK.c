
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int extra; int mask; int* rates; size_t rates_len; } ;
typedef TYPE_1__ item_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 int* FUNC_2 (int*,int,int,int) ;

__attribute__((used)) static int FUNC_3 (item_t *VAR_1, int VAR_2, int *VAR_3) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) { return 0; }
  int VAR_4 = 0, VAR_5 = 0, VAR_6 = VAR_2, VAR_7 = 0, VAR_8, VAR_9;
  while (VAR_6) {
    if (VAR_3[VAR_4]) {
      VAR_3[VAR_5++] = VAR_3[VAR_4];
      VAR_6 &= VAR_6 - 1;
    } else {
      VAR_6 ^= VAR_8 = VAR_6 & -VAR_6;
      VAR_7 |= VAR_8;
    }
    VAR_4++;
  }
  VAR_2 &= ~VAR_7;
  VAR_9 = (VAR_1->mask & (~VAR_7)) | VAR_2;
  if (VAR_9 != VAR_1->mask) {
    VAR_1->rates = FUNC_2 (VAR_1->rates, VAR_1->mask, VAR_9, sizeof (int));
    VAR_1->mask = VAR_9;
  }
  VAR_4 = 0;
  VAR_6 = VAR_2;
  while (VAR_6) {
    VAR_6 ^= VAR_8 = VAR_6 & -VAR_6;
    VAR_1->rates[FUNC_1 (VAR_9 & (VAR_8-1))] = VAR_3[VAR_4++];
  }

  FUNC_0 (VAR_4 == VAR_5);
  VAR_1->rates_len = FUNC_1 (VAR_1->mask);
  return 1;
}
