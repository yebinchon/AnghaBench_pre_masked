
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fr_cnt; int fr_tree; } ;
typedef TYPE_1__ user_t ;
struct TYPE_5__ {int date; int cat; int x; } ;


 TYPE_3__** VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

int FUNC_3 (int VAR_5, int VAR_6) {
  user_t *VAR_7 = FUNC_1 (VAR_5);
  if (!VAR_7 || VAR_6 <= 0 || VAR_6 > 1000) {
    return -1;
  }
  VAR_4 = VAR_6;
  VAR_1 = 0;

  FUNC_2 (VAR_7->fr_tree);
  FUNC_0 ();

  VAR_3 = VAR_2;
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
    VAR_3[0] = VAR_0[VAR_8]->x;
    VAR_3[1] = VAR_0[VAR_8]->cat;
    VAR_3[2] = VAR_0[VAR_8]->date;
    VAR_3 += 3;
  }

  return VAR_7->fr_cnt;
}
