
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_seq_store_time {int type; int value_len; int time; scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct lev_seq_store_time*,int,scalar_t__,int,scalar_t__,int ,int) ;

int FUNC_1 (struct lev_seq_store_time *VAR_1) {
  int VAR_2 = (VAR_1->type - VAR_0) & 0xff;
  int VAR_3 = ((VAR_1->type - VAR_0) & 0x300) >> 8;
  return FUNC_0 (sizeof (*VAR_1) + VAR_2 * 4 + VAR_1->value_len * 4, VAR_1, VAR_2, VAR_1->data, VAR_1->value_len, VAR_1->data + VAR_2, VAR_1->time, VAR_3);
}
