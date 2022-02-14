
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_price {int ad_price; } ;
struct advert {int price; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct advert*,int ) ;
 int FUNC_1 (int) ;
 struct lev_targ_ad_price* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*,int) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct advert*) ;
 int FUNC_6 (struct lev_targ_ad_price*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

int FUNC_7 (int VAR_5, int VAR_6) {
  struct advert *VAR_7 = FUNC_4 (VAR_5, FUNC_1 (VAR_5));
  int VAR_8;
  if (!VAR_7) {
    if (VAR_4 > 0) {
      FUNC_3 (VAR_3, "warning: enabling undefined ad %d\n", VAR_5);
    }
    return 0;
  }
  VAR_8 = FUNC_5 (VAR_7);
  if (VAR_8 < 0) {
    return VAR_8;
  }
  VAR_8 = 0;
  if (VAR_6 != 0 && VAR_7->price != VAR_6) {
    struct lev_targ_ad_price *VAR_9 = FUNC_2 (VAR_2, 12, VAR_5);
    VAR_9->ad_price = VAR_6;
    FUNC_6 (VAR_9);
    VAR_8 = 1;
  }
  if (!(VAR_7->flags & VAR_0)) {
    FUNC_2 (VAR_1, 8, VAR_5);
    FUNC_0 (VAR_7, 0);
    VAR_8 |= 1;
  }
  return VAR_8;
}
