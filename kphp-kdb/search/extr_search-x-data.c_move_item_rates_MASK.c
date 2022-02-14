
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;
struct index_item {scalar_t__ mask; scalar_t__ rates_len; scalar_t__ rates; } ;



__attribute__((used)) static void FUNC_0 (struct item *VAR_0, struct index_item *VAR_1) {
  VAR_0->rates = VAR_1->rates;
  VAR_0->rates_len = VAR_1->rates_len;
  VAR_0->mask = VAR_1->mask;

  VAR_1->rates = 0;
  VAR_1->rates_len = 0;
  VAR_1->mask = 0;
}
