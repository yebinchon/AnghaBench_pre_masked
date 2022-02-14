
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uni_country; int uni_city; int uid; } ;
typedef TYPE_1__ user_t ;
struct lev_univcity {int uni_country; int uni_city; int user_id; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int) ;

void FUNC_2 (struct lev_univcity *VAR_2) {
  user_t *VAR_3 = FUNC_0 (VAR_2->user_id);
  if (VAR_3 && VAR_2->uni_country >= 0 && VAR_2->uni_country <= 255 && VAR_2->uni_city >= 0) {
    FUNC_1 (VAR_3->uid, VAR_1, VAR_3->uni_country, VAR_2->uni_country);
    FUNC_1 (VAR_3->uid, VAR_0, VAR_3->uni_city, VAR_2->uni_city);
    VAR_3->uni_country = VAR_2->uni_country;
    VAR_3->uni_city = VAR_2->uni_city;
  }
}
