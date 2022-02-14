
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int mask; int* rates; int rates_len; } ;


 int VAR_0 ;
 size_t FUNC_0 (int,int) ;
 int* FUNC_1 (int*,int,int,int) ;

__attribute__((used)) static int FUNC_2 (struct item *VAR_1, int VAR_2, int VAR_3) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) {
    return 0;
  }
  if ((VAR_1->mask & (1 << VAR_2)) == 0) {
    VAR_1->rates = FUNC_1 (VAR_1->rates, VAR_1->mask, VAR_1->mask | (1 << VAR_2), 4);
    VAR_1->mask |= (1 << VAR_2);
    VAR_1->rates_len++;
  }
  VAR_1->rates [FUNC_0 (VAR_1->mask, VAR_2)] = VAR_3;
  return 1;
}
