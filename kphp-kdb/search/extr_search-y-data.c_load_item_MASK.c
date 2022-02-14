
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_item {scalar_t__ item_id; scalar_t__ mask; scalar_t__ rates_len; scalar_t__ extra; scalar_t__* rates; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,char*) ;
 scalar_t__* FUNC_4 (int) ;

int FUNC_5 (struct index_item *VAR_0) {
  FUNC_3 (5, "loading item...");
  FUNC_1 (&VAR_0->item_id, 8);

  FUNC_1 (&VAR_0->mask, 2);
  FUNC_1 (&VAR_0->rates_len, 1);
  FUNC_1 (&VAR_0->extra, 1);
  int VAR_1 = ((int) VAR_0->rates_len) * sizeof (int);
  VAR_0->rates = FUNC_4 (VAR_1);
  FUNC_1 (VAR_0->rates, VAR_1);
  FUNC_0 (FUNC_2 (VAR_0->mask) == VAR_0->rates_len);
  return VAR_1 + 12;
}
