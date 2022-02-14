
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int mask; int* rates; int rates_len; } ;


 size_t FUNC_0 (int,int) ;
 int* FUNC_1 (int*,int,int,int) ;

__attribute__((used)) static int FUNC_2 (struct item *VAR_0, int VAR_1, int VAR_2) {
  if ((VAR_0->mask & (1 << VAR_1)) == 0) {
    VAR_0->rates = FUNC_1 (VAR_0->rates, VAR_0->mask, VAR_0->mask | (1 << VAR_1), sizeof (int));
    VAR_0->mask |= (1 << VAR_1);
    VAR_0->rates_len++;
  }
  VAR_2 += VAR_0->rates[FUNC_0 (VAR_0->mask, VAR_1)];
  VAR_0->rates[FUNC_0 (VAR_0->mask, VAR_1)] = VAR_2;
  return 1;
}
