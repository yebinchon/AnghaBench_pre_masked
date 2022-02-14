
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int rates_len; scalar_t__* rates; } ;



long long FUNC_0 (const struct item *VAR_0) {
  return (((unsigned long long) VAR_0->rates[VAR_0->rates_len-1]) << 32) | ((unsigned int) VAR_0->rates[VAR_0->rates_len-2]);
}
