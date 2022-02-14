
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef int uv_handle_t ;
struct server_ctx {int server_handle; int semaphore; int async_handle; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(void *VAR_3) {
  struct server_ctx *VAR_4;
  uv_loop_t VAR_5;

  VAR_4 = VAR_3;
  FUNC_0(0 == FUNC_5(&VAR_5));

  FUNC_0(0 == FUNC_2(&VAR_5, &VAR_4->async_handle, VAR_1));
  FUNC_9((uv_handle_t*) &VAR_4->async_handle);


  FUNC_8(&VAR_4->semaphore);
  FUNC_1(&VAR_5, (uv_stream_t*) &VAR_4->server_handle);
  FUNC_7(&VAR_4->semaphore);


  FUNC_0(0 == FUNC_3((uv_stream_t*) &VAR_4->server_handle,
                        128,
                        VAR_2));
  FUNC_0(0 == FUNC_6(&VAR_5, VAR_0));

  FUNC_4(&VAR_5);
}
