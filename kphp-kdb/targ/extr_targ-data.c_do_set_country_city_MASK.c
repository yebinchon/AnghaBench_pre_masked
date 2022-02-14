
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_univcity {int uni_country; int uni_city; } ;


 int VAR_0 ;
 struct lev_univcity* FUNC_0 (int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct lev_univcity*) ;

int FUNC_3 (int VAR_1, int VAR_2, int VAR_3) {
  if (VAR_2 < 0 || VAR_2 >= 256 || VAR_3 < 0 || !FUNC_1 (VAR_1)) {
    return 0;
  }
  struct lev_univcity *VAR_4 = FUNC_0 (VAR_0, 16, VAR_1);
  VAR_4->uni_country = VAR_2;
  VAR_4->uni_city = VAR_3;
  FUNC_2 (VAR_4);
  return 1;
}
