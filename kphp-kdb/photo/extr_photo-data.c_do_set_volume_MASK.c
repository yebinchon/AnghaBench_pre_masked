
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_set_volume {int volume_id; int server_id; } ;


 scalar_t__ VAR_0 ;
 struct lev_photo_set_volume* FUNC_0 (scalar_t__,int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct lev_photo_set_volume*) ;

int FUNC_2 (int VAR_2, int VAR_3) {
  int VAR_4 = sizeof (struct lev_photo_set_volume);
  struct lev_photo_set_volume *VAR_5 =
    FUNC_0 (VAR_0 + (VAR_1 << 16), VAR_4, VAR_2);

  VAR_5->volume_id = VAR_2;
  VAR_5->server_id = VAR_3;

  return FUNC_1 (VAR_5);
}
