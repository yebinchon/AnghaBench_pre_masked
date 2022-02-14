
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setint {int value; } ;
struct advert {int group; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct lev_targ_ad_setint*) ;
 struct lev_targ_ad_setint* FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct advert*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_6 (int VAR_3, int VAR_4) {
  struct advert *VAR_5 = FUNC_4 (VAR_3, FUNC_0 (VAR_3));

  if (VAR_2 > 0) {
    FUNC_3 (VAR_1, "in do_ad_set_group (%d, %d):\n", VAR_3, VAR_4);
  }

  if (!VAR_5 || VAR_4 == (-1 << 31)) {
    return 0;
  }

  int VAR_6 = FUNC_5 (VAR_5);
  if (VAR_6 < 0) {
    return VAR_6;
  }

  if (VAR_5->group == VAR_4) {
    return 1;
  }

  struct lev_targ_ad_setint *VAR_7 = FUNC_2 (VAR_0, 12, VAR_3);
  VAR_7->value = VAR_4;

  return FUNC_1 (VAR_7);
}
