
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_user_view {int user_id; } ;
struct advert {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 struct lev_targ_user_view* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct lev_targ_user_view*) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_6 (int VAR_4, int VAR_5) {
  struct advert *VAR_6 = FUNC_4 (VAR_5, 0);
  int VAR_7 = FUNC_2 (VAR_4);

  if (VAR_3 > 2) {
    FUNC_3 (VAR_2, "user %d views ad %d\n", VAR_4, VAR_5);
  }

  if (VAR_7 < 0) {
    if (VAR_3 > 0) {
      FUNC_3 (VAR_2, "error: unknown user %d, view ignored\n", VAR_4);
    }
    return -1;
  }
  if (!VAR_6 || (VAR_6->flags & VAR_0) || FUNC_0 (VAR_6)) {
    if (VAR_3 > 0) {
      FUNC_3 (VAR_2, "error: unknown or ancient ad %d, view ignored\n", VAR_5);
    }
    return -1;
  }

  struct lev_targ_user_view *VAR_8 = FUNC_1 (VAR_1, 12, VAR_5);
  VAR_8->user_id = VAR_4;

  return FUNC_5 (VAR_8);
}
