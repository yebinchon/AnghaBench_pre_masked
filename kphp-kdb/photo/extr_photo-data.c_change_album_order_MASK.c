
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_photo_change_album_order {int type; int album_id_near; int album_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int) ;

int FUNC_1 (user *VAR_2, struct lev_photo_change_album_order *VAR_3, int VAR_4) {
  return FUNC_0 (VAR_2, VAR_3->album_id, VAR_3->album_id_near, VAR_3->type - (VAR_1 << 16) - VAR_0);
}
