
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int place; int owner; int type; double weight; scalar_t__ users; scalar_t__ actions_bitset; scalar_t__ last_user; struct TYPE_4__* hnext; } ;
typedef TYPE_1__ recommend_place_t ;
typedef int place_t ;


 scalar_t__ VAR_0 ;
 int ** VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_4 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static recommend_place_t *FUNC_2 (int VAR_5, int VAR_6, int VAR_7, int VAR_8) {
  FUNC_0 (VAR_2);
  unsigned VAR_9 = ((unsigned) (VAR_5 * 17239 + VAR_6 * 239 + VAR_7)) % VAR_3;
  recommend_place_t **VAR_10 = ((recommend_place_t **) VAR_1) + VAR_9, *VAR_11;
  while (*VAR_10) {
    VAR_11 = *VAR_10;
    if (VAR_11->place == VAR_7 && VAR_11->owner == VAR_6 && VAR_11->type == VAR_5) {
      *VAR_10 = VAR_11->hnext;
      if (VAR_8 >= 0) {
        VAR_11->hnext = (recommend_place_t *) VAR_1[VAR_9];
        VAR_1[VAR_9] = (place_t *) VAR_11;
      }
      return VAR_11;
    }
    VAR_10 = &VAR_11->hnext;
  }
  if (VAR_8 <= 0 || VAR_4 >= VAR_0) {
    return 0;
  }
  VAR_11 = FUNC_1 (sizeof (recommend_place_t));
  VAR_11->type = VAR_5;
  VAR_11->owner = VAR_6;
  VAR_11->place = VAR_7;
  VAR_11->hnext = (recommend_place_t *) VAR_1[VAR_9];
  VAR_11->weight = 0.0;
  VAR_11->last_user = 0;
  VAR_11->actions_bitset = 0;
  VAR_11->users = 0;
  VAR_1[VAR_9] = (place_t *) VAR_11;
  VAR_4++;
  return VAR_11;
}
