
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * poll_cb; int io_watcher; } ;
typedef TYPE_1__ uv_poll_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int) ;
 int VAR_3 ;

int FUNC_7(uv_loop_t* VAR_4, uv_poll_t* VAR_5, int VAR_6) {
  int VAR_7;

  if (FUNC_0(VAR_4, VAR_6))
    return VAR_0;

  VAR_7 = FUNC_2(VAR_4, VAR_6);
  if (VAR_7)
    return VAR_7;




  VAR_7 = FUNC_4(VAR_6, 1);
  if (VAR_7 == VAR_1)
    if (FUNC_4 == FUNC_6)
      VAR_7 = FUNC_5(VAR_6, 1);

  if (VAR_7)
    return VAR_7;

  FUNC_1(VAR_4, (uv_handle_t*) VAR_5, VAR_2);
  FUNC_3(&VAR_5->io_watcher, VAR_3, VAR_6);
  VAR_5->poll_cb = ((void*)0);
  return 0;
}
