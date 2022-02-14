
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_udp_send_t ;
typedef int uv_udp_send_cb ;
typedef int uv_buf_t ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int *,struct sockaddr const*) ;
 int FUNC_1 (int *,int *,int const*,unsigned int,struct sockaddr const*,int,int ) ;

int FUNC_2(uv_udp_send_t* VAR_0,
                uv_udp_t* VAR_1,
                const uv_buf_t VAR_2[],
                unsigned int VAR_3,
                const struct sockaddr* VAR_4,
                uv_udp_send_cb VAR_5) {
  int VAR_6;

  VAR_6 = FUNC_0(VAR_1, VAR_4);
  if (VAR_6 < 0)
    return VAR_6;

  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_6, VAR_5);
}
