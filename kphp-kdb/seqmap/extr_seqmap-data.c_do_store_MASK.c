
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_seq_store_time {int time; int value_len; scalar_t__ data; } ;
struct lev_seq_store_inf {int value_len; scalar_t__ data; } ;
struct item {int key_len; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int const*,int) ;
 int VAR_2 ;
 struct item* FUNC_3 (int,int const*,int) ;
 int FUNC_4 (struct lev_seq_store_inf*) ;
 int FUNC_5 (struct lev_seq_store_time*) ;

int FUNC_6 (int VAR_3, int VAR_4, const int *VAR_5, int VAR_6, const int *VAR_7, int VAR_8, int VAR_9) {
  if (VAR_8 <= VAR_2 && VAR_8 > 0) {
    return 0;
  }
  struct item *VAR_10 = FUNC_3 (VAR_4, VAR_5, VAR_9 && (VAR_3 != 3));
  if (VAR_10->key_len == -2) {
    return -2;
  }

  FUNC_1 (VAR_4 <= 255);
  if (VAR_8 <= 0) {
    struct lev_seq_store_inf *VAR_11 = FUNC_0 (VAR_0 + VAR_3 * 256 + VAR_4, sizeof (*VAR_11) + VAR_4 * 4 + VAR_6 * 4, 0);
    VAR_11->value_len = VAR_6;
    FUNC_2 (VAR_11->data, VAR_5, 4 * VAR_4);
    FUNC_2 (VAR_11->data + VAR_4, VAR_7, 4 * VAR_6);
    return FUNC_4 (VAR_11);
  } else {
    struct lev_seq_store_time *VAR_12 = FUNC_0 (VAR_1 + VAR_3 * 256 + VAR_4, sizeof (*VAR_12) + VAR_4 * 4 + VAR_6 * 4, 0);
    VAR_12->time = VAR_8;
    VAR_12->value_len = VAR_6;
    FUNC_2 (VAR_12->data, VAR_5, 4 * VAR_4);
    FUNC_2 (VAR_12->data + VAR_4, VAR_7, 4 * VAR_6);
    return FUNC_5 (VAR_12);
  }
}
