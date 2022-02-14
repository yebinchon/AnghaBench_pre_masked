
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ep; } ;
typedef TYPE_1__ uv_loop_t ;
typedef int uv__os390_epoll ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int VAR_0 ;

int FUNC_2(uv_loop_t* VAR_1) {
  uv__os390_epoll* VAR_2;

  VAR_2 = FUNC_1(0);
  VAR_1->ep = VAR_2;
  if (VAR_2 == ((void*)0))
    return FUNC_0(VAR_0);

  return 0;
}
