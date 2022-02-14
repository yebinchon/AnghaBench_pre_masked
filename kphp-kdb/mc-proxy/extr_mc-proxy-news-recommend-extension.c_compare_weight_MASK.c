
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct news_item {scalar_t__ weight; } ;



int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const struct news_item *VAR_2 = VAR_0;
  const struct news_item *VAR_3 = VAR_1;
  if (VAR_2->weight < VAR_3->weight) { return 1; }
  if (VAR_2->weight > VAR_3->weight) { return -1; }
  return 0;
}
