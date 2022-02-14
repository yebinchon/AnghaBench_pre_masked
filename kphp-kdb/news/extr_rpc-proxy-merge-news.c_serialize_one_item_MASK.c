
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int date; int user_id; } ;
typedef TYPE_1__ item_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static int FUNC_1 (item_t *VAR_0, int VAR_1) {
  if (VAR_1 <= 0) {
    FUNC_0 (&VAR_0->user_id, 36);
  } else {
    FUNC_0 (&VAR_0->date, 32);
  }
  return 1;
}
