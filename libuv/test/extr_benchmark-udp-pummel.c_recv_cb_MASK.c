
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uv_udp_t ;
struct TYPE_3__ {int base; } ;
typedef TYPE_1__ uv_buf_t ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int ,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(uv_udp_t* VAR_4,
                    ssize_t VAR_5,
                    const uv_buf_t* VAR_6,
                    const struct sockaddr* VAR_7,
                    unsigned VAR_8) {
  if (VAR_5 == 0)
    return;

  if (VAR_5 < 0) {
    FUNC_0(VAR_5 == VAR_2);
    return;
  }

  FUNC_0(VAR_7->sa_family == VAR_0);
  FUNC_0(!FUNC_1(VAR_6->base, VAR_1, VAR_5));

  VAR_3++;
}
