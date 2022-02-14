
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_create_photo_force {int user_id; int album_id; int photo_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_create_photo_force* FUNC_1 (scalar_t__,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2 (int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_6 <= 0 || VAR_6 > VAR_1) {
    return 0;
  }

  int VAR_8 = sizeof (struct lev_photo_create_photo_force);
  struct lev_photo_create_photo_force *VAR_9 =
    FUNC_1 (VAR_0 + (VAR_3 << 16) + VAR_6, VAR_8, VAR_4);

  VAR_9->user_id = VAR_4;
  VAR_9->album_id = VAR_5;
  VAR_9->photo_id = VAR_7;

  return FUNC_0 (VAR_2, 1);
}
