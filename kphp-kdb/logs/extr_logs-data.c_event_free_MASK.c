
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t type; } ;
typedef TYPE_1__ event ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (int) ;
 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int * VAR_6 ;
 int FUNC_3 (TYPE_1__*,size_t) ;

void FUNC_4 (void) {
  FUNC_1 (VAR_2);
  if (*(int *)(VAR_3 + VAR_5) == -1) {
    VAR_5 = 0;
  }
  event *VAR_7 = (event *)(VAR_3 + VAR_5);

  FUNC_1 (VAR_0[VAR_1] == VAR_7);
  FUNC_3 (VAR_7, VAR_1);
  VAR_2--;
  VAR_0[VAR_1] = ((void*)0);
  FUNC_0(VAR_1);
  VAR_6[VAR_7->type] -= FUNC_2 (VAR_7);
  VAR_4 -= FUNC_2 (VAR_7);
  VAR_5 += FUNC_2 (VAR_7);
}
