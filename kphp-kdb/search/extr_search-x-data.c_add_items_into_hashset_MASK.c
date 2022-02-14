
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ filled; } ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 TYPE_1__ VAR_4 ;

void FUNC_2 (void) {
  int VAR_5;
  for (VAR_5 = 0; VAR_5 < VAR_2 && VAR_4.filled + VAR_3 <= VAR_0; VAR_5++) {
    FUNC_1 (&VAR_4, FUNC_0 (VAR_1[VAR_5]));
  }
}
