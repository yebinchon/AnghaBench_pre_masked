
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setint {scalar_t__ value; int ad_id; } ;
struct advert {scalar_t__ domain; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 struct advert* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_targ_ad_setint *VAR_1) {
  FUNC_1 (VAR_1->value >= 0 && VAR_1->value <= VAR_0);
  struct advert *VAR_2 = FUNC_2 (VAR_1->ad_id, FUNC_0 (VAR_1->ad_id));
  if (!VAR_2) {
    return -1;
  }

  FUNC_1 (FUNC_3 (VAR_2) >= 0);

  VAR_2->domain = VAR_1->value;

  return 1;
}
