
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct index_item {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;
struct TYPE_3__ {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;
typedef TYPE_1__ item_t ;



__attribute__((used)) static void FUNC_0 (item_t *VAR_0, struct index_item *VAR_1) {
  VAR_0->rates = VAR_1->rates;
  VAR_0->rates_len = VAR_1->rates_len;
  VAR_0->mask = VAR_1->mask;

  VAR_1->rates = 0;
  VAR_1->rates_len = 0;
  VAR_1->mask = 0;
}
