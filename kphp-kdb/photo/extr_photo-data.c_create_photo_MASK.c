
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;
struct lev_photo_create_photo {int type; int album_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,int) ;

int FUNC_2 (user *VAR_3, struct lev_photo_create_photo *VAR_4, int VAR_5) {
  int VAR_6 = VAR_4->type - (VAR_2 << 16) - VAR_0;
  FUNC_0 (VAR_6 > 0 && VAR_6 <= VAR_1);

  return FUNC_1 (VAR_3, VAR_4->album_id, VAR_6);
}
