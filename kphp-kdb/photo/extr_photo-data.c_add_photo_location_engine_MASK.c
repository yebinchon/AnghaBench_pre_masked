
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_photo_add_photo_location_engine {int type; int secret; int extra; int local_id; int volume_id; int photo_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int,int,int,int ,int ,int ,int ) ;

int FUNC_1 (user *VAR_2, struct lev_photo_add_photo_location_engine *VAR_3, int VAR_4) {
  int VAR_5 = VAR_3->type - (VAR_1 << 16) - VAR_0;
  return FUNC_0 (VAR_2, VAR_3->photo_id, VAR_5 >> 10, VAR_5 & 255, (VAR_5 >> 8) & 3, VAR_3->volume_id, VAR_3->local_id, VAR_3->extra, VAR_3->secret);
}
