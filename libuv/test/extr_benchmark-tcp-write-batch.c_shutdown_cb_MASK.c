
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ write_queue_size; } ;
typedef TYPE_1__ uv_stream_t ;
struct TYPE_5__ {TYPE_1__* handle; } ;
typedef TYPE_2__ uv_shutdown_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(uv_shutdown_t* VAR_4, int VAR_5) {
  FUNC_0(VAR_4->handle == (uv_stream_t*)&VAR_2);
  FUNC_0(VAR_4->handle->write_queue_size == 0);

  FUNC_2((uv_handle_t*)VAR_4->handle, VAR_0);
  FUNC_1(VAR_3);

  VAR_1++;
}
