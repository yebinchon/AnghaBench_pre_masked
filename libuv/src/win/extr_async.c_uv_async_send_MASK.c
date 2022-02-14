
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_3__ {scalar_t__ type; int flags; int async_req; int async_sent; int * loop; } ;
typedef TYPE_1__ uv_async_t ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

int FUNC_3(uv_async_t* VAR_2) {
  uv_loop_t* VAR_3 = VAR_2->loop;

  if (VAR_2->type != VAR_0) {

    return -1;
  }



  FUNC_1(!(VAR_2->flags & VAR_1));

  if (!FUNC_2(&VAR_2->async_sent)) {
    FUNC_0(VAR_3, &VAR_2->async_req);
  }

  return 0;
}
