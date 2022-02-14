
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_create_album {int user_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_create_album* FUNC_1 (scalar_t__,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (int VAR_3) {
  int VAR_4 = sizeof (struct lev_photo_create_album);
  struct lev_photo_create_album *VAR_5 =
    FUNC_1 (VAR_0 + (VAR_2 << 16), VAR_4, VAR_3);

  VAR_5->user_id = VAR_3;

  return FUNC_0 (VAR_1, 1);
}
