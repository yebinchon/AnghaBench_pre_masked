
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* delmsg_list; int delmsg_cnt; int pos_to; int neg_to; TYPE_2__* msgs; } ;
typedef TYPE_1__ user_mod_header_t ;
struct TYPE_5__ {int message_id; struct TYPE_5__* prev; } ;
typedef TYPE_2__ message_t ;


 int VAR_0 ;

void FUNC_0 (user_mod_header_t *VAR_1) {
  int *VAR_2, *VAR_3;
  int VAR_4, VAR_5, VAR_6;
  message_t *VAR_7, **VAR_8;

  if (!VAR_1 || !VAR_1->delmsg_list || !VAR_1->delmsg_cnt || !VAR_1->msgs) {
    return;
  }

  VAR_2 = VAR_1->delmsg_list;
  VAR_3 = VAR_2 + VAR_1->delmsg_cnt - 1;
  VAR_4 = VAR_1->pos_to;
  VAR_5 = VAR_1->neg_to;
  VAR_7 = VAR_1->msgs;
  VAR_8 = &VAR_1->msgs;

  while (VAR_7) {
    VAR_6 = VAR_7->message_id;
    if (VAR_6 > 0) {
      while (VAR_3 >= VAR_2 && *VAR_3 > VAR_6) { VAR_3--; }
      if ((VAR_3 >= VAR_2 && *VAR_3 == VAR_6) || VAR_6 <= VAR_4) {
 *VAR_8 = VAR_7 = VAR_7->prev;
 VAR_0++;
 continue;
      }
    } else {
      while (VAR_3 >= VAR_2 && *VAR_2 < VAR_6) { VAR_2++; }
      if ((VAR_3 >= VAR_2 && *VAR_2 == VAR_6) || VAR_6 >= VAR_5) {
 *VAR_8 = VAR_7 = VAR_7->prev;
 VAR_0++;
 continue;
      }
    }
    VAR_8 = &VAR_7->prev;
    VAR_7 = VAR_7->prev;
  }
}
