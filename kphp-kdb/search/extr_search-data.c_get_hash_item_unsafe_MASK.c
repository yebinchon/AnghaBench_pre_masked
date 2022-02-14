
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rates_len; scalar_t__* rates; } ;
typedef TYPE_1__ item_t ;



long long FUNC_0 (const item_t *VAR_0) {
  return (((unsigned long long) VAR_0->rates[VAR_0->rates_len-1]) << 32) | ((unsigned int) VAR_0->rates[VAR_0->rates_len-2]);
}
