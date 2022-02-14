
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setint {int value; } ;
struct advert {int domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lev_targ_ad_setint*) ;
 struct lev_targ_ad_setint* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct advert*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

int FUNC_6 (int VAR_4, int VAR_5) {
  struct advert *VAR_6 = FUNC_4 (VAR_4, FUNC_0 (VAR_4));

  if (VAR_3 > 0) {
    FUNC_3 (VAR_2, "in do_ad_set_domain (%d, %d):\n", VAR_4, VAR_5);
  }

  if (!VAR_6 || VAR_5 < 0 || VAR_5 > VAR_1) {
    return 0;
  }

  int VAR_7 = FUNC_5 (VAR_6);
  if (VAR_7 < 0) {
    return VAR_7;
  }

  if (VAR_6->domain == VAR_5) {
    return 1;
  }

  struct lev_targ_ad_setint *VAR_8 = FUNC_2 (VAR_0, 12, VAR_4);
  VAR_8->value = VAR_5;

  return FUNC_1 (VAR_8);
}
