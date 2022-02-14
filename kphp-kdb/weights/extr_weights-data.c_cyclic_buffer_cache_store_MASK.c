
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vector_id; int timestamp; int coord_id; } ;
typedef TYPE_1__ weights_cyclic_buffer_en_t ;


 TYPE_1__* VAR_0 ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_0 (int VAR_2, int VAR_3, int VAR_4) {
  unsigned int VAR_5 = (VAR_2 * 63617 + VAR_3) * 63617 + VAR_4;
  VAR_5 %= VAR_1;
  weights_cyclic_buffer_en_t *VAR_6 = VAR_0 + VAR_5;
  if (VAR_6->vector_id == VAR_2 && VAR_6->timestamp == VAR_4 && VAR_6->coord_id == VAR_3) {
    return 0;
  }
  VAR_6->vector_id = VAR_2;
  VAR_6->coord_id = VAR_3;
  VAR_6->timestamp = VAR_4;
  return 1;
}
