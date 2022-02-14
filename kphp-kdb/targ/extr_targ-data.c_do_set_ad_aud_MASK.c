
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setaud {int aud; } ;
struct advert {int flags; scalar_t__ price; int ext_users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct advert*) ;
 scalar_t__ FUNC_1 (int ,int,int) ;
 struct advert* FUNC_2 (int,int ) ;
 int FUNC_3 (struct lev_targ_ad_setaud*) ;

int FUNC_4 (int VAR_3, int VAR_4) {
  struct advert *VAR_5 = FUNC_2 (VAR_3, 0);
  if (!VAR_5 || (VAR_5->flags & VAR_0) || FUNC_0 (VAR_5) || VAR_4 <= 0 || VAR_4 >= VAR_2) {
    return 0;
  }
  if (VAR_5->price <= 0 || VAR_5->ext_users == VAR_4) {
    return 1;
  }
  struct lev_targ_ad_setaud *VAR_6 = (struct lev_targ_ad_setaud *)FUNC_1 (VAR_1, 12, VAR_3);
  VAR_6->aud = VAR_4;
  return FUNC_3 (VAR_6);
}
