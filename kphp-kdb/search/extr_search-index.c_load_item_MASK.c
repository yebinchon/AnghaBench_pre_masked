
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int item_id; int mask; int rates_len; int extra; int* rates; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int* FUNC_4 (int) ;

int FUNC_5 (struct item *VAR_0) {
  FUNC_3 (4, "loading item...");

  FUNC_1 (&VAR_0->item_id, 8);
  FUNC_1 (&VAR_0->mask, 2);
  FUNC_1 (&VAR_0->rates_len, 1);
  FUNC_1 (&VAR_0->extra, 1);

  int VAR_1 = 4 * VAR_0->rates_len;
  VAR_0->rates = FUNC_4 (VAR_1);
  FUNC_1 (VAR_0->rates, VAR_1);

  FUNC_0 (FUNC_2 (VAR_0->mask) == VAR_0->rates_len);
  return VAR_1 + 12;
}
