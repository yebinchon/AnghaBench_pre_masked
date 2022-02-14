
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int delayed_error; } ;
typedef TYPE_1__ uv_tcp_t ;
typedef int uv_handle_t ;
struct sockaddr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int const*,int ,struct sockaddr*,int*) ;

int FUNC_1(const uv_tcp_t* VAR_1,
                       struct sockaddr* VAR_2,
                       int* VAR_3) {

  if (VAR_1->delayed_error)
    return VAR_1->delayed_error;

  return FUNC_0((const uv_handle_t*) VAR_1,
                             VAR_0,
                             VAR_2,
                             VAR_3);
}
