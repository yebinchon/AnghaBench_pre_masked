
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int flags; int loop; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int uv_os_sock_t ;
struct TYPE_8__ {int iAddressFamily; } ;
typedef TYPE_2__ WSAPROTOCOL_INFOW ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,char*,int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,TYPE_1__*,int ,int ) ;

int FUNC_6(uv_udp_t* VAR_5, uv_os_sock_t VAR_6) {
  WSAPROTOCOL_INFOW VAR_7;
  int VAR_8;
  int VAR_9;


  VAR_8 = (int) sizeof VAR_7;
  if (FUNC_1(VAR_6,
                 VAR_1,
                 VAR_2,
                 (char*) &VAR_7,
                 &VAR_8) == VAR_0) {
    return FUNC_4(FUNC_0());
  }

  VAR_9 = FUNC_5(VAR_5->loop,
                          VAR_5,
                          VAR_6,
                          VAR_7.iAddressFamily);
  if (VAR_9)
    return FUNC_4(VAR_9);

  if (FUNC_2(VAR_5))
    VAR_5->flags |= VAR_3;

  if (FUNC_3(VAR_5))
    VAR_5->flags |= VAR_4;

  return 0;
}
