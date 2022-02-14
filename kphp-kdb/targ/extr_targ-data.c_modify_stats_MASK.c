
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_stat_load {scalar_t__ clicked; int click_money; scalar_t__ views; scalar_t__ l_clicked; scalar_t__ l_views; } ;
struct advert {scalar_t__ l_clicked; scalar_t__ views; int click_money; scalar_t__ l_clicked_old; scalar_t__ l_views; int flags; scalar_t__ l_sump2; scalar_t__ l_sump1; scalar_t__ l_sump0; int g_sump2; int g_sump1; int g_sump0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct advert*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1 (struct lev_targ_stat_load *VAR_8, struct advert *VAR_9) {
  VAR_3 -= VAR_9->l_clicked;
  VAR_4 -= VAR_9->views;
  VAR_2 -= VAR_9->click_money;

  VAR_9->l_clicked = VAR_8->clicked > 0 ? VAR_8->clicked : 0;
  VAR_9->click_money = VAR_8->click_money > 0 ? VAR_8->click_money * VAR_1 : 0;
  VAR_9->views = VAR_8->views > 0 ? VAR_8->views : 0;
  VAR_9->l_clicked_old = VAR_8->l_clicked > 0 ? VAR_8->l_clicked : 0;
  VAR_9->l_views = VAR_8->l_views > 0 ? VAR_8->l_views : 0;

  VAR_3 += VAR_9->l_clicked;
  VAR_4 += VAR_9->views;
  VAR_2 += VAR_9->click_money;

  VAR_5 -= VAR_9->l_sump0;
  VAR_6 -= VAR_9->l_sump1;
  VAR_7 -= VAR_9->l_sump2;
  VAR_9->g_sump0 -= VAR_9->l_sump0;
  VAR_9->g_sump1 -= VAR_9->l_sump1;
  VAR_9->g_sump2 -= VAR_9->l_sump2;
  VAR_9->l_sump0 = 0;
  VAR_9->l_sump1 = 0;
  VAR_9->l_sump2 = 0;
  VAR_9->flags &= ~VAR_0;
  FUNC_0 (VAR_9);

  return 0;
}
