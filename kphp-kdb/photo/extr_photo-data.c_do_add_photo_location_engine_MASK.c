
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_add_photo_location_engine {int user_id; int photo_id; int volume_id; int local_id; int extra; unsigned long long secret; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 struct lev_photo_add_photo_location_engine* FUNC_1 (scalar_t__,int,int) ;
 int VAR_2 ;

int FUNC_2 (int VAR_3, int VAR_4, int VAR_5, char VAR_6, int VAR_7, int VAR_8, int VAR_9, int VAR_10, unsigned long long VAR_11) {
  if (VAR_6 < 'a' || VAR_6 > 'z' || VAR_7 < 0 || VAR_7 > 3 || VAR_5 < 0 || VAR_5 > 1) {
    return 0;
  }

  int VAR_12 = sizeof (struct lev_photo_add_photo_location_engine);
  struct lev_photo_add_photo_location_engine *VAR_13 =
    FUNC_1 (VAR_0 + (VAR_2 << 16) + VAR_6 + (VAR_7 << 8) + (VAR_5 << 10), VAR_12, VAR_3);

  VAR_13->user_id = VAR_3;
  VAR_13->photo_id = VAR_4;
  VAR_13->volume_id = VAR_8;
  VAR_13->local_id = VAR_9;
  VAR_13->extra = VAR_10;
  VAR_13->secret = VAR_11;

  return FUNC_0 (VAR_1, 1);
}
