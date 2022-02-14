
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t buflen; int work_req; void* buf; int * cb; scalar_t__ status; int * loop; } ;
typedef TYPE_1__ uv_random_t ;
typedef int * uv_random_cb ;
typedef int uv_loop_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int FUNC_2 (int *,int *,int ,int ,int ) ;

int FUNC_3(uv_loop_t* VAR_6,
              uv_random_t* VAR_7,
              void *VAR_8,
              size_t VAR_9,
              unsigned VAR_10,
              uv_random_cb VAR_11) {
  if (VAR_9 > 0x7FFFFFFFu)
    return VAR_0;

  if (VAR_10 != 0)
    return VAR_1;

  if (VAR_11 == ((void*)0))
    return FUNC_0(VAR_8, VAR_9);

  FUNC_1(VAR_6, VAR_7, VAR_2);
  VAR_7->loop = VAR_6;
  VAR_7->status = 0;
  VAR_7->cb = VAR_11;
  VAR_7->buf = VAR_8;
  VAR_7->buflen = VAR_9;

  FUNC_2(VAR_6,
                  &VAR_7->work_req,
                  VAR_3,
                  VAR_5,
                  VAR_4);

  return 0;
}
