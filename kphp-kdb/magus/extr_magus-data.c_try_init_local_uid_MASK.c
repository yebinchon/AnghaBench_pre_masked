
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user ;
struct TYPE_4__ {int user_cnt; TYPE_1__* user_index; } ;
struct TYPE_3__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int ) ;
 TYPE_2__ VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3 (void) {
  static int VAR_6 = 0;
  static int VAR_7, VAR_8, VAR_9;

  if (VAR_6) {

    FUNC_0 (VAR_7 == VAR_4 && VAR_8 == VAR_3 && VAR_9 == VAR_5);
    return;
  }

  int VAR_10;
  for (VAR_10 = 1; VAR_10 <= VAR_1.user_cnt; VAR_10++) {
    user *VAR_11 = FUNC_1 (VAR_1.user_index[VAR_10].id);
    FUNC_0 (VAR_11 != ((void*)0));
  }

  VAR_6 = 1;
  VAR_7 = VAR_4;
  VAR_8 = VAR_3;
  VAR_9 = VAR_5;

  VAR_2 = VAR_0;
  FUNC_2 (VAR_2);
}
