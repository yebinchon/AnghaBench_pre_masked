
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_os_fd_t ;
typedef int uv_handle_t ;
typedef int (* uv__peersockfunc ) (int ,struct sockaddr*,int*) ;
struct sockaddr {int dummy; } ;
typedef int SOCKET ;


 int FUNC_0 () ;
 int FUNC_1 (int const*,scalar_t__*) ;
 int FUNC_2 (int) ;

int FUNC_3(const uv_handle_t* VAR_0,
                        uv__peersockfunc VAR_1,
                        struct sockaddr* VAR_2,
                        int* VAR_3,
                        int VAR_4) {

  int VAR_5;
  uv_os_fd_t VAR_6;

  VAR_5 = FUNC_1(VAR_0, &VAR_6);
  if (VAR_5 != 0)
    return VAR_5;

  if (VAR_4)
    return FUNC_2(VAR_4);

  VAR_5 = VAR_1((SOCKET) VAR_6, VAR_2, VAR_3);
  if (VAR_5 != 0)
    return FUNC_2(FUNC_0());

  return 0;
}
