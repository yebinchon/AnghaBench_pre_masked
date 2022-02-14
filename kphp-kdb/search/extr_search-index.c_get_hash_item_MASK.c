
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int mask; int rates_len; scalar_t__* rates; } ;


 int FUNC_0 (int) ;

__attribute__((used)) static long long FUNC_1 (const struct item *VAR_0) {
  if ( (VAR_0->mask & 0xc000) == 0xc000) {
    FUNC_0 (VAR_0->rates_len >= 2);



    return (((unsigned long long) VAR_0->rates[VAR_0->rates_len-1]) << 32) | ((unsigned int) VAR_0->rates[VAR_0->rates_len-2]);
  }
  FUNC_0 ( ! (VAR_0->mask & 0xc000) );
  return 0LL;
}
