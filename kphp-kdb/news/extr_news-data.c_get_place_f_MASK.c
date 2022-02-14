
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int place; int owner; int type; int * last; int * first; struct TYPE_4__* hnext; } ;
typedef TYPE_1__ place_t ;
typedef int notify_place_t ;
typedef int comment_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 void** VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 TYPE_1__* FUNC_2 (int) ;

__attribute__((used)) static place_t *FUNC_3 (int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  FUNC_0 (VAR_1 || VAR_0);
  FUNC_1 (5, "get_place_f: type = %d, owner = %d, place = %d, force = %d\n", VAR_5, VAR_6, VAR_7, VAR_8);
  unsigned VAR_9 = ((unsigned) (VAR_5 * 17239 + VAR_6 * 239 + VAR_7)) % VAR_2;
  place_t **VAR_10 = VAR_3 + VAR_9, *VAR_11;
  while (*VAR_10) {
    VAR_11 = *VAR_10;
    if (VAR_11->place == VAR_7 && VAR_11->owner == VAR_6 && VAR_11->type == VAR_5) {
      *VAR_10 = VAR_11->hnext;
      if (VAR_8 >= 0) {
        VAR_11->hnext = VAR_3[VAR_9];
        VAR_3[VAR_9] = VAR_11;
      }
      FUNC_1 (5, "get_place_f: result = %p\n", VAR_11);
      return VAR_11;
    }
    VAR_10 = &VAR_11->hnext;
  }
  if (VAR_8 <= 0) {
    FUNC_1 (5, "get_place_f: nothing found\n");
    return 0;
  }
  if (VAR_0) {
    VAR_11 = FUNC_2 (sizeof (place_t));
  } else {
    FUNC_0 (VAR_1);
    VAR_11 = FUNC_2 (sizeof (notify_place_t));
  }
  FUNC_1 (4, "Creating new place: type = %d, owner = %d, place = %d: p = %p\n", VAR_5, VAR_6, VAR_7, VAR_11);
  VAR_11->type = VAR_5;
  VAR_11->owner = VAR_6;
  VAR_11->place = VAR_7;
  VAR_11->hnext = VAR_3[VAR_9];
  VAR_11->first = VAR_11->last = (comment_t *) VAR_11;
  VAR_3[VAR_9] = VAR_11;
  VAR_4++;
  return VAR_11;
}
