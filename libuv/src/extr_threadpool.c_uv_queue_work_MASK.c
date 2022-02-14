
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int work_req; int after_work_cb; int * work_cb; int * loop; } ;
typedef TYPE_1__ uv_work_t ;
typedef int * uv_work_cb ;
typedef int uv_loop_t ;
typedef int uv_after_work_cb ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;

int FUNC_2(uv_loop_t* VAR_5,
                  uv_work_t* VAR_6,
                  uv_work_cb VAR_7,
                  uv_after_work_cb VAR_8) {
  if (VAR_7 == ((void*)0))
    return VAR_0;

  FUNC_0(VAR_5, VAR_6, VAR_1);
  VAR_6->loop = VAR_5;
  VAR_6->work_cb = VAR_7;
  VAR_6->after_work_cb = VAR_8;
  FUNC_1(VAR_5,
                  &VAR_6->work_req,
                  VAR_2,
                  VAR_4,
                  VAR_3);
  return 0;
}
