
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_del_photo_location_engine {int user_id; int photo_id; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int) ;
 struct lev_photo_del_photo_location_engine* FUNC_1 (scalar_t__,int,int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2 (int VAR_3, int VAR_4, int VAR_5, char VAR_6, int VAR_7) {
  if ((VAR_6 != -1 && VAR_6 < 'a') || VAR_6 > 'z' || VAR_7 < -1 || VAR_7 > 3 || VAR_5 < 0 || VAR_5 > 1) {
    return 0;
  }

  int VAR_8 = sizeof (struct lev_photo_del_photo_location_engine);
  struct lev_photo_del_photo_location_engine *VAR_9 = FUNC_1 (VAR_0 + (VAR_2 << 16) + VAR_6 + (VAR_7 << 8) + 257 + ((VAR_5 * 5) << 8), VAR_8, VAR_3);

  VAR_9->user_id = VAR_3;
  VAR_9->photo_id = VAR_4;

  return FUNC_0 (VAR_1, 1);
}
