
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int prev_user_creations; } ;
typedef TYPE_1__ user_t ;
struct advert {int* user_list; int users; int ad_id; int prev_user_creations; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_1 (struct advert *VAR_1) {
  int *VAR_2 = VAR_1->user_list, *VAR_3 = VAR_2 + VAR_1->users;
  int VAR_4 = VAR_1->ad_id, VAR_5 = VAR_1->prev_user_creations;
  while (VAR_2 < VAR_3) {
    int VAR_6 = *VAR_2++;
    user_t *VAR_7 = VAR_0[VAR_6];
    if (VAR_7 && VAR_7->prev_user_creations <= VAR_5) {
      FUNC_0 (VAR_7, VAR_4);
    }
  }
}
