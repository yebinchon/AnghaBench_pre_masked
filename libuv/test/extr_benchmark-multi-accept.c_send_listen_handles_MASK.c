
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_stream_t ;
typedef int uv_loop_t ;
typedef scalar_t__ uv_handle_type ;
typedef int uv_handle_t ;
struct sockaddr {int dummy; } ;
struct server_ctx {int semaphore; } ;
struct ipc_server_ctx {unsigned int num_connects; int server_handle; int ipc_pipe; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int,int ) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int *,int) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,struct sockaddr const*,int ) ;
 scalar_t__ FUNC_10 (int *,int *) ;

__attribute__((used)) static void FUNC_11(uv_handle_type VAR_5,
                                unsigned int VAR_6,
                                struct server_ctx* VAR_7) {
  struct ipc_server_ctx VAR_8;
  uv_loop_t* VAR_9;
  unsigned int VAR_10;

  VAR_9 = FUNC_2();
  VAR_8.num_connects = VAR_6;

  if (VAR_5 == VAR_2) {
    FUNC_0(0 == FUNC_10(VAR_9, (uv_tcp_t*) &VAR_8.server_handle));
    FUNC_0(0 == FUNC_9((uv_tcp_t*) &VAR_8.server_handle,
                            (const struct sockaddr*) &VAR_4,
                            0));
  }
  else
    FUNC_0(0);

  FUNC_0(0 == FUNC_5(VAR_9, &VAR_8.ipc_pipe, 1));
  FUNC_0(0 == FUNC_4(&VAR_8.ipc_pipe, VAR_0));
  FUNC_0(0 == FUNC_3((uv_stream_t*) &VAR_8.ipc_pipe, 128, VAR_3));

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    FUNC_7(&VAR_7[VAR_10].semaphore);

  FUNC_0(0 == FUNC_6(VAR_9, VAR_1));
  FUNC_1((uv_handle_t*) &VAR_8.server_handle, ((void*)0));
  FUNC_0(0 == FUNC_6(VAR_9, VAR_1));

  for (VAR_10 = 0; VAR_10 < VAR_6; VAR_10++)
    FUNC_8(&VAR_7[VAR_10].semaphore);
}
