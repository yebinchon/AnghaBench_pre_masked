
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_send_t ;
typedef int uv_buf_t ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int ,int ,struct sockaddr_in6*) ;
 int FUNC_3 (int *,int *,int *,int,struct sockaddr const*,int ) ;

__attribute__((used)) static int FUNC_4(uv_udp_send_t* VAR_4) {
  uv_buf_t VAR_5;
  struct sockaddr_in6 VAR_6;

  VAR_5 = FUNC_1("PING", 4);

  FUNC_0(0 == FUNC_2(VAR_0, VAR_1, &VAR_6));


  return FUNC_3(VAR_4,
                     &VAR_2,
                     &VAR_5,
                     1,
                     (const struct sockaddr*) &VAR_6,
                     VAR_3);
}
