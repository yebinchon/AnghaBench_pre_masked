
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uv_udp_t ;
typedef int uv_udp_send_t ;
typedef int uv_buf_t ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int *,int,struct sockaddr const*,int ) ;

__attribute__((used)) static void FUNC_3(uv_udp_t* VAR_2,
                    ssize_t VAR_3,
                    const uv_buf_t* VAR_4,
                    const struct sockaddr* VAR_5,
                    unsigned VAR_6) {
  uv_udp_send_t* VAR_7;
  uv_buf_t VAR_8;

  FUNC_0(VAR_3 > 0);
  FUNC_0(VAR_5->sa_family == VAR_0);

  VAR_7 = FUNC_1(sizeof(*VAR_7));
  FUNC_0(VAR_7 != ((void*)0));

  VAR_8 = *VAR_4;
  FUNC_0(0 == FUNC_2(VAR_7, VAR_2, &VAR_8, 1, VAR_5, VAR_1));
}
