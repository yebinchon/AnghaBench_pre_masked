
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_rotate_photo {int user_id; int photo_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_rotate_photo* FUNC_1 (scalar_t__,int,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4, int VAR_5) {
  if (VAR_5 == -1) {
    VAR_5 = 3;
  }

  if ((VAR_5 != 1 && VAR_5 != 3) || !FUNC_2 (VAR_4)) {
    return 0;
  }

  int VAR_6 = sizeof (struct lev_photo_rotate_photo);
  struct lev_photo_rotate_photo *VAR_7 =
    FUNC_1 (VAR_0 + (VAR_1 << 16) + VAR_5, VAR_6, VAR_3);

  VAR_7->user_id = VAR_3;
  VAR_7->photo_id = VAR_4;

  return FUNC_0 (VAR_2, 1);
}
