
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {int l_views; int l_clicked_old; scalar_t__ g_clicked_old; scalar_t__ g_views; } ;


 int VAR_0 ;
 double VAR_1 ;

__attribute__((used)) static void FUNC_0 (struct advert *VAR_2) {
  if (VAR_2->l_views >= 2*VAR_0 && (double) VAR_2->l_clicked_old / VAR_2->l_views > 1.5*VAR_1) {
    int VAR_3 = VAR_2->l_views / VAR_0;
    VAR_2->l_views /= VAR_3;
    VAR_2->l_clicked_old /= VAR_3;
  }
  VAR_2->g_views = 0;
  VAR_2->g_clicked_old = 0;
}
