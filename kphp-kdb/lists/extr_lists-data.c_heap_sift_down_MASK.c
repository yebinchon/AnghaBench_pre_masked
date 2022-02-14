
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int value_t ;
typedef int global_id_t ;
struct TYPE_3__ {int global_id; int value; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static inline int FUNC_1 (value_t VAR_2, global_id_t VAR_3) {
  int VAR_4 = 1, VAR_5;
  while (1) {
    VAR_5 = VAR_4*2;
    if (VAR_5 > VAR_1) {
      break;
    }
    if (VAR_5 < VAR_1 && FUNC_0 (&VAR_0[VAR_5+1], VAR_0[VAR_5].value, VAR_0[VAR_5].global_id) < 0) {
      VAR_5++;
    }
    if (FUNC_0 (&VAR_0[VAR_5], VAR_2, VAR_3) >= 0) {
      break;
    }
    VAR_0[VAR_4] = VAR_0[VAR_5];
    VAR_4 = VAR_5;
  }
  return VAR_4;
}
