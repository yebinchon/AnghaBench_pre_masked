
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setaud {scalar_t__ aud; int ad_id; } ;
struct advert {int flags; scalar_t__ price; scalar_t__ ext_users; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct advert*) ;
 struct advert* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_3 (struct lev_targ_ad_setaud *VAR_3) {
  if (VAR_2) {
    return 0;
  }
  struct advert *VAR_4 = FUNC_2 (VAR_3->ad_id, 0);
  FUNC_0 (VAR_4 && !(VAR_4->flags & VAR_0) && VAR_3->aud > 0 && VAR_3->aud < VAR_1 && VAR_4->price > 0);
  VAR_4->ext_users = VAR_3->aud;
  FUNC_1 (VAR_4);
  return 1;
}
