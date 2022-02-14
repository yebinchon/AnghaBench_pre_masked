
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_click_ext {int price; int user_id; } ;
struct advert {int flags; int price; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 struct lev_targ_click_ext* FUNC_1 (int ,int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,...) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct lev_targ_click_ext*) ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_6 (int VAR_5, int VAR_6, int VAR_7) {
  struct advert *VAR_8 = FUNC_4 (VAR_6, 0);
  struct lev_targ_click_ext *VAR_9;
  int VAR_10 = FUNC_2 (VAR_5);
  if (VAR_4 > 1) {
    FUNC_3 (VAR_3, "user %d clicks on ad %d, price %d\n", VAR_5, VAR_6, VAR_7);
  }
  if (VAR_10 < 0) {
    if (VAR_4 > 0) {
      FUNC_3 (VAR_3, "error: unknown user %d, click neglected\n", VAR_5);
    }
    return -1;
  }
  if (!VAR_8 || (VAR_8->flags & VAR_0) || FUNC_0 (VAR_8) || (VAR_8->price > 0 && VAR_7 < 0)) {
    if (VAR_4 > 0) {
      FUNC_3 (VAR_3, "warning: user %d clicks on ad %d, price %d; known ad price is %d, click ignored\n",
 VAR_5, VAR_6, VAR_7, VAR_8 ? VAR_8->price : -1);
    }
    return -1;
  }
  if (VAR_8->price == VAR_7 || (VAR_8->price < 0 && VAR_7 < 0)) {
    VAR_9 = FUNC_1 (VAR_1, 12, VAR_6);
  } else {
    VAR_9 = FUNC_1 (VAR_2, 16, VAR_6);
    VAR_9->price = VAR_7;
  }
  VAR_9->user_id = VAR_5;

  return FUNC_5 (VAR_9);
}
