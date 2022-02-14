
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wd_recvtime; int wd_sendtime; int wd_boottime; } ;
struct TYPE_5__ {TYPE_1__ hs_wd; } ;


 TYPE_2__* FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(const void *VAR_2, const void *VAR_3)
{
 return (VAR_1 * (
  (FUNC_1(FUNC_0(VAR_3)) ? FUNC_0(VAR_3)->hs_wd.wd_recvtime - VAR_0
      : FUNC_0(VAR_3)->hs_wd.wd_sendtime - FUNC_0(VAR_3)->hs_wd.wd_boottime)
  -
  (FUNC_1(FUNC_0(VAR_2)) ? FUNC_0(VAR_2)->hs_wd.wd_recvtime - VAR_0
      : FUNC_0(VAR_2)->hs_wd.wd_sendtime - FUNC_0(VAR_2)->hs_wd.wd_boottime)
 ));
}
