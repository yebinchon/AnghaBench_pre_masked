
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ owner; scalar_t__ place; } ;
typedef TYPE_1__ recommend_place_t ;



__attribute__((used)) static int FUNC_0 (const void *VAR_0, const void *VAR_1) {
  const recommend_place_t *VAR_2 = *(const recommend_place_t **) VAR_0;
  const recommend_place_t *VAR_3 = *(const recommend_place_t **) VAR_1;
  if (VAR_2->type < VAR_3->type) {
    return -1;
  }
  if (VAR_2->type > VAR_3->type) {
    return 1;
  }
  if (VAR_2->owner < VAR_3->owner) {
    return -1;
  }
  if (VAR_2->owner > VAR_3->owner) {
    return 1;
  }
  if (VAR_2->place < VAR_3->place) {
    return -1;
  }
  if (VAR_2->place > VAR_3->place) {
    return 1;
  }
  return 0;
}
