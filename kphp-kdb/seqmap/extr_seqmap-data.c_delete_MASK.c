
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int*,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct item*) ;
 int FUNC_3 (struct item*) ;
 struct item* FUNC_4 (int,int*,int ) ;

int FUNC_5 (int VAR_2, void *VAR_3, int VAR_4, int *VAR_5) {
  FUNC_1 (VAR_4 >= 0 && VAR_4 <= 255);
  struct item *VAR_6 = FUNC_4 (VAR_4, VAR_5, 0);
  FUNC_2 (VAR_6);
  int VAR_7 = VAR_6->key_len;
  if (VAR_6->key_len >= 0) {
    FUNC_3 (VAR_6);
  } else {
    if (VAR_6->key_len == -3) {
      FUNC_0 (VAR_4, VAR_5, VAR_0 | VAR_1, -1);
    }
  }
  return VAR_7 != -1;
}
