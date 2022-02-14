
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key_len; } ;


 int FUNC_0 (int) ;
 struct item* FUNC_1 (int,int const*,int) ;

struct item *FUNC_2 (int VAR_0, const int *VAR_1) {
  FUNC_0 (VAR_0 >= 0 && VAR_0 <= 255);
  struct item *VAR_2 = FUNC_1 (VAR_0, VAR_1, 1);
  if (VAR_2->key_len == -2) {
    return 0;
  }
  return VAR_2;
}
