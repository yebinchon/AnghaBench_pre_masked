
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_targ_views {unsigned int ad_id; scalar_t__ views; int type; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct lev_targ_views* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (unsigned VAR_6) {
  if (VAR_6 >= VAR_1 || !VAR_2[VAR_6]) {
    return;
  }
  struct lev_targ_views *VAR_7 = FUNC_0 (12);
  VAR_7->type = VAR_0;
  VAR_7->ad_id = VAR_6;
  VAR_7->views = VAR_2[VAR_6];
  VAR_2[VAR_6] = 0;
  VAR_5++;
  VAR_4++;
  VAR_3 += 12;
}
