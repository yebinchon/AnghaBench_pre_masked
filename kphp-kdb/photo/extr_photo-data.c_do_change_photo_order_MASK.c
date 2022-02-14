
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_change_photo_order {int user_id; int photo_id; int photo_id_near; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_change_photo_order* FUNC_1 (scalar_t__,int,int) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  if (!FUNC_2 (VAR_4) || VAR_5 < 0 || VAR_5 == VAR_4) {
    return 0;
  }
  int VAR_7 = sizeof (struct lev_photo_change_photo_order);
  struct lev_photo_change_photo_order *VAR_8 =
    FUNC_1 (VAR_0 + (VAR_2 << 16) + VAR_6, VAR_7, VAR_3);

  VAR_8->user_id = VAR_3;
  VAR_8->photo_id = VAR_4;
  VAR_8->photo_id_near = VAR_5;

  return FUNC_0 (VAR_1, 1);
}
