
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct advert {double price; int ext_users; int users; double expected_gain; double l_clicked_old; double g_clicked_old; double l_views; double g_views; } ;


 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 int FUNC_0 (struct advert*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;

double FUNC_2 (struct advert *VAR_5) {
  FUNC_0 (VAR_5);
  if (VAR_5->price > 0) {
    int VAR_6 = VAR_1;
    if (VAR_5->ext_users) {
      VAR_6 = FUNC_1 (VAR_5->ext_users);
    } else if (VAR_5->users) {
      VAR_6 = FUNC_1 (VAR_5->users * VAR_4);
    }
    VAR_5->expected_gain = VAR_5->price * (VAR_5->l_clicked_old + VAR_5->g_clicked_old * 0.1 + VAR_0) /
                                  (VAR_5->l_views + VAR_5->g_views * 0.1 + VAR_6);
  } else {
    VAR_5->expected_gain = -1.0 * VAR_5->price * VAR_3 / VAR_2;
  }
  return VAR_5->expected_gain;
}
