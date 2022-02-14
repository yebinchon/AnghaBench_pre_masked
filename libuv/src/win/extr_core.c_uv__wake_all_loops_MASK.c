
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iocp; } ;
typedef TYPE_1__ uv_loop_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int ,int ,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__** VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(void) {
  int VAR_4;
  uv_loop_t* VAR_5;

  FUNC_2(&VAR_2);
  for (VAR_4 = 0; VAR_4 < VAR_3; ++VAR_4) {
    VAR_5 = VAR_1[VAR_4];
    FUNC_1(VAR_5);
    if (VAR_5->iocp != VAR_0)
      FUNC_0(VAR_5->iocp, 0, 0, ((void*)0));
  }
  FUNC_3(&VAR_2);
}
