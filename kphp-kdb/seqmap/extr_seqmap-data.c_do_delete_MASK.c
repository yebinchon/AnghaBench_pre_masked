
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_seq_delete {int data; } ;
struct item {int key_len; } ;


 scalar_t__ VAR_0 ;
 struct lev_seq_delete* FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_seq_delete*) ;
 int FUNC_3 (int ,int const*,int) ;
 struct item* FUNC_4 (int,int const*,int) ;

int FUNC_5 (int VAR_1, const int *VAR_2, int VAR_3) {
  struct item *VAR_4 = FUNC_4 (VAR_1, VAR_2, VAR_3);
  if (VAR_4->key_len == -2) {
    return -2;
  }
  FUNC_1 (VAR_1 >= 0 && VAR_1 <= 255);
  struct lev_seq_delete *VAR_5 = FUNC_0 (VAR_0 + VAR_1, sizeof (*VAR_5) + VAR_1 * 4, 0);
  FUNC_3 (VAR_5->data, VAR_2, 4 * VAR_1);
  return FUNC_2 (VAR_5);
}
