
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int user_id; } ;
typedef TYPE_1__ user_t ;
typedef int recommend_user_t ;
typedef int notify_user_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__** VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5 (int VAR_5) {
  if (VAR_5 < 0) {
    return -1;
  }
  user_t *VAR_6 = VAR_3[VAR_5];
  if (!VAR_6) {
    return 0;
  }
  VAR_3[VAR_5] = 0;

  VAR_6->user_id = -1;

  FUNC_0 (VAR_2 || VAR_0 || VAR_1);
  if (VAR_2) {
    FUNC_1 (VAR_6);
  } else if (VAR_0) {
    FUNC_2 ((notify_user_t *) VAR_6);
  } else {
    FUNC_0 (VAR_1);
    FUNC_3 ((recommend_user_t *) VAR_6);
  }

  FUNC_4 (VAR_6);
  VAR_4--;
  return 1;
}
