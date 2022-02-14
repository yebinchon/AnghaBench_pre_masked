
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int mask; int* rates; int rates_len; } ;


 int VAR_0 ;
 size_t FUNC_0 (int) ;
 int* FUNC_1 (int*,int,int,int) ;

__attribute__((used)) static int FUNC_2 (struct item *VAR_1, int VAR_2, int *VAR_3) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) { return 0; }
  int VAR_4 = VAR_1->mask | VAR_2;
  if (VAR_4 != VAR_1->mask) {
    int VAR_5 = VAR_4 ^ VAR_1->mask;
    while (VAR_5) {
      VAR_1->rates_len++;
      VAR_5 &= VAR_5 - 1;
    }
    VAR_1->rates = FUNC_1 (VAR_1->rates, VAR_1->mask, VAR_4, sizeof (int));
    VAR_1->mask = VAR_4;
  }
  int VAR_6 = 0, VAR_7 = VAR_2;
  while (VAR_7) {
    int VAR_8;
    VAR_7 ^= VAR_8 = VAR_7 & -VAR_7;
    VAR_1->rates[FUNC_0 (VAR_4 & (VAR_8-1))] = VAR_3[VAR_6++];
  }
  return 1;
}
