
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setctr_pack {long long views; } ;
struct lev_targ_ad_setctr {long long clicks; long long views; } ;
struct lev_generic {int dummy; } ;
struct advert {int flags; scalar_t__ price; int expected_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 long long VAR_4 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 scalar_t__ FUNC_1 (scalar_t__,int,int) ;
 double FUNC_2 (struct advert*,long long,long long) ;
 struct advert* FUNC_3 (int,int ) ;
 int FUNC_4 (struct lev_generic*) ;

int FUNC_5 (int VAR_5, long long VAR_6, long long VAR_7) {
  struct advert *VAR_8 = FUNC_3 (VAR_5, 0);
  if (!VAR_8 || (VAR_8->flags & VAR_0) || FUNC_0 (VAR_8) || VAR_6 < 0 || VAR_7 <= 0 || VAR_6 >= VAR_4) {
    return 0;
  }
  if (VAR_8->price <= 0) {
    return 1;
  }
  double VAR_9 = FUNC_2 (VAR_8, VAR_6, VAR_7);
  if (VAR_9 >= (1 - VAR_1) * VAR_8->expected_gain && VAR_9 <= (1 + VAR_1) * VAR_8->expected_gain) {
    return 1;
  }
  if (VAR_6 < 256 && VAR_7 <= 0x7fffffff) {
    struct lev_targ_ad_setctr_pack *VAR_10 = (struct lev_targ_ad_setctr_pack *)FUNC_1 (VAR_3 + VAR_6, 12, VAR_5);
    VAR_10->views = VAR_7;
    return FUNC_4 ((struct lev_generic *)VAR_10);
  } else {
    struct lev_targ_ad_setctr *VAR_11 = (struct lev_targ_ad_setctr *)FUNC_1 (VAR_2, 20, VAR_5);
    VAR_11->clicks = VAR_6;
    VAR_11->views = VAR_7;
    return FUNC_4 ((struct lev_generic *)VAR_11);
  }
}
