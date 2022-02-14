
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uv_timer_t ;
typedef int uv_handle_t ;
struct TYPE_4__ {int * data; } ;
typedef TYPE_1__ uv_async_t ;
struct TYPE_5__ {int handles_seen; TYPE_1__* async_handles; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(uv_timer_t* VAR_3) {
  unsigned VAR_4;

  VAR_1 = 1;
  FUNC_1(0 == FUNC_3(&VAR_2));

  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0->async_handles); VAR_4++) {
    uv_async_t* VAR_5 = VAR_0->async_handles + VAR_4;

    if (VAR_5->data != ((void*)0))
      VAR_0->handles_seen++;

    FUNC_2((uv_handle_t*) VAR_5, ((void*)0));
  }

  FUNC_2((uv_handle_t*) VAR_3, ((void*)0));
}
