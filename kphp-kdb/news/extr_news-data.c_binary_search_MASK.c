
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bookmark_user {int user_id; } ;


 int FUNC_0 (int) ;

int FUNC_1 (int VAR_0, struct bookmark_user *VAR_1, int VAR_2) {
  int VAR_3 = -1;
  int VAR_4 = VAR_2;
  while (VAR_4 - VAR_3 > 1) {
    int VAR_5 = (VAR_3 + VAR_4) >> 1;
    FUNC_0 (VAR_5 >= 0);
    if (VAR_1[VAR_5].user_id <= VAR_0) {
      VAR_3 = VAR_5;
    } else {
      VAR_4 = VAR_5;
    }
  }
  if (VAR_3 >= 0 && VAR_1[VAR_3].user_id == VAR_0) {
    return VAR_3;
  } else {
    return -1;
  }
}
