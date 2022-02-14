
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int prev_user_creations; } ;
typedef TYPE_1__ user_t ;
struct advert {int* user_list; int ad_id; int prev_user_creations; int users; scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__** VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3 (struct advert *VAR_2, int VAR_3, int *VAR_4, int VAR_5) {
  FUNC_1 (VAR_2 && (VAR_2->flags && VAR_0) && VAR_2->user_list);
  int VAR_6 = VAR_2->ad_id, VAR_7 = VAR_2->prev_user_creations;
  int *VAR_8 = VAR_2->user_list, *VAR_9 = VAR_4;
  int VAR_10 = *VAR_8++, VAR_11 = *VAR_9++;
  user_t *VAR_12;
  while (1) {
    if (VAR_10 < VAR_11) {
      VAR_12 = VAR_1[VAR_10];
      if (VAR_12 && VAR_12->prev_user_creations <= VAR_7) {
 FUNC_0 (VAR_12, VAR_6);
      }
      VAR_10 = *VAR_8++;
    } else if (VAR_10 > VAR_11) {
      VAR_12 = VAR_1[VAR_11];
      if (VAR_12) {
 FUNC_2 (VAR_12, VAR_6);
      }
      VAR_11 = *VAR_9++;
    } else if (VAR_10 == 0x7fffffff) {
      break;
    } else {
      VAR_12 = VAR_1[VAR_10];
      if (VAR_12 && VAR_12->prev_user_creations > VAR_5 && VAR_12->prev_user_creations <= VAR_7) {
 FUNC_0 (VAR_12, VAR_6);
      }
      VAR_10 = *VAR_8++;
      VAR_11 = *VAR_9++;
    }
  }
  FUNC_1 (VAR_9 == VAR_4 + VAR_3 + 1 && VAR_8 == VAR_2->user_list + VAR_2->users + 1);
}
