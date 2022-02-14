
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int dummy; } ;
struct advert {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct lev_generic*) ;
 int FUNC_1 (int) ;
 struct lev_generic* FUNC_2 (scalar_t__,int,int) ;
 int FUNC_3 (int ,char*,int,int) ;
 struct advert* FUNC_4 (int,int ) ;
 int FUNC_5 (struct advert*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

int FUNC_6 (int VAR_3, int VAR_4) {
 struct advert *VAR_5 = FUNC_4 (VAR_3, FUNC_1 (VAR_3));

  if (VAR_2 > 0) {
    FUNC_3 (VAR_1, "in do_ad_change_sites (%d, %d):\n", VAR_3, VAR_4);
  }

  if (!VAR_5 || (VAR_4 & -0x100)) {
    return 0;
  }

  int VAR_6 = FUNC_5 (VAR_5);
  if (VAR_6 < 0) {
    return VAR_6;
  }

  struct lev_generic *VAR_7 = FUNC_2 (VAR_0 + VAR_4, 8, VAR_3);
  return FUNC_0 (VAR_7);
}
