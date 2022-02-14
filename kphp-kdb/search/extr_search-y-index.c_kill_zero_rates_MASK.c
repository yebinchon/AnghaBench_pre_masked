
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int mask; int rates_len; scalar_t__* rates; } ;


 int FUNC_0 (int) ;

int FUNC_1 (struct item *VAR_0) {
  int VAR_1 = VAR_0->mask, VAR_2 = 0, VAR_3 = 0, VAR_4 = 0;
  while (VAR_1) {
    int VAR_5;
    VAR_1 ^= VAR_5 = VAR_1 & -VAR_1;
    if (VAR_0->rates[VAR_3] || (VAR_5 & 0xc000)) {
      VAR_4 |= VAR_5;
      VAR_0->rates[VAR_2++] = VAR_0->rates[VAR_3];
    }
    VAR_3++;
  }
  FUNC_0 (VAR_3 == VAR_0->rates_len);
  VAR_0->rates_len = VAR_2;
  VAR_0->mask = VAR_4;
  return VAR_3;
}
