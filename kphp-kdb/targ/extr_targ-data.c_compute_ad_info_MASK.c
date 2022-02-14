
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {long long ad_id; long long flags; long long price; long long users; long long views; long long l_clicked; long long click_money; long long l_clicked_old; long long l_views; long long g_clicked_old; long long g_views; int expected_gain; long long ext_users; long long g_clicked; int l_sump0; int l_sump1; int l_sump2; int g_sump0; int g_sump1; int g_sump2; int lambda; int delta; long long recent_views; long long recent_views_limit; int factor; long long domain; long long group; long long category; long long subcategory; } ;


 struct advert* FUNC_0 (int,int ) ;
 int FUNC_1 (int) ;

int FUNC_2 (int VAR_0, long long *VAR_1) {
  struct advert *VAR_2 = FUNC_0 (VAR_0, 0);
  if (!VAR_2) { return 0; }
  VAR_1[0] = VAR_2->ad_id;
  VAR_1[1] = VAR_2->flags;
  VAR_1[2] = VAR_2->price;
  VAR_1[3] = VAR_2->users;
  VAR_1[4] = VAR_2->views;
  VAR_1[5] = VAR_2->l_clicked;
  VAR_1[6] = VAR_2->click_money;
  VAR_1[7] = VAR_2->l_clicked_old;
  VAR_1[8] = VAR_2->l_views;
  VAR_1[9] = VAR_2->g_clicked_old;
  VAR_1[10] = VAR_2->g_views;
  VAR_1[11] = VAR_2->expected_gain * 1e9;
  VAR_1[12] = VAR_2->ext_users;
  VAR_1[13] = VAR_2->g_clicked;
  VAR_1[14] = VAR_2->l_sump0 * 1e9 + 0.5;
  VAR_1[15] = VAR_2->l_sump1 * 1e9 + 0.5;
  VAR_1[16] = VAR_2->l_sump2 * 1e9 + 0.5;
  VAR_1[17] = VAR_2->g_sump0 * 1e9 + 0.5;
  VAR_1[18] = VAR_2->g_sump1 * 1e9 + 0.5;
  VAR_1[19] = VAR_2->g_sump2 * 1e9 + 0.5;
  if (VAR_2->price > 0) {
    VAR_1[20] = (VAR_2->lambda / VAR_2->price) * 1e9;
    VAR_1[21] = (VAR_2->delta / VAR_2->price) * (1e9 / FUNC_1 (3));
  } else {
    VAR_1[20] = VAR_1[21] = 0;
  }
  VAR_1[22] = VAR_2->recent_views;
  VAR_1[23] = VAR_2->recent_views_limit;
  VAR_1[24] = VAR_2->factor * 1e6 + 0.5;
  VAR_1[25] = VAR_2->domain;
  VAR_1[26] = VAR_2->group;
  VAR_1[27] = VAR_2->category;
  VAR_1[28] = VAR_2->subcategory;
  return 29;
}
