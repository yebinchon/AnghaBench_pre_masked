
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_tcp_t ;
typedef int uv_os_sock_t ;
typedef scalar_t__ uv_os_fd_t ;
typedef int uv_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_4(uv_tcp_t* VAR_0) {
  uv_os_fd_t VAR_1;
  int VAR_2;

  VAR_2 = FUNC_3((uv_handle_t*)VAR_0, &VAR_1);
  FUNC_0(VAR_2 == 0);



  VAR_2 = FUNC_1(VAR_1);

  FUNC_0(VAR_2 == 0);
}
