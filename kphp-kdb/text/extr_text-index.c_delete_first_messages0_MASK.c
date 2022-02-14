
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_t ;
struct TYPE_3__ {int user_id; int first_local_id; } ;


 TYPE_1__** VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;

void FUNC_3 (int VAR_5, int VAR_6) {
  int VAR_7 = FUNC_1 (VAR_5);
  if (VAR_7 < 0 || VAR_3) {
    VAR_2++;
    return;
  }
  FUNC_0 (VAR_6 > 0 && VAR_6 <= VAR_1[VAR_7] + 1);
  if (!VAR_0[VAR_7]) {
    VAR_0[VAR_7] = FUNC_2 (sizeof (user_t));
    VAR_0[VAR_7]->user_id = VAR_5;
    VAR_4++;
  }
  if (VAR_0[VAR_7]->first_local_id < VAR_6) {
    VAR_0[VAR_7]->first_local_id = VAR_6;
  }
}
