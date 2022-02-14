
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_os_fd_t ;
typedef int uv_handle_t ;
typedef scalar_t__ (* uv__peersockfunc ) (int ,struct sockaddr*,scalar_t__*) ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ socklen_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int const*,int *) ;

int FUNC_2(const uv_handle_t* VAR_1,
                        uv__peersockfunc VAR_2,
                        struct sockaddr* VAR_3,
                        int* VAR_4) {
  socklen_t VAR_5;
  uv_os_fd_t VAR_6;
  int VAR_7;

  VAR_7 = FUNC_1(VAR_1, &VAR_6);
  if (VAR_7 < 0)
    return VAR_7;


  VAR_5 = (socklen_t) *VAR_4;

  if (VAR_2(VAR_6, VAR_3, &VAR_5))
    return FUNC_0(VAR_0);

  *VAR_4 = (int) VAR_5;
  return 0;
}
