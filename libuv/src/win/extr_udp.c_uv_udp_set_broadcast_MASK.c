
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ socket; } ;
typedef TYPE_1__ uv_udp_t ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ,char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(uv_udp_t* VAR_4, int VAR_5) {
  BOOL VAR_6 = (BOOL) VAR_5;

  if (VAR_4->socket == VAR_0)
    return VAR_3;

  if (FUNC_1(VAR_4->socket,
                 VAR_1,
                 VAR_2,
                 (char*) &VAR_6,
                 sizeof VAR_6)) {
    return FUNC_2(FUNC_0());
  }

  return 0;
}
