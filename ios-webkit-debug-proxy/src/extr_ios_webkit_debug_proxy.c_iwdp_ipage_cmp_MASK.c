
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef TYPE_1__* iwdp_ipage_t ;
struct TYPE_2__ {scalar_t__ page_num; } ;



int FUNC_0(const void *VAR_0, const void *VAR_1) {
  const iwdp_ipage_t VAR_2 = *((iwdp_ipage_t *)VAR_0);
  const iwdp_ipage_t VAR_3 = *((iwdp_ipage_t *)VAR_1);
  if (VAR_2 == VAR_3 || !VAR_2 || !VAR_3) {
    return (VAR_2 == VAR_3 ? 0 : VAR_2 ? -1 : 1);
  }
  uint32_t VAR_4 = VAR_2->page_num;
  uint32_t VAR_5 = VAR_3->page_num;
  return (VAR_4 == VAR_5 ? 0 : VAR_4 < VAR_5 ? -1 : 1);
}
