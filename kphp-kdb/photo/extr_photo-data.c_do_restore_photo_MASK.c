
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_restore_photo {int user_id; int photo_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_restore_photo* FUNC_1 (scalar_t__,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (int VAR_3, int VAR_4) {
  int VAR_5 = sizeof (struct lev_photo_restore_photo);
  struct lev_photo_restore_photo *VAR_6 = FUNC_1 (VAR_0 + (VAR_1 << 16), VAR_5, VAR_3);

  VAR_6->user_id = VAR_3;
  VAR_6->photo_id = VAR_4;

  return FUNC_0 (VAR_2, 1);
}
