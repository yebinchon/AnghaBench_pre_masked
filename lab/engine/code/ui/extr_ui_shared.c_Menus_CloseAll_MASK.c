
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_5__ {TYPE_1__ window; } ;


 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1(void) {
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(&VAR_0[VAR_4]);
  VAR_0[VAR_4].window.flags &= ~(VAR_1 | VAR_2);
  }
}
