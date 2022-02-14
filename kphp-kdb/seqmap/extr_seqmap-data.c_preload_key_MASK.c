
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key_len; scalar_t__ prev_time; scalar_t__ next_time; } ;


 int VAR_0 ;
 struct item* FUNC_0 (int ,int,int const*) ;

struct item *FUNC_1 (int VAR_1, const int *VAR_2, int VAR_3) {
  struct item *VAR_4 = FUNC_0 (VAR_0, VAR_1, VAR_2);
  if (VAR_4) { return VAR_4; }
  static struct item VAR_5;
  VAR_4 = &VAR_5;
  VAR_4->key_len = -1;
  VAR_4->next_time = VAR_4->prev_time = 0;
  return VAR_4;
}
