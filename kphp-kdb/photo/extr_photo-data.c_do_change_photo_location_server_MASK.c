
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_change_photo_location_server {int dummy; } ;
struct lev_photo_add_photo_location {int user_id; int photo_id; int server_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_add_photo_location* FUNC_1 (scalar_t__,int,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  if (VAR_5 < 0 || VAR_5 > 1 || VAR_6 < 0 || VAR_6 > 1) {
    FUNC_2 ("change_photo_location_server failed\n");
    return 0;
  }

  int VAR_8 = sizeof (struct lev_photo_change_photo_location_server);

  struct lev_photo_add_photo_location *VAR_9 =
    FUNC_1 (VAR_0 + (VAR_2 << 16) + (VAR_5 << 1) + VAR_6, VAR_8, VAR_3);

  VAR_9->user_id = VAR_3;
  VAR_9->photo_id = VAR_4;
  VAR_9->server_id = VAR_7;

  return FUNC_0 (VAR_1, 1);
}
