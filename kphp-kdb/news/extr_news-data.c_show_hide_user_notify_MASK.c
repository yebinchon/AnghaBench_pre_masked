
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int userplace_t ;


 int * FUNC_0 (int,int,int,int,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int ,int,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,char*,int,int,int,int,int,double) ;

__attribute__((used)) static int FUNC_4 (int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  FUNC_3 (4, "show_hide_user_notify: type = %d, owner = %d, place = %d, item = %d, shown = %d, time = %lf\n", VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, (double)FUNC_2 (0));
  if (VAR_1 < VAR_0) {
    return 0;
  }
  userplace_t *VAR_8 = FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_2, 0);
  if (!VAR_8) {
    return 0;
  }
  return FUNC_1 (VAR_8, 0, 0, VAR_6, VAR_7);
}
