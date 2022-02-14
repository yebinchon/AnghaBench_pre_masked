
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setint {int value; int ad_id; } ;
struct advert {int factor; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_targ_ad_setint *VAR_0) {
  FUNC_1 (VAR_0->value >= 0 && VAR_0->value <= 1000000);
  struct advert *VAR_1 = FUNC_2 (VAR_0->ad_id, FUNC_0 (VAR_0->ad_id));
  if (!VAR_1) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_1) >= 0);

  VAR_1->factor = VAR_0->value * 1e-6;

  return 1;
}
