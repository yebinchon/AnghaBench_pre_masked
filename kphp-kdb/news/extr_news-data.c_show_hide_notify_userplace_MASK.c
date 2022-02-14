
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* first; } ;
typedef TYPE_1__ userplace_t ;
typedef int notify_user_t ;
struct TYPE_5__ {int item; int date; struct TYPE_5__* next; } ;
typedef TYPE_2__ notify_t ;
typedef int notify_place_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0 (userplace_t *VAR_2, notify_user_t *VAR_3, notify_place_t *VAR_4, int VAR_5, int VAR_6) {
  if (VAR_1 < VAR_0) {
    return 0;
  }
  notify_t *VAR_7;
  int VAR_8 = 0;
  for (VAR_7 = VAR_2->first; VAR_7 != (notify_t *) VAR_2; VAR_7 = VAR_7->next) {
    if (VAR_7->item == VAR_5 && (VAR_7->date ^ VAR_6) >= 0) {
      VAR_8++;
      VAR_7->date ^= (-1 << 31);
    }
  }
  return VAR_8;
}
