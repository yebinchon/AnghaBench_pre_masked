
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int memory_buf_mx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 () ;
 int * VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_11 ;

void FUNC_10 (void) {

  FUNC_6 (-1, "Engine restart");

  FUNC_4 (1);

  int VAR_12;
  FUNC_1 (1);
  for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
    FUNC_1 (2 + VAR_12);
  }

  if (VAR_11 > 0) {
    FUNC_8 (&VAR_4);
    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
      FUNC_8 (&VAR_2[VAR_12]);
    }

    FUNC_9 (VAR_9);
    FUNC_7 (&VAR_10);

    for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++) {
      FUNC_2 (VAR_7[VAR_12], VAR_3.data[VAR_12].memory_buf_mx);
    }

    FUNC_2 (VAR_5, 2 * VAR_0 + 1100);
    FUNC_2 (VAR_6, 2 * VAR_0 + 1100);
    FUNC_5 (VAR_8, "Memory left: %ld\n", FUNC_3());

    FUNC_0 (FUNC_3() == 0);
  }
}
