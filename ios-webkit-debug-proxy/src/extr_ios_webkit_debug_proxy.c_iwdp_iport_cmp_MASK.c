
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* iwdp_iport_t ;
struct TYPE_2__ {scalar_t__ port; } ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
  const iwdp_iport_t VAR_2 = *((iwdp_iport_t *)VAR_0);
  const iwdp_iport_t VAR_3 = *((iwdp_iport_t *)VAR_1);
  if (VAR_2 == VAR_3 || !VAR_2 || !VAR_3) {
    return (VAR_2 == VAR_3 ? 0 : VAR_2 ? -1 : 1);
  }
  uint32_t VAR_4 = VAR_2->port;
  uint32_t VAR_5 = VAR_3->port;
  return (VAR_4 == VAR_5 ? 0 : VAR_4 < VAR_5 ? -1 : 1);
}
