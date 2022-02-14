
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_photo_set_volume {int server_id; int volume_id; } ;


 int* FUNC_0 (int *,int ) ;
 int VAR_0 ;

int FUNC_1 (struct lev_photo_set_volume *VAR_1) {
  int *VAR_2 = FUNC_0 (&VAR_0, VAR_1->volume_id);
  if (VAR_2 != ((void*)0)) {
    *VAR_2 = VAR_1->server_id;
    return 1;
  }
  return 0;
}
