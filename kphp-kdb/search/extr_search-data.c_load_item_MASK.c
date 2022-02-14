
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_item {int item_id; int mask; int rates_len; int extra; int* rates; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int,char*) ;
 int* FUNC_4 (int) ;

int FUNC_5 (struct index_item *VAR_1) {
  FUNC_3 (5, "loading item...");
  FUNC_1 (&VAR_1->item_id, 8);

  FUNC_1 (&VAR_1->mask, 2);
  FUNC_1 (&VAR_1->rates_len, 1);
  FUNC_1 (&VAR_1->extra, 1);
  int VAR_2 = ((int) VAR_1->rates_len) * sizeof (int);
  VAR_1->rates = FUNC_4 (VAR_2);
  FUNC_1 (VAR_1->rates, VAR_2);
  FUNC_0 (FUNC_2 (VAR_1->mask) == VAR_1->rates_len);
  if (VAR_1->mask & 0xc000) {
    VAR_0++;
  }
  return VAR_2 + 12;
}
