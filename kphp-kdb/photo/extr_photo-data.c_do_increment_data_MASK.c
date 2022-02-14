
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_increm_data {int user_id; int data_id; int cnt; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct lev_photo_increm_data* FUNC_1 (int,int,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_3 (int VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7) {
  FUNC_2 (0 <= VAR_5 && VAR_5 < VAR_0);





  int VAR_8 = sizeof (struct lev_photo_increm_data);
  struct lev_photo_increm_data *VAR_9 =
    FUNC_1 (VAR_7 + (VAR_2 << 16) + VAR_5, VAR_8, VAR_3);

  VAR_9->user_id = VAR_3;
  VAR_9->data_id = VAR_4;
  VAR_9->cnt = VAR_6;

  return FUNC_0 (VAR_1, 0);
}
