
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_price {scalar_t__ ad_price; int ad_id; } ;
struct advert {scalar_t__ price; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct advert*) ;
 struct advert* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct advert*) ;

__attribute__((used)) static int FUNC_4 (struct lev_targ_ad_price *VAR_0) {
  if (!VAR_0->ad_price) {
    return 0;
  }
  struct advert *VAR_1 = FUNC_2 (VAR_0->ad_id, FUNC_0 (VAR_0->ad_id));
  if (!VAR_1) {
    return 0;
  }

  int VAR_2 = FUNC_3 (VAR_1);
  if (VAR_2 < 0) {
    return VAR_2;
  }

  VAR_1->price = VAR_0->ad_price;
  FUNC_1 (VAR_1);
  return 1;
}
