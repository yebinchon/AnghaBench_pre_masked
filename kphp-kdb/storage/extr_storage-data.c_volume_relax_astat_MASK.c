
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int binlogs; int * B; } ;
typedef TYPE_1__ volume_t ;


 int FUNC_0 (int ,double) ;

__attribute__((used)) static void FUNC_1 (volume_t *VAR_0, double VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->binlogs; VAR_2++) {
    FUNC_0 (VAR_0->B[VAR_2], VAR_1);
  }
}
