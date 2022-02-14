
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_handle_t ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(uv_udp_t* VAR_3,
                       ssize_t VAR_4,
                       const uv_buf_t* VAR_5,
                       const struct sockaddr* VAR_6,
                       unsigned VAR_7) {
  FUNC_1(VAR_3);
  FUNC_0(VAR_7 == 0);
  FUNC_0(VAR_4 == VAR_0);

  VAR_1++;

  FUNC_2((uv_handle_t*) VAR_3, VAR_2);
}
