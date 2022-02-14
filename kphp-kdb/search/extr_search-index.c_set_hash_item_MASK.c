
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int extra; int mask; long long* rates; int rates_len; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void* FUNC_1 (long long*,int,int) ;

int FUNC_2 (struct item *VAR_1, long long VAR_2) {
  if (!VAR_1 || (VAR_1->extra & VAR_0)) {
    return 0;
  }
  if ( (VAR_1->mask & 0xc000) != 0xc000) {
    FUNC_0( ! (VAR_1->mask & 0xc000) );
    void *VAR_3 = FUNC_1 (VAR_1->rates, VAR_1->rates_len << 2, (VAR_1->rates_len + 2) << 2);
    if (VAR_3 == 0) {
      return 0;
    }
    VAR_1->mask |= 0xc000;
    VAR_1->rates_len += 2;
    VAR_1->rates = VAR_3;
  }
  FUNC_0 (VAR_1->rates_len >= 2);
  VAR_1->rates[VAR_1->rates_len-1] = VAR_2 >> 32;
  VAR_1->rates[VAR_1->rates_len-2] = (unsigned int) VAR_2;
  return 1;
}
