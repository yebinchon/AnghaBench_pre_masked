
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_photo_add_photo_location {int type; int photo; int orig_album_id; int orig_owner_id; int server_id2; int server_id; int photo_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int ,int ,int ,int ,int ) ;

int FUNC_1 (user *VAR_2, struct lev_photo_add_photo_location *VAR_3, int VAR_4) {
  int VAR_5 = VAR_3->type - (VAR_1 << 16) - VAR_0;
  return FUNC_0 (VAR_2, VAR_3->photo_id, VAR_5 >> 10, VAR_3->server_id, VAR_3->server_id2, VAR_3->orig_owner_id, VAR_3->orig_album_id, VAR_3->photo);
}
