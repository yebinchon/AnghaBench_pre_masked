
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user_t ;
typedef int recommend_user_t ;
typedef int notify_user_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2 (user_t *VAR_3) {
  if (VAR_2) {
    FUNC_1 (VAR_3, sizeof (user_t));
  } else if (VAR_0) {
    FUNC_1 (VAR_3, sizeof (notify_user_t));
  } else {
    FUNC_0 (VAR_1);
    FUNC_1 (VAR_3, sizeof (recommend_user_t));
  }
}
