
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_ad_setsump {scalar_t__ type; scalar_t__ sump0; scalar_t__ sump1; scalar_t__ sump2; int ad_id; } ;
struct advert {scalar_t__ price; double g_sump0; double g_sump1; double g_sump2; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct advert*) ;
 struct advert* FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_3 (struct lev_targ_ad_setsump *VAR_2) {
  if (VAR_1) {
    return 0;
  }
  struct advert *VAR_3 = FUNC_2 (VAR_2->ad_id, 0);
  FUNC_0 (VAR_3 && VAR_3->price > 0);
  FUNC_0 (VAR_2->type == VAR_0);
  FUNC_0 (VAR_2->sump0 >= 0 && VAR_2->sump1 >= 0 && VAR_2->sump2 >= 0);

  VAR_3->g_sump0 = (double) VAR_2->sump0 * (1.0 / (1LL << 32));
  VAR_3->g_sump1 = (double) VAR_2->sump1 * (1.0 / (1LL << 32));
  VAR_3->g_sump2 = (double) VAR_2->sump2 * (1.0 / (1LL << 32));

  FUNC_1 (VAR_3);

  return 1;
}
