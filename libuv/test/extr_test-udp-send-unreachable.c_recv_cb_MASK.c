
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(uv_udp_t* VAR_1,
                       ssize_t VAR_2,
                       const uv_buf_t* VAR_3,
                       const struct sockaddr* VAR_4,
                       unsigned VAR_5) {
  FUNC_1(VAR_1);
  VAR_0++;

  if (VAR_2 < 0) {
    FUNC_0(0 && "unexpected error");
  } else if (VAR_2 == 0) {

    FUNC_0(VAR_4 == ((void*)0));
  } else {
    FUNC_0(VAR_4 != ((void*)0));
  }
}
