
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct item {int key_len; scalar_t__ value_len; int time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct item* FUNC_0 (int,int*,int,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct item*,int,int*) ;
 int FUNC_3 (struct item*,int,void*) ;
 int FUNC_4 (struct item*) ;
 int FUNC_5 (struct item*) ;
 int VAR_3 ;
 struct item* FUNC_6 (int,int*,int ) ;

int FUNC_7 (int VAR_4, void *VAR_5, int VAR_6, int *VAR_7, int VAR_8, int *VAR_9, int VAR_10, int VAR_11) {
  FUNC_1 (VAR_6 >= 0 && VAR_6 <= 255);
  FUNC_1 (VAR_8 >= 0 && VAR_8 <= (1 << 20));
  FUNC_1 (VAR_11 >= 1 && VAR_11 <= 3);

  if (VAR_10 <= VAR_3 && VAR_10 > 0) {
    return 0;
  }

  struct item *VAR_12 = FUNC_6 (VAR_6, VAR_7, 0);
  if (VAR_12->key_len == -3 && VAR_11 != 3) {
    FUNC_3 (VAR_12, VAR_4, VAR_5);
    return 1;
  }


  if (VAR_12->key_len >= 0 && VAR_12->value_len >= 0) {
    if (!(VAR_11 & 2)) { return 0; }
    FUNC_4 (VAR_12);
    FUNC_2 (VAR_12, VAR_8, VAR_9);
    VAR_12->time = VAR_10;
    FUNC_5 (VAR_12);
    return 1;
  } else {
    if (!(VAR_11 & 1)) { return 0; }
    FUNC_4 (VAR_12);
    if (VAR_12->key_len >= 0) {
      FUNC_2 (VAR_12, VAR_8, VAR_9);
      VAR_12->time = VAR_10;
      FUNC_5 (VAR_12);
      return 1;
    } else {
      struct item *VAR_13 = FUNC_0 (VAR_6, VAR_7, VAR_0 | (VAR_12->key_len == -3 ? VAR_2 : VAR_1), 0);
      FUNC_2 (VAR_13, VAR_8, VAR_9);
      VAR_13->time = VAR_10;
      FUNC_5 (VAR_13);
      return 1;
    }
  }
}
