
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {long long item_id; scalar_t__ str; scalar_t__ len; scalar_t__ extra; scalar_t__ rates; scalar_t__ rates_len; scalar_t__ mask; } ;



__attribute__((used)) static int FUNC_0 (struct item *VAR_0, long long VAR_1) {
  VAR_0->item_id = VAR_1;
  VAR_0->mask = 0;
  VAR_0->rates_len = 0;
  VAR_0->rates = 0;
  VAR_0->extra = 0;
  VAR_0->len = 0;
  VAR_0->str = 0;
  return 1;
}
