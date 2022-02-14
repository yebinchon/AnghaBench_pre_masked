
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_create_photo {int user_id; int album_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_create_photo* FUNC_1 (scalar_t__,int,int) ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2 (int VAR_4, int VAR_5, int VAR_6) {
  if (VAR_6 <= 0 || VAR_6 > VAR_1) {
    return 0;
  }

  int VAR_7 = sizeof (struct lev_photo_create_photo);
  struct lev_photo_create_photo *VAR_8 =
    FUNC_1 (VAR_0 + (VAR_3 << 16) + VAR_6, VAR_7, VAR_4);

  VAR_8->user_id = VAR_4;
  VAR_8->album_id = VAR_5;

  return FUNC_0 (VAR_2, 1);
}
