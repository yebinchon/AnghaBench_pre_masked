
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_photo_change_photo_location_server {int type; int server_id; int photo_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int ) ;

int FUNC_1 (user *VAR_2, struct lev_photo_change_photo_location_server *VAR_3, int VAR_4) {
  int VAR_5 = VAR_3->type - (VAR_1 << 16) - VAR_0;
  return FUNC_0 (VAR_2, VAR_3->photo_id, VAR_5 >> 1, VAR_5 & 1, VAR_3->server_id);
}
