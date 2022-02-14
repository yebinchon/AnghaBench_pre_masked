
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct id_range_iterator {int lim; } ;
typedef TYPE_1__* iterator_t ;
struct TYPE_3__ {int pos; int jump_to; } ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;

int FUNC_1 (iterator_t VAR_3, int VAR_4) {
  FUNC_0 (VAR_4 > VAR_3->pos);
  while (VAR_4 <= ((struct id_range_iterator *) VAR_3)->lim) {
    if (VAR_1[VAR_4]) {
      return VAR_3->pos = VAR_4;
    }
    ++VAR_4;
  }
  VAR_3->jump_to = VAR_2;
  return VAR_3->pos = VAR_0;
}
