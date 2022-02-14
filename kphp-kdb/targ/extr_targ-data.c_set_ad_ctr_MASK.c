
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setctr_pack {long long views; } ;
struct lev_targ_ad_setctr {long long clicks; long long views; } ;
struct lev_generic {int type; int a; } ;
struct advert {scalar_t__ price; long long g_clicked_old; long long l_clicked_old; long long g_views; long long l_views; } ;


 int VAR_0 ;
 int VAR_1 ;
 long long VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct advert*) ;
 struct advert* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_3 (struct lev_generic *VAR_4) {
  if (VAR_3) {
    return 0;
  }
  struct advert *VAR_5 = FUNC_2 (VAR_4->a, 0);
  FUNC_0 (VAR_5 && VAR_5->price > 0);
  long long VAR_6, VAR_7;

  if (VAR_4->type == VAR_0) {
    VAR_6 = ((struct lev_targ_ad_setctr *)VAR_4)->clicks;
    VAR_7 = ((struct lev_targ_ad_setctr *)VAR_4)->views;
  } else {
    FUNC_0 ((VAR_4->type & -0x100) == VAR_1);
    VAR_6 = VAR_4->type & 0xff;
    VAR_7 = ((struct lev_targ_ad_setctr_pack *)VAR_4)->views;
  }
  FUNC_0 (VAR_6 >= 0 && VAR_7 > 0 && VAR_6 < VAR_2);

  VAR_5->g_clicked_old = VAR_6 - VAR_5->l_clicked_old * 10LL;
  VAR_5->g_views = VAR_7 - VAR_5->l_views * 10LL;
  FUNC_1 (VAR_5);

  return 1;
}
