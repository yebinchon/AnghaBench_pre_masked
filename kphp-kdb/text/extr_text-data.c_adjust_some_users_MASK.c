
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* online_tree; } ;
typedef TYPE_2__ user_t ;
struct TYPE_5__ {int y; } ;


 TYPE_2__** VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_1 (void) {
  user_t *VAR_6;
  int VAR_7 = VAR_5, VAR_8 = 2000, VAR_9 = VAR_4 - VAR_1;
  if (VAR_8 > VAR_2) { VAR_8 = VAR_2; }
  while (VAR_8 --> 0) {
    VAR_6 = VAR_0[VAR_7++];
    if (VAR_7 > VAR_2) {
      VAR_7 = VAR_3;
    }
    if (VAR_6 && VAR_6->online_tree && VAR_6->online_tree->y < VAR_9) {
      FUNC_0 (VAR_6);
    }
  }
  VAR_5 = VAR_7;
}
